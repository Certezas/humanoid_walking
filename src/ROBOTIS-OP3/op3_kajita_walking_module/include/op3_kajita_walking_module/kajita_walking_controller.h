#ifndef KAJITA_WALKING_CONTROLLER_H
#define KAJITA_WALKING_CONTROLLER_H

// Bibliotecas Padrão do C++
#include <vector>
#include <fstream>
#include <string>
#include <map>
#include <algorithm>

// Bibliotecas Externas (ROS, Eigen, etc.)
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "std_msgs/msg/float64.hpp"
#include <eigen3/Eigen/Dense>

// Cabeçalhos Específicos do Projeto
#include "op3_kinematics_dynamics/op3_kinematics_dynamics.h"
#include "op3_kinematics_dynamics/link_data.h"
#include "op3_kinematics_dynamics/op3_kinematics_dynamics_define.h"
#include "robotis_math/robotis_math.h"

// NOTA: 'using namespace Eigen;' foi removido daqui para seguir as boas práticas.

class KajitaWalkingController : public rclcpp::Node
{
public:
    // Construtor da classe.
    KajitaWalkingController(const rclcpp::NodeOptions & options);

    // Destrutor da classe.
    ~KajitaWalkingController();

private:
    // =========================================================================
    // Métodos Privados
    // =========================================================================

    // --- Lógica Principal ---
    void initialize();
    void process();
    Eigen::MatrixXd solveDARE(const Eigen::MatrixXd &A, const Eigen::MatrixXd &B, const Eigen::MatrixXd &Q, double R);

    // --- Callbacks ---
    void cmdVelCallback(const geometry_msgs::msg::Twist::SharedPtr msg);

        // Callback para o tópico /joint_states que atualiza os estados das juntas.
    void jointStateCallback(const sensor_msgs::msg::JointState::SharedPtr msg);

    // --- Método de Compensação de Gravidade ---
    std::map<std::string, double> calculateGravityCompensation(
        bool is_left_support,
        const Eigen::Vector3d& gravity_in_torso_frame
    );

    // =========================================================================
    // Variáveis Membro
    // =========================================================================

    // --- Interface ROS 2 ---
    rclcpp::TimerBase::SharedPtr process_timer_;
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_sub_;
    rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr joint_state_pub_;
    std::map<std::string, rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr> joint_publishers_;
    std::string publish_mode_;

    // Grupos de Callback para Multi-threading
    rclcpp::CallbackGroup::SharedPtr timer_group_;
    rclcpp::CallbackGroup::SharedPtr sub_group_;

    // --- Componentes do Robô e Cinemática ---
    robotis_op::OP3KinematicsDynamics* kinematics_;
    std::vector<std::string> all_joint_names_;

    // --- Máquina de Estados da Pose Inicial ---
    bool initial_pose_achieved_;
    double initial_pose_duration_;
    double initial_pose_elapsed_time_;
    std::map<std::string, double> target_initial_pose_;

    // --- Parâmetros de Entrada da Caminhada ---
    double vx_desejada_, vy_desejada_, omega_desejada_;
    int n_step_;
    double t_step_;
    double largura_passo_base_;
    std::vector<double> step_yaw_;

    // --- Offsets da Posição do Tronco ---
    double x_offset_, y_offset_, z_offset_;
    double roll_offset_, pitch_offset_, yaw_offset_;
    double hip_pitch_offset_;

    // --- Modelo Físico e Constantes da Simulação ---
    double zc_; // Altura constante do Centro de Massa (CoM)
    double g_;  // Aceleração da gravidade
    double dt_; // Passo de tempo da simulação
    double altura_passo_; // Altura do passo na fase de balanço

    // --- Matrizes e Ganhos do Controlador ---
    int K_preview_, K_sim_;
    double t_dsp_, t_ssp_;
    Eigen::MatrixXd A_, B_;
    Eigen::RowVector3d C_;
    Eigen::MatrixXd A_til_, B_til_, F_til_, I_til_, Q_til_;
    Eigen::MatrixXd S_, Ac_til_, X_til_;
    double Gi_;
    Eigen::RowVector3d Gx_;
    Eigen::VectorXd Gp_;

    // --- Vetores de Trajetória e Estado ---
    std::vector<Eigen::Vector2d> step_pos_;
    std::vector<double> ZMP_x_ref_, ZMP_y_ref_;
    Eigen::MatrixXd COM_x_, COM_y_;
    
    // --- Variáveis do Loop em Tempo Real ---
    double sum_e_x_, sum_e_y_;
    int k_sim_atual_;
    int idx_passo_suporte_;
    double tempo_no_passo_;

    // --- Armazenamento de Dados para Análise (Opcional) ---
    std::vector<double> COM_x_H_, COM_y_H_;
    std::vector<double> ZMP_x_H_, ZMP_y_H_;

    // --- Compensador de gravidade ---
    double Kp_gz_; 
    bool enable_gravity_compensation_;

    // --- ADIÇÕES PARA ANÁLISE GRÁFICA ---
    std::ofstream log_file_;
    rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_sub_;
    std::mutex joint_state_mutex_;
    sensor_msgs::msg::JointState latest_joint_states_;
};

#endif 