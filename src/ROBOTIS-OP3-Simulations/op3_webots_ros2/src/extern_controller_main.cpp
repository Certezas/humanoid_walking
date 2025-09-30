#include <ament_index_cpp/get_package_share_directory.hpp>
#include "op3_webots_ros2/op3_extern_controller.hpp"

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  robotis_op::OP3ExternController *op3_extern = new robotis_op::OP3ExternController();

  RCLCPP_INFO(op3_extern->get_logger(), "ROBOTIS OP3 WEBOTS ROS2");

  std::string gain_file_path;
  std::string default_gain_file_path = ament_index_cpp::get_package_share_directory("op3_webots_ros2") + "/resource/op3_pid_gain_default.yaml";
  op3_extern->declare_parameter<std::string>("gain_file_path", default_gain_file_path);
  op3_extern->get_parameter("gain_file_path", gain_file_path);

  RCLCPP_INFO(op3_extern->get_logger(), "Gain Loading Completed");

  op3_extern->initialize(gain_file_path);

  rclcpp::sleep_for(std::chrono::milliseconds(300));
  
  RCLCPP_INFO(op3_extern->get_logger(), "Start");
  while(rclcpp::ok())
  {
    op3_extern->process();
  }

  delete op3_extern;
  
  return 0;
}
