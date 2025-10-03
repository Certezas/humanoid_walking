#include "op3_kajita_walking_module/kajita_walking_controller.h"


KajitaWalkingController::KajitaWalkingController(const rclcpp::NodeOptions & options)
  : Node("op3_kajita_walking_controller_node", options) {
    RCLCPP_INFO(this->get_logger(), "Iniciando o Módulo de Caminhada Kajita...");

    this->declare_parameter<std::string>("publish_mode", "joint_state");
    this->get_parameter("publish_mode", publish_mode_);
    RCLCPP_INFO(this->get_logger(), "Modo de Publicação: %s", publish_mode_.c_str());

    this->initialize();

    Kp_gz_ = 20.0; // Ajustar


    initial_pose_achieved_ = false;
    initial_pose_duration_ = 3.0; // Duração de 3 segundos para a transição
    initial_pose_ticks_count_ = 0;

    // Pose inicial alvo - Pode ser ajustada conforme necessário
    // Braços abaixados e pernas em posição neutra
    target_initial_pose_["r_hip_yaw"] = 0.0;
    target_initial_pose_["r_hip_roll"] = 0.0;
    target_initial_pose_["r_hip_pitch"] = 0.0;
    target_initial_pose_["r_knee"] = 0.0;
    target_initial_pose_["r_ank_pitch"] = 0.0;
    target_initial_pose_["r_ank_roll"] = 0.0;
    target_initial_pose_["l_hip_yaw"] = 0.0;
    target_initial_pose_["l_hip_roll"] = 0.0;
    target_initial_pose_["l_hip_pitch"] = 0.0;
    target_initial_pose_["l_knee"] = 0.0;
    target_initial_pose_["l_ank_pitch"] = 0.0;
    target_initial_pose_["l_ank_roll"] = 0.0;
    target_initial_pose_["r_sho_pitch"] = 0.0; 
    target_initial_pose_["r_sho_roll"] = -1.3;
    target_initial_pose_["r_el"] = 0.2;
    target_initial_pose_["l_sho_pitch"] = 0.0; 
    target_initial_pose_["l_sho_roll"] = 1.3;
    target_initial_pose_["l_el"] = -0.2;
    target_initial_pose_["head_pan"] = 0.0;
    target_initial_pose_["head_tilt"] = 0.0;

    // ====================================================================
    // Definição dos Offsets de Pose do Corpo  
    // ====================================================================
    x_offset_ = 0.0;
    y_offset_ = 0.0;
    z_offset_ = 0.0;
    roll_offset_ = 0.0;
    pitch_offset_ = 10.0 * M_PI / 180.0; // Inclinando tronco 10 graus para frente
    yaw_offset_ = 0.0;

    all_joint_names_ = {
        "r_hip_yaw", "r_hip_roll", "r_hip_pitch", "r_knee", "r_ank_pitch", "r_ank_roll",
        "l_hip_yaw", "l_hip_roll", "l_hip_pitch", "l_knee", "l_ank_pitch", "l_ank_roll",
        "r_sho_pitch", "r_sho_roll", "r_el", "l_sho_pitch", "l_sho_roll", "l_el",
        "head_pan", "head_tilt"
    };

    cmd_vel_sub_ = this->create_subscription<geometry_msgs::msg::Twist>(
        "/cmd_vel", 10, std::bind(&KajitaWalkingController::cmdVelCallback, this, std::placeholders::_1));

    joint_state_pub_ = this->create_publisher<sensor_msgs::msg::JointState>("/joint_states", 10);

    for (const auto& joint_name : all_joint_names_) {
        std::string topic_name = "/robotis_op3/" + joint_name + "_position/command";
        joint_publishers_[joint_name] = this->create_publisher<std_msgs::msg::Float64>(topic_name, 10);
    }   
        
    kinematics_ = new robotis_op::OP3KinematicsDynamics(robotis_op::WholeBody);
    RCLCPP_INFO(this->get_logger(), "Biblioteca de Cinemática Inversa inicializada.");
    
    process_timer_ = this->create_wall_timer(
        std::chrono::duration<double>(dt_),
        std::bind(&KajitaWalkingController::process, this));

    RCLCPP_INFO(this->get_logger(), "Controlador Kajita pronto para operar.");
}

