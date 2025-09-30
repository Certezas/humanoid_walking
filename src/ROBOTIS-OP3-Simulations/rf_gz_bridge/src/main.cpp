//#include <ament_index_cpp/get_package_share_directory.hpp>
#include "rf_gz_bridge/rf_gz_bridge.hpp"

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto bridge = std::make_shared<robotis_framework::Rf2GzBridge>();
  RCLCPP_INFO(bridge->get_logger(), "A bridge from robotis_framework to gazebo");

  std::string joint_list_file_path = "";
  bridge->declare_parameter<std::string>("joint_list_path", "");
  bridge->get_parameter("joint_list_path", joint_list_file_path);

  bool result = bridge->initialize(joint_list_file_path);

  if (result == false)
  {
    RCLCPP_ERROR(bridge->get_logger(), "Initialization Failed");
    return -1;
  }

  RCLCPP_INFO(bridge->get_logger(), "Initialization Completed");
  RCLCPP_INFO(bridge->get_logger(), "Start Publishing and Subscribing");
  rclcpp::spin(bridge);
  rclcpp::shutdown();
  return 0;
}