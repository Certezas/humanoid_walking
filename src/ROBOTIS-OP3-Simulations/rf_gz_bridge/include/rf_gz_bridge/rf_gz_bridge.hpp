#ifndef RF_GZ_BRIDGE_RF_GZ_BRIDGE_H_
#define RF_GZ_BRIDGE_RF_GZ_BRIDGE_H_

#include <rclcpp/rclcpp.hpp>
#include <chrono>
#include <mutex>
#include <std_msgs/msg/float64.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>

namespace robotis_framework
{
  
class Rf2GzBridge : public rclcpp::Node
{
public:
  Rf2GzBridge();
  ~Rf2GzBridge();

  bool initialize(std::string joint_list_file_path);

private:
  bool parseConfigFile(std::string joint_list_file_path);

  void posCommandCallback(const std_msgs::msg::Float64::SharedPtr msg, const int &joint_idx);

  int ndof_;
  
  std::vector<std::string> joint_names_;

  rclcpp::TimerBase::SharedPtr timer_;
  std::mutex mutex_;

  std_msgs::msg::Float64MultiArray goal_pos_msg_;

  rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr goal_pos_pub_; // go to gazebo
  rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr *goal_pos_subs_; // come from robotis_framework};

};

}

#endif