KajitaWalkingController::~KajitaWalkingController()
{
    delete kinematics_;
}

void KajitaWalkingController::initialize()
{
    // 1. Parâmetros
    vx_desejada_ = 0.03; // m/s
    n_step_ = 20;
    t_step_ = 0.5; 
    largura_passo_base_ = 0.03; // Largura do passo (distância lateral entre os pés)
    zc_ = 0.22;
    g_ = 9.81;
    dt_ = 0.001;
    K_preview_ = int(1.6 / dt_);
    t_dsp_ = t_step_ * 0.2; // 20% do tempo de passo
    t_ssp_ = t_step_ - t_dsp_;
        
    // 2. Geração do Plano de Passos (step_pos_)
    step_pos_.clear();
    step_pos_.push_back(Eigen::Vector2d(0.0, 0.0)); // Posição inicial no centro
    double sinal = 1.0;
    double dist_x = vx_desejada_ * t_step_;
    for (int i = 0; i < n_step_; ++i) {
        double dy_total = 0;
        if (i == 0) {
            dy_total = sinal * (largura_passo_base_ / 2.0);
        } else {
            sinal = -sinal;
            dy_total = sinal * largura_passo_base_;
        }
        step_pos_.push_back(Eigen::Vector2d(step_pos_.back().x() + dist_x,
                                            step_pos_.back().y() + dy_total));
    }

    // 3. Geração da Trajetória de Referência do ZMP 
    ZMP_x_ref_.clear(); ZMP_y_ref_.clear();

    int idx_passo_gerador = 0;
    double tempo_no_passo_gerador = 0.0;
    int K_ref_total = int((n_step_ * t_step_) / dt_) + K_preview_;
    
    for (int k = 0; k < K_ref_total; ++k) {
        if (tempo_no_passo_gerador >= t_step_ && idx_passo_gerador < n_step_) {
            tempo_no_passo_gerador = 0.0;
            idx_passo_gerador++;
        }
        
        double zmp_x, zmp_y;
        if (static_cast<size_t>(idx_passo_gerador + 1) >= step_pos_.size()) {
            zmp_x = step_pos_.back().x();
            zmp_y = step_pos_.back().y();
        } else if (tempo_no_passo_gerador < t_ssp_) {
            zmp_x = step_pos_[idx_passo_gerador].x();
            zmp_y = step_pos_[idx_passo_gerador].y();
        } else {
            Vector2d pe_inicial = step_pos_[idx_passo_gerador];
            Vector2d pe_final = step_pos_[idx_passo_gerador + 1];
            double tempo_na_dsp = tempo_no_passo_gerador - t_ssp_;
            double tau = tempo_na_dsp / t_dsp_;
            double h01 = -2.0 * pow(tau, 3) + 3.0 * pow(tau, 2);
            double h00 = 1.0 - h01;
            zmp_x = h00 * pe_inicial[0] + h01 * pe_final[0];
            zmp_y = h00 * pe_inicial[1] + h01 * pe_final[1];
        }
        ZMP_x_ref_.push_back(zmp_x);
        ZMP_y_ref_.push_back(zmp_y);
        tempo_no_passo_gerador += dt_;
    }
    
    K_sim_ = ZMP_x_ref_.size() - K_preview_;

    // 4. Cálculo de Ganhos 
    A_.resize(3,3); A_ << 1, dt_, dt_*dt_/2, 0, 1, dt_, 0, 0, 1;
    B_.resize(3,1); B_ << dt_*dt_*dt_/6, dt_*dt_/2, dt_;
    C_.resize(1,3); C_ << 1, 0, -zc_/g_;
    RowVector3d CA = C_ * A_;
    double CB = (C_ * B_)(0,0);
    B_til_.resize(4,1); B_til_ << CB, B_;
    I_til_.resize(4,1); I_til_ << 1, 0, 0, 0;
    F_til_.resize(4,3); F_til_.row(0) = CA; F_til_.bottomRows(3) = A_;
    Q_til_.setZero(4,4); Q_til_(0,0) = 1.0;
    A_til_.resize(4,4); A_til_ << 1, CA(0), CA(1), CA(2), 0, A_(0,0), A_(0,1), A_(0,2), 0, A_(1,0), A_(1,1), A_(1,2), 0, A_(2,0), A_(2,1), A_(2,2);
    S_ = solveDARE(A_til_, B_til_, Q_til_, 1e-6);
    double invd = 1.0 / (1e-6 + (B_til_.transpose() * S_ * B_til_)(0,0));
    Gi_ = (invd * (B_til_.transpose() * S_ * I_til_))(0,0);
    Gx_ = (invd * (B_til_.transpose() * S_ * F_til_));
    Ac_til_ = A_til_ - B_til_ * (invd * (B_til_.transpose() * S_ * A_til_));
    X_til_ = -(S_ * I_til_);
    Gp_.resize(K_preview_);
    for (int i = 0; i < K_preview_; ++i) {
        Gp_(i) = (invd * (B_til_.transpose() * X_til_))(0,0);
        X_til_ = Ac_til_.transpose() * X_til_;
    }

    // 5. Inicializa variáveis de estado
    sum_e_x_ = 0.0; sum_e_y_ = 0.0; k_sim_atual_ = 0;
    COM_x_ = MatrixXd::Zero(3, ZMP_x_ref_.size() + 1);
    COM_y_ = MatrixXd::Zero(3, ZMP_y_ref_.size() + 1);
    idx_passo_suporte_ = 0; // Inicia no passo 0
    tempo_no_passo_ = 0.0;
}

