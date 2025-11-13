#ifndef KAJITA_WALKING_CONTROLLER_H
#define KAJITA_WALKING_CONTROLLER_H

// Bibliotecas Padrão
#include <vector>
#include <fstream>
#include <string>
#include <map>
#include <algorithm>

// Bibliotecas ROS e Eigen
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "std_msgs/msg/float64.hpp"
#include <eigen3/Eigen/Dense>

// Bibliotecas do Projeto
#include "op3_kinematics_dynamics/op3_kinematics_dynamics.h"
#include "robotis_math/robotis_math.h"
#include "op3_kinematics_dynamics/op3_kinematics_dynamics_define.h"
#include "op3_kinematics_dynamics/link_data.h"

// 'using namespace Eigen;' foi removido do cabeçalho.

class KajitaWalkingController : public rclcpp::Node
{
public:
    KajitaWalkingController(const rclcpp::NodeOptions & options);
    ~KajitaWalkingController();

private:
    // =========================================================================
    // MÉTODOS PRIVADOS
    // =========================================================================

    void initialize();
    void process();
    void cmdVelCallback(const geometry_msgs::msg::Twist::SharedPtr msg);
    Eigen::MatrixXd solveDARE(const Eigen::MatrixXd &A, const Eigen::MatrixXd &B, const Eigen::MatrixXd &Q, double R);

    // =========================================================================
    // VARIÁVEIS MEMBRO
    // =========================================================================

    // --- Interface ROS 2 ---
    rclcpp::TimerBase::SharedPtr process_timer_;
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_sub_;
    rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr joint_state_pub_;
    std::map<std::string, rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr> joint_publishers_;
    std::string publish_mode_;

    // --- Grupos de Callback (para Multi-threading) ---
    rclcpp::CallbackGroup::SharedPtr timer_group_;
    rclcpp::CallbackGroup::SharedPtr sub_group_;

    // --- Componentes do Robô e Cinemática ---
    robotis_op::OP3KinematicsDynamics* kinematics_;
    std::vector<std::string> all_joint_names_;

    // --- Máquina de Estados da Pose Inicial ---
    bool initial_pose_achieved_;
    double initial_pose_duration_;
    int initial_pose_ticks_count_;
    std::map<std::string, double> target_initial_pose_;

    // --- Parâmetros de Entrada e Caminhada ---
    double vx_desejada_, vy_desejada_, v_ang_desejada_;
    int n_step_;
    double t_step_, largura_passo_base_;

    // --- Offsets da Posição do Tronco ---
    double x_offset_, y_offset_, z_offset_;
    double roll_offset_, pitch_offset_, yaw_offset_;
    double hip_pitch_offset_;

    // --- Parâmetros Físicos e de Simulação ---
    double zc_, g_, dt_;
    int K_preview_, K_sim_;
    double t_dsp_, t_ssp_;
    
    // --- Matrizes e Ganhos do Controlador ---
    Eigen::MatrixXd A_, B_;
    Eigen::RowVector3d C_;
    Eigen::MatrixXd A_til_, B_til_, F_til_, I_til_, Q_til_;
    Eigen::MatrixXd S_, Ac_til_, X_til_;
    double Gi_;
    Eigen::RowVector3d Gx_;
    Eigen::VectorXd Gp_;

    // --- Vetores de Planejamento e Estado ---
    std::vector<Eigen::Vector2d> step_pos_;
    std::vector<double> ZMP_x_ref_, ZMP_y_ref_;
    Eigen::MatrixXd COM_x_, COM_y_;
    
    // --- Variáveis de Estado do Loop ---
    double sum_e_x_, sum_e_y_;
    int k_sim_atual_;
    int idx_passo_suporte_;
    double tempo_no_passo_;

    // --- Histórico para Análise (Opcional) ---
    std::vector<double> COM_x_H_, COM_y_H_;
    std::vector<double> ZMP_x_H_, ZMP_y_H_;
};

#endif