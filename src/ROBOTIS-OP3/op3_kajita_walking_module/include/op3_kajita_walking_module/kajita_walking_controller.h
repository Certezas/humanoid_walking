#ifndef KAJITA_WALKING_CONTROLLER_H
#define KAJITA_WALKING_CONTROLLER_H

// Bibliotecas Padrão do C++
#include <vector>
#include <fstream>
#include <string>
#include <map>

// Bibliotecas Externas (ROS, Eigen, etc.)
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "std_msgs/msg/float64.hpp"
#include <eigen3/Eigen/Dense>

// Cabeçalhos Específicos do Projeto
#include "op3_kinematics_dynamics/op3_kinematics_dynamics.h"
#include "robotis_math/robotis_math.h"


// Implementa um controlador de caminhada para o robô OP3 baseado na teoria de
// Preview Control e Ponto de Momento Zero (ZMP) de Shuuji Kajita.
// Este nó ROS 2 gera um padrão de caminhada dinamicamente estável para
// seguir os comandos de velocidade recebidos.
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
    // Inicializa todos os parâmetros, matrizes e trajetórias para a caminhada.
    void initialize();
    // O loop principal do controlador, chamado a cada passo de tempo dt_.
    void process();
    // Resolve a Equação Discreta Algébrica de Riccati (DARE) para os ganhos.
    Eigen::MatrixXd solveDARE(const Eigen::MatrixXd &A, const Eigen::MatrixXd &B, const Eigen::MatrixXd &Q, double R);

    // --- Callbacks ---
    // Callback para o tópico /cmd_vel que atualiza as velocidades desejadas.
    void cmdVelCallback(const geometry_msgs::msg::Twist::SharedPtr msg);

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

    // --- Componentes do Robô e Cinemática ---
    robotis_op::OP3KinematicsDynamics* kinematics_;
    std::vector<std::string> all_joint_names_;

    // --- Máquina de Estados da Pose Inicial ---
    bool initial_pose_achieved_;
    double initial_pose_duration_;
    int initial_pose_ticks_count_;
    std::map<std::string, double> target_initial_pose_;

    // --- Parâmetros de Entrada da Caminhada ---
    double vx_desejada_, vy_desejada_, v_ang_desejada_;
    int n_step_;
    double t_step_;
    double largura_passo_base_;

    // --- Offsets da Posição do Tronco ---
    double x_offset_, y_offset_, z_offset_;
    double roll_offset_, pitch_offset_, yaw_offset_;
    double hip_pitch_offset_;

    // --- Modelo Físico e Constantes da Simulação ---
    double zc_; // Altura constante do Centro de Massa (CoM)
    double g_;  // Aceleração da gravidade
    double dt_; // Passo de tempo da simulação

    // --- Matrizes e Ganhos do Controlador de Antevisão ---
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

    // --- Armazenamento de Dados para Análise ---
    std::vector<double> COM_x_H_, COM_y_H_;
    std::vector<double> ZMP_x_H_, ZMP_y_H_;

    // --- Armazenamento de Dados para Análise ---
    std::vector<double> COM_x_H_, COM_y_H_;
    std::vector<double> ZMP_x_H_, ZMP_y_H_;

    // Ganho de compensação de gravidade
    double Kp_gz_; // Ganho proporcional do servo em Nm/rad

};

#endif 