void KajitaWalkingController::process()
{

    // ==============================================================
    // BLOCO DE LÓGICA PARA ATINGIR A POSE INICIAL
    // ==============================================================
    if (!initial_pose_achieved_)
    {
        int total_ticks = static_cast<int>(initial_pose_duration_ / dt_);
        
        // Calcula a interpolação linear suave
        double alpha = static_cast<double>(initial_pose_ticks_count_) / total_ticks;
        alpha = std::min(1.0, std::max(0.0, alpha));

        std::map<std::string, double> angulos_atuais;

        // Assumindo que a pose de spawn é 0 para todas as juntas (T-pose)
        for (const auto& pair : target_initial_pose_) {
            const std::string& joint_name = pair.first;
            double target_angle = pair.second;
            double initial_angle = 0.0; // Posição inicial da T-pose
            
            // Fórmula de Interpolação Linear (LERP)
            angulos_atuais[joint_name] = initial_angle * (1.0 - alpha) + target_angle * alpha;
        }

        // Publica os ângulos calculados nos dois modos de publicação
        if (publish_mode_ == "joint_state") {
            sensor_msgs::msg::JointState goal_joint_msg;
            goal_joint_msg.header.stamp = this->now();
            for (const auto& joint_name : all_joint_names_) {
                goal_joint_msg.name.push_back(joint_name);
                goal_joint_msg.position.push_back(angulos_atuais.at(joint_name));
            }
            joint_state_pub_->publish(goal_joint_msg);
        }
        else if (publish_mode_ == "individual_topics") {
            for (const auto& pair : angulos_atuais) {
                if (joint_publishers_.count(pair.first)) {
                    auto goal_msg = std_msgs::msg::Float64();
                    goal_msg.data = pair.second;
                    joint_publishers_[pair.first]->publish(goal_msg);
                }
            }
        }

        // Incrementa o contador de tempo
        initial_pose_ticks_count_++;

        // Verifica se a transição terminou
        if (initial_pose_ticks_count_ >= total_ticks) {
            initial_pose_achieved_ = true;
            RCLCPP_INFO(this->get_logger(), "Pose inicial alcançada. Iniciando a caminhada...");
        }

        return; 
    }
    

    // ==============================================================
    // BLOCO DE LÓGICA CAMINHADA
    // ==============================================================

    // --- Etapa 1: Gerenciamento de Tempo e Estado da Caminhada ---
    if (k_sim_atual_ >= K_sim_) {
        if (k_sim_atual_ == K_sim_) {
             RCLCPP_INFO(this->get_logger(), "Caminhada planejada concluída.");
             k_sim_atual_++;
        }
        return;
    }

    tempo_no_passo_ += dt_;
    if (tempo_no_passo_ >= t_step_) {
        tempo_no_passo_ -= t_step_;
        if(idx_passo_suporte_ < n_step_){ 
            idx_passo_suporte_++;
        }
    }
    int k = k_sim_atual_;

    // --- Etapa 2: Controlador por Antevisão do CoM ---
    double zx = (C_ * COM_x_.col(k))(0,0);
    double zy = (C_ * COM_y_.col(k))(0,0);
    double ex = zx - ZMP_x_ref_[k];
    double ey = zy - ZMP_y_ref_[k];
    sum_e_x_ += ex;
    sum_e_y_ += ey;
    VectorXd Zx_fut(K_preview_);
    VectorXd Zy_fut(K_preview_);
    for (int j = 0; j < K_preview_; ++j) {
        Zx_fut(j) = ZMP_x_ref_[k + j];
        Zy_fut(j) = ZMP_y_ref_[k + j];
    }
    double ux = -Gi_ * sum_e_x_ - (Gx_ * COM_x_.col(k))(0,0) - (Gp_.transpose() * Zx_fut)(0,0);
    double uy = -Gi_ * sum_e_y_ - (Gx_ * COM_y_.col(k))(0,0) - (Gp_.transpose() * Zy_fut)(0,0);
    COM_x_.col(k+1) = A_ * COM_x_.col(k) + B_ * ux;
    COM_y_.col(k+1) = A_ * COM_y_.col(k) + B_ * uy;

    // --- Etapa 3: Preparar Poses para IK ---
    Eigen::Matrix4d body_pose = Eigen::Matrix4d::Identity();

    // 3.1. Criar a matriz de rotação a partir dos ângulos de Euler (RPY)
    Eigen::Matrix3d body_rotation = robotis_framework::convertRPYToRotation(
        roll_offset_, pitch_offset_, yaw_offset_);

    // 3.2. Aplicar a rotação e a translação (posição do CoM) na matriz de pose do corpo
    body_pose.topLeftCorner<3,3>() = body_rotation;
    body_pose.topRightCorner<3,1>() << COM_x_(0, k+1) + x_offset_, 
                                    COM_y_(0, k+1) + y_offset_, 
                                    zc_ + z_offset_;

    Eigen::Matrix4d right_foot_pose = Eigen::Matrix4d::Identity();
    Eigen::Matrix4d left_foot_pose  = Eigen::Matrix4d::Identity();
    
    bool pe_esquerdo_e_balanco = (idx_passo_suporte_ % 2 != 0); 

    // Define a posição inicial dos pés (antes de qualquer passo)
    Vector2d pe_direito_inicial(0.0, -largura_passo_base_ / 2.0);
    Vector2d pe_esquerdo_inicial(0.0, largura_passo_base_ / 2.0);

    if (tempo_no_passo_ < t_ssp_ && idx_passo_suporte_ <= n_step_) { // SSP
        auto clamp01 = [](double v){ return v < 0.0 ? 0.0 : (v > 1.0 ? 1.0 : v); };
        double s = clamp01(tempo_no_passo_ / t_ssp_);

        // smoothstep 3s^2 - 2s^3 para (x,y): velocidade zero nas extremidades
        auto smoothstep = [](double v){
            if (v <= 0.0) return 0.0;
            if (v >= 1.0) return 1.0;
            return v*v*(3.0 - 2.0*v);
        };
        double sc = smoothstep(s);

        double altura_passo = 0.04;
        double z_sin = altura_passo * std::sin(s * M_PI);

        if (pe_esquerdo_e_balanco) { // esquerdo = balanço, direito = suporte
            // pé de suporte (direito)
            Eigen::Vector2d suporte = (idx_passo_suporte_ == 0) ? pe_direito_inicial
                                                                : step_pos_[idx_passo_suporte_ - 1];
            right_foot_pose.topRightCorner<3,1>() << suporte.x(), suporte.y(), 0.0;

            // início do swing (esquerdo)
            Eigen::Vector2d inicio = (idx_passo_suporte_ == 1) ? pe_esquerdo_inicial
                                                            : step_pos_[idx_passo_suporte_ - 2];
            Eigen::Vector2d fim = step_pos_[idx_passo_suporte_];

            double x = (1.0 - sc) * inicio.x() + sc * fim.x();
            double y = (1.0 - sc) * inicio.y() + sc * fim.y();

            if (s >= 1.0 - 1e-12)  left_foot_pose.topRightCorner<3,1>() << fim.x(), fim.y(), 0.0;
            else                   left_foot_pose.topRightCorner<3,1>() << x, y, z_sin;

        } else { // direito = balanço, esquerdo = suporte (primeiro passo típico)
            // pé de suporte (esquerdo)
            Eigen::Vector2d suporte = (idx_passo_suporte_ == 0) ? pe_esquerdo_inicial
                                                                : step_pos_[idx_passo_suporte_ - 1];
            left_foot_pose.topRightCorner<3,1>() << suporte.x(), suporte.y(), 0.0;

            // início do swing (direito)
            Eigen::Vector2d inicio = (idx_passo_suporte_ == 0) ? pe_direito_inicial
                                                            : step_pos_[idx_passo_suporte_ - 2];
            Eigen::Vector2d fim = step_pos_[idx_passo_suporte_];

            double x = (1.0 - sc) * inicio.x() + sc * fim.x();
            double y = (1.0 - sc) * inicio.y() + sc * fim.y();

            if (s >= 1.0 - 1e-12)  right_foot_pose.topRightCorner<3,1>() << fim.x(), fim.y(), 0.0;
            else                   right_foot_pose.topRightCorner<3,1>() << x, y, z_sin;
        }
    } else { // DSP — manter pés em contato
        if (idx_passo_suporte_ == 0) {
            // estado inicial
            right_foot_pose.topRightCorner<3,1>() << pe_direito_inicial.x(),  pe_direito_inicial.y(),  0.0;
            left_foot_pose.topRightCorner<3,1>()  << pe_esquerdo_inicial.x(), pe_esquerdo_inicial.y(), 0.0;
        } else {
            // suporte = passo anterior, pousado = passo atual
            Eigen::Vector2d suporte = step_pos_[idx_passo_suporte_ - 1];
            int idx_pousado = std::min(idx_passo_suporte_, static_cast<int>(step_pos_.size() - 1));
            Eigen::Vector2d pousado = step_pos_[idx_pousado];

            if (pe_esquerdo_e_balanco) {
                left_foot_pose.topRightCorner<3,1>()  << pousado.x(), pousado.y(), 0.0;
                right_foot_pose.topRightCorner<3,1>() << suporte.x(), suporte.y(), 0.0;
            } else {
                right_foot_pose.topRightCorner<3,1>() << pousado.x(), pousado.y(), 0.0;
                left_foot_pose.topRightCorner<3,1>()  << suporte.x(), suporte.y(), 0.0;
            }
        }
    }



    // --- Etapa 4: Chamada da IK e Publicação ---
    Eigen::Matrix4d body_pose_inv = body_pose.inverse();
    Eigen::Matrix4d right_foot_pose_relativa = body_pose_inv * right_foot_pose;
    Eigen::Matrix4d left_foot_pose_relativa  = body_pose_inv * left_foot_pose;

    Eigen::Vector3d pos_perna_direita = right_foot_pose_relativa.topRightCorner<3,1>();
    Eigen::Vector3d rpy_perna_direita = robotis_framework::convertRotationToRPY(right_foot_pose_relativa.topLeftCorner<3,3>());
    Eigen::Vector3d pos_perna_esquerda = left_foot_pose_relativa.topRightCorner<3,1>();
    Eigen::Vector3d rpy_perna_esquerda = robotis_framework::convertRotationToRPY(left_foot_pose_relativa.topLeftCorner<3,3>());
    

    double angulos_perna_direita[6], angulos_perna_esquerda[6];
    bool sucesso_ik_direita = kinematics_->calcInverseKinematicsForRightLeg(angulos_perna_direita, pos_perna_direita.x(), pos_perna_direita.y(), pos_perna_direita.z(), rpy_perna_direita.x(), rpy_perna_direita.y(), rpy_perna_direita.z());
    bool sucesso_ik_esquerda = kinematics_->calcInverseKinematicsForLeftLeg(angulos_perna_esquerda, pos_perna_esquerda.x(), pos_perna_esquerda.y(), pos_perna_esquerda.z(), rpy_perna_esquerda.x(), rpy_perna_esquerda.y(), rpy_perna_esquerda.z());
    
    if (sucesso_ik_direita && sucesso_ik_esquerda) {
        // ETAPA 1: Preencher o mapa com os ângulos base calculados pela Cinemática Inversa (IK).
        std::map<std::string, double> angulos_calculados;
        angulos_calculados["r_hip_yaw"] = angulos_perna_direita[0];
        angulos_calculados["r_hip_roll"] = angulos_perna_direita[1];
        angulos_calculados["r_hip_pitch"] = angulos_perna_direita[2];
        angulos_calculados["r_knee"] = angulos_perna_direita[3];
        angulos_calculados["r_ank_pitch"] = angulos_perna_direita[4];
        angulos_calculados["r_ank_roll"] = angulos_perna_direita[5];
        angulos_calculados["l_hip_yaw"] = angulos_perna_esquerda[0];
        angulos_calculados["l_hip_roll"] = angulos_perna_esquerda[1];
        angulos_calculados["l_hip_pitch"] = angulos_perna_esquerda[2];
        angulos_calculados["l_knee"] = angulos_perna_esquerda[3];
        angulos_calculados["l_ank_pitch"] = angulos_perna_esquerda[4];
        angulos_calculados["l_ank_roll"] = angulos_perna_esquerda[5];
        
        // =========================================================================================
        // ETAPA 2: ATUALIZAR O ESTADO INTERNO DA CINEMÁTICA COM OS ÂNGULOS ACIMA
        // =========================================================================================
        for (int id = 1; id <= ALL_JOINT_ID; id++) {
            robotis_op::LinkData* link = kinematics_->op3_link_data_[id];
            if (link != NULL && angulos_calculados.count(link->name_)) {
                link->joint_angle_ = angulos_calculados.at(link->name_);
            }
        }
        kinematics_->calcForwardKinematics(0);

        // =========================================================================================
        // ETAPA 3: CALCULAR E APLICAR A COMPENSAÇÃO DE GRAVIDADE
        // =========================================================================================
        Eigen::Vector3d gravity_in_world(0, 0, -g_);
        Eigen::Vector3d gravity_in_torso = body_rotation.transpose() * gravity_in_world;
        std::map<std::string, double> gravity_comp;

        if (tempo_no_passo_ >= t_ssp_) { // Fase de Duplo Suporte: Interpolar
            std::map<std::string, double> comp_sol_esq = calculateGravityCompensation(true, gravity_in_torso);
            std::map<std::string, double> comp_sol_dir = calculateGravityCompensation(false, gravity_in_torso);
            
            double alpha_ds = (tempo_no_passo_ - t_ssp_) / t_dsp_;
            bool apoio_anterior_era_direito = pe_esquerdo_e_balanco;
            std::vector<std::string> all_comp_joints = {"l_hip_roll", "l_knee", "r_hip_roll", "r_knee"};

            for (const auto& joint_name : all_comp_joints) {
                double comp_esq = comp_sol_esq.count(joint_name) ? comp_sol_esq.at(joint_name) : 0.0;
                double comp_dir = comp_sol_dir.count(joint_name) ? comp_sol_dir.at(joint_name) : 0.0;
                
                if (apoio_anterior_era_direito) {
                    gravity_comp[joint_name] = (1.0 - alpha_ds) * comp_dir + alpha_ds * comp_esq;
                } else {
                    gravity_comp[joint_name] = (1.0 - alpha_ds) * comp_esq + alpha_ds * comp_dir;
                }
            }
        } else { // Fase de Suporte Simples
            bool apoio_e_esquerdo = !pe_esquerdo_e_balanco;
            gravity_comp = calculateGravityCompensation(apoio_e_esquerdo, gravity_in_torso);
        }

        // Aplica a compensação calculada aos ângulos base da IK.
        for (const auto& comp_pair : gravity_comp) {
            if (angulos_calculados.count(comp_pair.first)) {
                angulos_calculados.at(comp_pair.first) += comp_pair.second;
            }
        }


        // =======================================================
        // Lógica de Publicação com dois modos
        // =======================================================
        if (publish_mode_ == "joint_state") {
            // MODO RViz2: Publica uma única mensagem JointState COMPLETA
            sensor_msgs::msg::JointState goal_joint_msg;
            goal_joint_msg.header.stamp = this->now();

            // Itera sobre a lista COMPLETA de todas as juntas do robô
            for (const auto& joint_name : all_joint_names_) {
                goal_joint_msg.name.push_back(joint_name);

                // Verifica se a junta atual é uma das pernas que calculámos
                if (angulos_calculados.count(joint_name)) {
                    // Se for uma junta da perna, usa o ângulo calculado do mapa
                    goal_joint_msg.position.push_back(angulos_calculados.at(joint_name));
                } else {
                    // Se não for (é um braço ou a cabeça), usa o valor padrão 0.0
                    goal_joint_msg.position.push_back(0.0);
                }
            }
            joint_state_pub_->publish(goal_joint_msg);
        }
        else if (publish_mode_ == "individual_topics") {
            // MODO WEBOTS: Publica em tópicos individuais
            for (const auto& joint_pair : angulos_calculados) {
                std::string joint_name = joint_pair.first;
                double joint_angle = joint_pair.second;

                auto goal_msg = std_msgs::msg::Float64();
                goal_msg.data = joint_angle;

                if (joint_publishers_.count(joint_name)) {
                    joint_publishers_[joint_name]->publish(goal_msg);
                }
            }
        }
    
    } else {
        RCLCPP_WARN(this->get_logger(), "A Cinemática Inversa falhou para o passo k=%d!", k);
    }

    ZMP_x_H_.push_back(zx);
    ZMP_y_H_.push_back(zy);
    COM_x_H_.push_back(COM_x_(0, k));
    COM_y_H_.push_back(COM_y_(0, k));
    
    // --- Etapa 5: Atualizar Contador de Tempo Principal ---
    k_sim_atual_++;
}

