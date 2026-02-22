#include "op3_kajita_walking_module/kajita_walking_controller.h"

using namespace Eigen;

KajitaWalkingController::KajitaWalkingController(const rclcpp::NodeOptions & options)
  : Node("op3_kajita_walking_controller_node", options) {
    RCLCPP_INFO(this->get_logger(), "Iniciando o Módulo de Caminhada Kajita...");

    this->declare_parameter<std::string>("publish_mode", "individual_topics");
    this->get_parameter("publish_mode", publish_mode_);
    RCLCPP_INFO(this->get_logger(), "Modo de Publicação: %s", publish_mode_.c_str());

    this->set_parameter(rclcpp::Parameter("use_sim_time", true));
    RCLCPP_INFO(this->get_logger(), "Usando tempo simulado: %s", this->get_parameter("use_sim_time").as_bool() ? "true" : "false");

    this->initialize();

    // Inicializa variáveis do compensador de gravidade
    Kp_gz_ = 100.0; // Ajustar
    enable_gravity_compensation_ = true; //Alterar para false se não quiser compensação de gravidade

    // INICIALIZAÇÃO DA POSE INICIAL
    initial_pose_duration_ = 3.0; // Duração em segundos
    initial_pose_elapsed_time_ = 0.0;
    initial_pose_achieved_ = false;

    // Pose inicial alvo (Agachamento e braços para baixo)
    target_initial_pose_["r_hip_yaw"] = 0.0;
    target_initial_pose_["r_hip_roll"] = 0.0;
    target_initial_pose_["r_hip_pitch"] = 30 * M_PI / 180.0; // 30 graus em radianos
    target_initial_pose_["r_knee"] = -60 * M_PI / 180.0; // -60 graus em radianos
    target_initial_pose_["r_ank_pitch"] = -30 * M_PI / 180.0;
    target_initial_pose_["r_ank_roll"] = 0.0;
    target_initial_pose_["l_hip_yaw"] = 0.0;
    target_initial_pose_["l_hip_roll"] = 0.0;
    target_initial_pose_["l_hip_pitch"] = -30 * M_PI / 180.0;
    target_initial_pose_["l_knee"] = 60 * M_PI / 180.0;
    target_initial_pose_["l_ank_pitch"] = 30 * M_PI / 180.0;
    target_initial_pose_["l_ank_roll"] = 0.0;
    target_initial_pose_["r_sho_pitch"] = 0.0; 
    target_initial_pose_["r_sho_roll"] = -75 * M_PI / 180.0;
    target_initial_pose_["r_el"] = 10 * M_PI / 180.0;
    target_initial_pose_["l_sho_pitch"] = 0.0; 
    target_initial_pose_["l_sho_roll"] = 75 * M_PI / 180.0;
    target_initial_pose_["l_el"] = -10 * M_PI / 180.0;
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

    // --- Configuração dos Grupos de Callback para Multi-threading ---
    timer_group_ = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
    sub_group_ = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
    rclcpp::SubscriptionOptions sub_options;
    sub_options.callback_group = sub_group_;

    cmd_vel_sub_ = this->create_subscription<geometry_msgs::msg::Twist>(
        "/cmd_vel", 10, std::bind(&KajitaWalkingController::cmdVelCallback, this, std::placeholders::_1),
        sub_options);

    joint_state_pub_ = this->create_publisher<sensor_msgs::msg::JointState>("/joint_states", 10);

    for (const auto& joint_name : all_joint_names_) {
        std::string topic_name = "/robotis_op3/" + joint_name + "_position/command";
        joint_publishers_[joint_name] = this->create_publisher<std_msgs::msg::Float64>(topic_name, 10);
    }   
        
    kinematics_ = new robotis_op::OP3KinematicsDynamics(robotis_op::WholeBody);
    RCLCPP_INFO(this->get_logger(), "Biblioteca de Cinemática Inversa inicializada.");
    
    process_timer_ = rclcpp::create_timer(
        this,                           
        this->get_clock(),              //Simulação ou Real)
        std::chrono::duration<double>(dt_), 
        std::bind(&KajitaWalkingController::process, this), 
        timer_group_                   
    );

    RCLCPP_INFO(this->get_logger(), "Controlador Kajita pronto para operar.");
}

