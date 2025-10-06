#ifndef KAJITA_WALKING_CONTROLLER_H
#define KAJITA_WALKING_CONTROLLER_H

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "op3_kinematics_dynamics/op3_kinematics_dynamics.h"
#include "robotis_math/robotis_math.h"
#include <vector>
#include <fstream>
#include <eigen3/Eigen/Dense>
#include "std_msgs/msg/float64.hpp"
#include <map>
#include <string>


using namespace Eigen;

class KajitaWalkingController : public rclcpp::Node
{
public:
    KajitaWalkingController(const rclcpp::NodeOptions & options);
    ~KajitaWalkingController();

private:
    void initialize();
    void process();
    void cmdVelCallback(const geometry_msgs::msg::Twist::SharedPtr msg);
    rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr joint_state_pub_; // Para o RViz2
    MatrixXd solveDARE(const MatrixXd &A, const MatrixXd &B, const MatrixXd &Q, double R); // Para o Webots

    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_sub_;
    std::map<std::string, rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr> joint_publishers_;
    rclcpp::TimerBase::SharedPtr process_timer_;

    robotis_op::OP3KinematicsDynamics* kinematics_;

    std::string publish_mode_;
    
    // Parâmetros de Entrada e Caminhada
    double vx_desejada_, vy_desejada_, v_ang_desejada_;
    int n_step_;
    double t_step_, largura_passo_base_;

    // NOVOS PARÂMETROS DE POSE BASE
    double x_offset_, y_offset_, z_offset_;
    double roll_offset_, pitch_offset_, yaw_offset_;
    double hip_pitch_offset_;

    // Parâmetros Físicos e de Simulação
    double zc_, g_, dt_;
    int K_preview_, K_sim_;
    double t_dsp_, t_ssp_;
    
    // Matrizes e Ganhos do Controlador
    MatrixXd A_, B_;
    RowVector3d C_;
    MatrixXd A_til_, B_til_, F_til_, I_til_, Q_til_;
    MatrixXd S_, Ac_til_, X_til_;
    double Gi_;
    RowVector3d Gx_;
    VectorXd Gp_;

    // Vetores de Planejamento e Estado
    std::vector<Vector2d> step_pos_;
    std::vector<double> ZMP_x_ref_, ZMP_y_ref_;
    MatrixXd COM_x_, COM_y_;
    
    // Variáveis de Estado do Loop
    double sum_e_x_, sum_e_y_;
    int k_sim_atual_;
    int idx_passo_suporte_;
    double tempo_no_passo_;

    std::vector<double> COM_x_H_, COM_y_H_;
    std::vector<double> ZMP_x_H_, ZMP_y_H_;

    std::vector<std::string> all_joint_names_;

    // NOVAS VARIÁVEIS PARA A POSE INICIAL
    bool initial_pose_achieved_;
    double initial_pose_duration_; // Em segundos
    int initial_pose_ticks_count_;
    std::map<std::string, double> target_initial_pose_;

};

#endif // KAJITA_WALKING_CONTROLLER_H