void KajitaWalkingController::cmdVelCallback(const geometry_msgs::msg::Twist::SharedPtr msg)
{
    vx_desejada_ = msg->linear.x;
    vy_desejada_ = msg->linear.y;
}

MatrixXd KajitaWalkingController::solveDARE(const MatrixXd &A, const MatrixXd &B, const MatrixXd &Q, double R)
{
    MatrixXd P = Q;
    for (int i = 0; i < 10000; ++i) {
        MatrixXd P_next = A.transpose() * P * A - (A.transpose() * P * B) * pow(R + (B.transpose() * P * B)(0,0), -1) * (B.transpose() * P * A) + Q;
        if ((P_next - P).norm() < 1e-6) {
            RCLCPP_INFO(this->get_logger(), "solveDARE convergiu em %d iteracoes.", i+1);
            return P_next;
        }
        P = P_next;
    }
    RCLCPP_WARN(this->get_logger(), "solveDARE nao convergiu.");
    return P;
}


// Substitua a função de compensação inteira pela versão abaixo

std::map<std::string, double> KajitaWalkingController::calculateGravityCompensation(
    bool is_left_support,
    const Eigen::Vector3d& gravity_in_torso_frame)
{
    std::map<std::string, double> compensations;

    // 1. Define as juntas da perna de apoio que queremos compensar.
    std::string hip_roll_joint_name = is_left_support ? "l_hip_roll" : "r_hip_roll";
    std::string knee_pitch_joint_name = is_left_support ? "l_knee" : "r_knee";
    std::vector<std::string> joints_to_compensate = {hip_roll_joint_name, knee_pitch_joint_name};

    // 2. Itera sobre cada junta que precisa de compensação.
    for (const auto& joint_name : joints_to_compensate)
    {
        double total_mass_above = 0.0;
        Eigen::Vector3d combined_moment_above = Eigen::Vector3d::Zero();

        // 3. Para a junta atual, recalcula do zero a massa e o momento de TUDO que está acima dela.
        // Isso é menos eficiente, mas muito mais robusto e fácil de verificar.
        for (int id = 1; id <= ALL_JOINT_ID; ++id) 
        {
            robotis_op::LinkData* current_link = kinematics_->op3_link_data_[id];
            if (current_link == NULL || current_link->mass_ == 0.0) continue;

            // Lógica para verificar se o 'current_link' está cinematicamente "acima" da 'joint_name'.
            // Para isso, "subimos" na árvore a partir do 'current_link' usando os pais.
            bool is_link_above = false;
            int parent_id = current_link->parent_;
            int joint_id_target = kinematics_->getLinkData(joint_name)->parent_;

            while (parent_id != -1) {
                if (parent_id == joint_id_target) {
                    is_link_above = true;
                    break;
                }
                parent_id = kinematics_->op3_link_data_[parent_id]->parent_;
            }

            if (is_link_above)
            {
                total_mass_above += current_link->mass_;
                Eigen::Vector3d com_in_world_frame = current_link->orientation_ * current_link->center_of_mass_ + current_link->position_;
                combined_moment_above += com_in_world_frame * current_link->mass_;
            }
        }
        
        // 4. Com a massa e CoM corretos, calcula o torque e a compensação.
        if (total_mass_above > 0.0)
        {
            Eigen::Vector3d combined_com_above = combined_moment_above / total_mass_above;
            Eigen::Vector3d joint_position = kinematics_->getLinkData(joint_name)->position_;
            Eigen::Vector3d vector_to_com = combined_com_above - joint_position;

            Eigen::Vector3d gravity_force = gravity_in_torso_frame * total_mass_above;
            Eigen::Vector3d torque_vector = vector_to_com.cross(gravity_force);
            
            Eigen::Vector3d joint_axis = kinematics_->getLinkData(joint_name)->joint_axis_.normalized();
            
            // A fórmula da tese (Eq. 4.21) usa um sinal negativo.
            double compensated_torque = -torque_vector.dot(joint_axis);
            double delta_theta = compensated_torque / Kp_gz_;

            compensations[joint_name] = delta_theta;
        }
    }
    return compensations;
}