KajitaWalkingController::~KajitaWalkingController()
{
    delete kinematics_;
}

void KajitaWalkingController::initialize()
{
    // Parâmetros
    vx_desejada_ = 0.0; // m/s
    vy_desejada_ = 0.0;
    omega_desejada_ = 0.2; // rad/s
    n_step_ = 20;
    t_step_ = 0.3; 
    largura_passo_base_ = 0.03; // Largura do passo (distância lateral entre os pés)
    zc_ = 0.235; // Altura do centro de massa
    g_ = 9.81;
    dt_ = 0.032;
    K_preview_ = int(2.0 / dt_);
    t_dsp_ = t_step_ * 0.2; // 20% do tempo de passo
    t_ssp_ = t_step_ - t_dsp_;
    altura_passo_ = 0.05; // Altura máxima do pé durante o balanço
        
    // Geração do Plano de Passos (step_pos_)
    step_pos_.clear();
    step_yaw_.push_back(0.0);
    step_pos_.push_back(Eigen::Vector2d(0.0, 0.0)); // Posição inicial no centro
    double t_step = t_step_; 
    double sx = vx_desejada_ * t_step;
    double sy = vy_desejada_ * t_step;
    double s_theta = omega_desejada_ * t_step;
    double current_theta = 0.0;

    for (int i = 0; i < n_step_; ++i) {
        double foot_sign = (i % 2 == 0) ? 1.0 : -1.0;        
        current_theta += s_theta;        
        double dx_global, dy_global;
        
        if (i == 0) {
            dx_global = sx; 
            dy_global = sy + (foot_sign * largura_passo_base_ / 2.0); 
        } else {
            double step_dy_local = sy + foot_sign * largura_passo_base_;             
            double theta_prev = step_yaw_.back();
            dx_global = sx * std::cos(theta_prev) - step_dy_local * std::sin(theta_prev);
            dy_global = sx * std::sin(theta_prev) + step_dy_local * std::cos(theta_prev);
        }

        Eigen::Vector2d next_pos;
        if(i == 0) {
             next_pos = Eigen::Vector2d(dx_global, dy_global); 
        } else {
             next_pos = step_pos_.back() + Eigen::Vector2d(dx_global, dy_global);
        }

        step_pos_.push_back(next_pos);
        step_yaw_.push_back(current_theta);
    }

    // Geração da Trajetória de Referência do ZMP 
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

    // Cálculo de Ganhos 
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

    // Inicializa variáveis de estado
    sum_e_x_ = 0.0; sum_e_y_ = 0.0; k_sim_atual_ = 0;
    COM_x_ = MatrixXd::Zero(3, ZMP_x_ref_.size() + 1);
    COM_y_ = MatrixXd::Zero(3, ZMP_y_ref_.size() + 1);
    idx_passo_suporte_ = 0; 
    tempo_no_passo_ = 0.0;
}

void KajitaWalkingController::process()
{

    // ==============================================================
    // BLOCO DE LÓGICA PARA ATINGIR A POSE INICIAL
    // ==============================================================
    if (!initial_pose_achieved_)
    {
        double alpha = initial_pose_elapsed_time_ / initial_pose_duration_;
        alpha = std::min(1.0, std::max(0.0, alpha));

        std::map<std::string, double> angulos_atuais;

        for (const auto& pair : target_initial_pose_) {
            const std::string& joint_name = pair.first;
            double target_angle = pair.second;
            double initial_angle = 0.0; // Posição inicial (T-pose)
            
            angulos_atuais[joint_name] = initial_angle * (1.0 - alpha) + target_angle * alpha;
        }

        // Publica os ângulos calculados
        if (publish_mode_ == "joint_state") {
            sensor_msgs::msg::JointState goal_joint_msg;
            goal_joint_msg.header.stamp = this->now();
            for (const auto& joint_name : all_joint_names_) {
                goal_joint_msg.name.push_back(joint_name);
                goal_joint_msg.position.push_back(angulos_atuais.count(joint_name) ? angulos_atuais.at(joint_name) : 0.0);
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

        initial_pose_elapsed_time_ += dt_;

        if (initial_pose_elapsed_time_ >= initial_pose_duration_) {
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

    // --- Etapa 3: Preparar Poses para IK (Com Orientação Dinâmica) ---

    // 1. Recuperar orientações (Yaw) dos passos
    // step_yaw_ deve ter sido preenchido no initialize() com a orientação acumulada de cada passo
    double yaw_passo_anterior = 0.0;
    double yaw_passo_atual = 0.0;
    
    if (idx_passo_suporte_ > 0 && idx_passo_suporte_ < (int)step_yaw_.size()) {
        yaw_passo_atual = step_yaw_[idx_passo_suporte_];
        yaw_passo_anterior = step_yaw_[idx_passo_suporte_ - 1];
    } else if (idx_passo_suporte_ == 0 && step_yaw_.size() > 0) {
        yaw_passo_atual = step_yaw_[0];
        yaw_passo_anterior = 0.0; // Assume 0.0 no início
    }

    // 2. Definir Orientação do Corpo (Tronco)
    // O corpo deve girar suavemente. Uma abordagem simples para Preview Control
    // é alinhar o corpo com a orientação do passo atual ou interpolar.
    // Aqui, usamos o yaw do passo atual para garantir alinhamento.
    double body_yaw_atual = yaw_passo_anterior; 
    
    // Na fase de balanço, interpolamos o corpo também para não "quebrar" a cintura
    double t_norm_body = 0.0;
    if (tempo_no_passo_ < t_ssp_) {
         t_norm_body = tempo_no_passo_ / t_ssp_;
         // Polinômio cúbico (Eq 2.24 do TCC) para suavizar a rotação do corpo
         double f_tau_body = 3 * std::pow(t_norm_body, 2) - 2 * std::pow(t_norm_body, 3);
         body_yaw_atual = yaw_passo_anterior + (yaw_passo_atual - yaw_passo_anterior) * f_tau_body;
    }

    // Matriz de Rotação do Corpo (inclui os offsets fixos + a rotação da odometria)
    Eigen::Matrix4d body_pose = Eigen::Matrix4d::Identity();
    Eigen::Matrix3d body_rotation = robotis_framework::convertRPYToRotation(
        roll_offset_, 
        pitch_offset_, 
        yaw_offset_ + body_yaw_atual // Adiciona a rotação calculada
    );
    
    body_pose.topLeftCorner<3,3>() = body_rotation;
    body_pose.topRightCorner<3,1>() << COM_x_(0, k+1) + x_offset_, 
                                       COM_y_(0, k+1) + y_offset_, 
                                       zc_ + z_offset_;

    // 3. Matrizes de Pose dos Pés
    Eigen::Matrix4d right_foot_pose = Eigen::Matrix4d::Identity();
    Eigen::Matrix4d left_foot_pose  = Eigen::Matrix4d::Identity();
    
    bool pe_esquerdo_e_balanco = (idx_passo_suporte_ % 2 != 0); 
    
    // Posições base locais (para o primeiro passo)
    Vector2d pe_direito_inicial(0.0, -largura_passo_base_ / 2.0);
    Vector2d pe_esquerdo_inicial(0.0, largura_passo_base_ / 2.0);

    if (tempo_no_passo_ < t_ssp_ && idx_passo_suporte_ <= n_step_) { // SSP (Single Support Phase)
        
        // --- Cálculo da Interpolação (Eq 2.24 e 2.25 do TCC) ---
        double t_norm = tempo_no_passo_ / t_ssp_;
        t_norm = std::max(0.0, std::min(1.0, t_norm)); // Clamp

        double two_pi = 2.0 * M_PI;
        double cycloid_progression = t_norm - std::sin(two_pi * t_norm) / two_pi; // Para X, Y
        double cubic_progression = 3 * std::pow(t_norm, 2) - 2 * std::pow(t_norm, 3); // Para Theta (Eq 2.24)
        double vertical_progression = 0.5 * (1.0 - std::cos(two_pi * t_norm)); // Para Z

        double z_step = altura_passo_ * vertical_progression;
        
        // Interpolação de Yaw para o pé de balanço (Eq. 2.25)
        double swing_yaw_angle = yaw_passo_anterior + (yaw_passo_atual - yaw_passo_anterior) * cubic_progression;
        
        // Matrizes de rotação para os pés
        Eigen::Matrix3d rot_support = robotis_framework::convertRPYToRotation(0, 0, yaw_passo_anterior);
        Eigen::Matrix3d rot_swing   = robotis_framework::convertRPYToRotation(0, 0, swing_yaw_angle);

        if (pe_esquerdo_e_balanco) { // ESQUERDO BALANÇO, DIREITO SUPORTE
            
            // PÉ DIREITO (Suporte): Fixo na posição anterior
            Eigen::Vector2d suporte = (idx_passo_suporte_ == 0) ? pe_direito_inicial
                                                                : step_pos_[idx_passo_suporte_ - 1];
            
            right_foot_pose.topLeftCorner<3,3>() = rot_support; // Orientação fixa
            right_foot_pose.topRightCorner<3,1>() << suporte.x(), suporte.y(), 0.0;

            // PÉ ESQUERDO (Balanço): Interpola da anterior para a atual
            Eigen::Vector2d inicio = (idx_passo_suporte_ == 1) ? pe_esquerdo_inicial
                                                               : step_pos_[idx_passo_suporte_ - 2];
            Eigen::Vector2d fim = step_pos_[idx_passo_suporte_];

            double x_step = inicio.x() + (fim.x() - inicio.x()) * cycloid_progression;
            double y_step = inicio.y() + (fim.y() - inicio.y()) * cycloid_progression;

            left_foot_pose.topLeftCorner<3,3>() = rot_swing; // Orientação interpolada (Eq 2.25)
            left_foot_pose.topRightCorner<3,1>() << x_step, y_step, z_step;

        } else { // DIREITO BALANÇO, ESQUERDO SUPORTE
            
            // PÉ ESQUERDO (Suporte): Fixo
            Eigen::Vector2d suporte = (idx_passo_suporte_ == 0) ? pe_esquerdo_inicial
                                                                : step_pos_[idx_passo_suporte_ - 1];
            
            left_foot_pose.topLeftCorner<3,3>() = rot_support; // Orientação fixa
            left_foot_pose.topRightCorner<3,1>() << suporte.x(), suporte.y(), 0.0;

            // PÉ DIREITO (Balanço): Interpola
            Eigen::Vector2d inicio = (idx_passo_suporte_ == 0) ? pe_direito_inicial
                                                               : step_pos_[idx_passo_suporte_ - 2];
            Eigen::Vector2d fim = step_pos_[idx_passo_suporte_];

            double x_step = inicio.x() + (fim.x() - inicio.x()) * cycloid_progression;
            double y_step = inicio.y() + (fim.y() - inicio.y()) * cycloid_progression;

            right_foot_pose.topLeftCorner<3,3>() = rot_swing; // Orientação interpolada (Eq 2.25)
            right_foot_pose.topRightCorner<3,1>() << x_step, y_step, z_step;
        }

    } else { // DSP (Double Support Phase)
        
        // Conversão segura de tamanho para int
        int total_steps = (int)step_pos_.size();
        int total_yaws = (int)step_yaw_.size();

        // --- DEFINIÇÕES DE ONDE OS PÉS DEVEM ESTAR NA DSP ---
        
        // 1. O pé que ACABOU de completar o passo (Current/Alvo)
        // Ele deve ficar fixo onde pousou (step_pos_[idx])
        Eigen::Vector2d pos_alvo_pousado = (idx_passo_suporte_ >= total_steps) ? step_pos_.back() : step_pos_[idx_passo_suporte_];
        double rot_alvo_pousado_val = (idx_passo_suporte_ >= total_yaws) ? step_yaw_.back() : step_yaw_[idx_passo_suporte_];
        Eigen::Matrix3d rot_matrix_alvo = robotis_framework::convertRPYToRotation(0, 0, rot_alvo_pousado_val);

        // 2. O pé que FICOU parado dando suporte (Previous/Anterior)
        // Ele deve continuar onde estava (step_pos_[idx-1])
        Eigen::Vector2d pos_suporte_fixo; 
        double rot_suporte_fixo_val;
        
        if (idx_passo_suporte_ == 0) {
            // Se é o primeiro passo, o "anterior" é a origem absoluta ou posição inicial dos pés
            // Assumindo que o pé de suporte inicial está em (0, -largura/2) ou (0, +largura/2)
            // Mas para simplificar a lógica global, usamos a referência do step 0 (0,0) e ajustamos no if abaixo se necessário
            pos_suporte_fixo = Eigen::Vector2d(0.0, 0.0);
            rot_suporte_fixo_val = 0.0;
        } else {
            pos_suporte_fixo = step_pos_[idx_passo_suporte_ - 1];
            rot_suporte_fixo_val = step_yaw_[idx_passo_suporte_ - 1];
        }
        Eigen::Matrix3d rot_matrix_suporte = robotis_framework::convertRPYToRotation(0, 0, rot_suporte_fixo_val);


        if (pe_esquerdo_e_balanco) {
            // Se a variável diz que o esquerdo é o de "balanço", significa que neste passo (idx)
            // foi o ESQUERDO que se moveu. Agora na DSP, ele acabou de chegar no chão.
            
            // PÉ ESQUERDO: Acabou de pousar no Alvo. Manter no Alvo.
            left_foot_pose.topLeftCorner<3,3>() = rot_matrix_alvo;
            left_foot_pose.topRightCorner<3,1>() << pos_alvo_pousado.x(), pos_alvo_pousado.y(), 0.0;

            // PÉ DIREITO: Foi o suporte durante o balanço. Manter no Anterior.
            right_foot_pose.topLeftCorner<3,3>() = rot_matrix_suporte;
            
            if (idx_passo_suporte_ == 0) {
                 // Caso especial passo 0: Direito estava na posição inicial de repouso
                 right_foot_pose.topRightCorner<3,1>() << pe_direito_inicial.x(), pe_direito_inicial.y(), 0.0;
            } else {
                 right_foot_pose.topRightCorner<3,1>() << pos_suporte_fixo.x(), pos_suporte_fixo.y(), 0.0;
            }

        } else {
            // Lógica inversa: O DIREITO foi quem se moveu e pousou.
            
            // PÉ DIREITO: Acabou de pousar no Alvo. Manter no Alvo.
            right_foot_pose.topLeftCorner<3,3>() = rot_matrix_alvo;
            right_foot_pose.topRightCorner<3,1>() << pos_alvo_pousado.x(), pos_alvo_pousado.y(), 0.0;

            // PÉ ESQUERDO: Foi o suporte. Manter no Anterior.
            left_foot_pose.topLeftCorner<3,3>() = rot_matrix_suporte;
            
            if (idx_passo_suporte_ == 0) {
                // Caso especial passo 0: Esquerdo estava na posição inicial de repouso
                left_foot_pose.topRightCorner<3,1>() << pe_esquerdo_inicial.x(), pe_esquerdo_inicial.y(), 0.0;
            } else {
                left_foot_pose.topRightCorner<3,1>() << pos_suporte_fixo.x(), pos_suporte_fixo.y(), 0.0;
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
        
        // Atualizar Cinemática 
        for (int id = 1; id <= ALL_JOINT_ID; id++) {
            robotis_op::LinkData* link = kinematics_->op3_link_data_[id];
            if (link != NULL && angulos_calculados.count(link->name_)) {
                link->joint_angle_ = angulos_calculados.at(link->name_);
            }
        }
        kinematics_->calcForwardKinematics(0);

        // Compensação de Gravidade 
        if (enable_gravity_compensation_) {
            Eigen::Vector3d gravity_in_world(0, 0, -g_);
            Eigen::Vector3d gravity_in_torso = body_rotation.transpose() * gravity_in_world;
            std::map<std::string, double> gravity_comp;

            if (tempo_no_passo_ >= t_ssp_) { // DSP
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
            } else { // SSP
                bool apoio_e_esquerdo = !pe_esquerdo_e_balanco;
                gravity_comp = calculateGravityCompensation(apoio_e_esquerdo, gravity_in_torso);
            }

            for (const auto& comp_pair : gravity_comp) {
                if (angulos_calculados.count(comp_pair.first)) {
                    angulos_calculados.at(comp_pair.first) += comp_pair.second;
                }
            }
        }

        // Publicação 
        if (publish_mode_ == "joint_state") {
            sensor_msgs::msg::JointState goal_joint_msg;
            goal_joint_msg.header.stamp = this->now();
            for (const auto& joint_name : all_joint_names_) {
                goal_joint_msg.name.push_back(joint_name);
                goal_joint_msg.position.push_back(angulos_calculados.count(joint_name) ? angulos_calculados.at(joint_name) : 0.0);
            }
            joint_state_pub_->publish(goal_joint_msg);
        }
        else if (publish_mode_ == "individual_topics") {
            for (const auto& joint_pair : angulos_calculados) {
                if (joint_publishers_.count(joint_pair.first)) {
                    auto goal_msg = std_msgs::msg::Float64();
                    goal_msg.data = joint_pair.second;
                    joint_publishers_[joint_pair.first]->publish(goal_msg);
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


    k_sim_atual_++;
}

// Callback do subscriber /cmd_vel. Atualiza as variáveis de velocidade linear (x) e lateral (y) desejadas para a caminhada.
void KajitaWalkingController::cmdVelCallback(const geometry_msgs::msg::Twist::SharedPtr msg)
{
    vx_desejada_ = msg->linear.x;
    vy_desejada_ = msg->linear.y;
    omega_desejada_ = msg->angular.z;
}

// Resolve a Equação Discreta Algébrica de Riccati (DARE) de forma iterativa para encontrar a matriz de ganho 'S' do controlador LQR.
MatrixXd KajitaWalkingController::solveDARE(const MatrixXd &A, const MatrixXd &B, const MatrixXd &Q, double R)
{
    MatrixXd P = Q;
    for (int i = 0; i < 10000; ++i) {
        MatrixXd P_next = A.transpose() * P * A - (A.transpose() * P * B) * pow(R + (B.transpose() * P * B)(0,0), -1) * (B.transpose() * P * A) + Q;
        if ((P_next - P).norm() < 1e-6) {
            if (i > 100) RCLCPP_INFO(this->get_logger(), "solveDARE convergiu em %d iteracoes.", i+1);
            return P_next;
        }
        P = P_next;
    }
    RCLCPP_WARN(this->get_logger(), "solveDARE nao convergiu.");
    return P;
}

// Calcula um ângulo de correção (feedforward) para as juntas da perna de apoio (hip_roll, knee) para neutralizar o torque da gravidade.
std::map<std::string, double> KajitaWalkingController::calculateGravityCompensation(
    bool is_left_support,
    const Eigen::Vector3d& gravity_in_torso_frame)
{
    std::map<std::string, double> compensations;

    std::string hip_roll_joint_name = is_left_support ? "l_hip_roll" : "r_hip_roll";
    std::string knee_pitch_joint_name = is_left_support ? "l_knee" : "r_knee";
    std::vector<std::string> joints_to_compensate = {hip_roll_joint_name, knee_pitch_joint_name};

    for (const auto& joint_name : joints_to_compensate)
    {
        double total_mass_above = 0.0;
        Eigen::Vector3d combined_moment_above = Eigen::Vector3d::Zero();

        for (int id = 1; id <= ALL_JOINT_ID; ++id) 
        {
            robotis_op::LinkData* current_link = kinematics_->op3_link_data_[id];
            if (current_link == NULL || current_link->mass_ == 0.0) continue;

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
        
        if (total_mass_above > 0.0)
        {
            Eigen::Vector3d combined_com_above = combined_moment_above / total_mass_above;
            Eigen::Vector3d joint_position = kinematics_->getLinkData(joint_name)->position_;
            Eigen::Vector3d vector_to_com = combined_com_above - joint_position;

            Eigen::Vector3d gravity_force = gravity_in_torso_frame * total_mass_above;
            Eigen::Vector3d torque_vector = vector_to_com.cross(gravity_force);
            
            Eigen::Vector3d joint_axis = kinematics_->getLinkData(joint_name)->joint_axis_.normalized();
            
            double compensated_torque = -torque_vector.dot(joint_axis);
            double delta_theta = compensated_torque / Kp_gz_;

            compensations[joint_name] = delta_theta;
        }
    }
    return compensations;
}

void KajitaWalkingController::jointStateCallback(const sensor_msgs::msg::JointState::SharedPtr msg)
{
    const std::lock_guard<std::mutex> lock(joint_state_mutex_);
    latest_joint_states_ = *msg;
}