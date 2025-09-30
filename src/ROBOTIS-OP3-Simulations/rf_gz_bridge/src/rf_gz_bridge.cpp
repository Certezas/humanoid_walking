#include "rf_gz_bridge/rf_gz_bridge.hpp"

#include <yaml-cpp/yaml.h>

using namespace robotis_framework;


Rf2GzBridge::Rf2GzBridge(/* args */)
 : Node("rf_gz_bridge")
{
  joint_names_.clear();
  goal_pos_subs_ = 0;
}

Rf2GzBridge::~Rf2GzBridge()
{
  joint_names_.clear();
  
  if (goal_pos_subs_ != 0)
    delete[] goal_pos_subs_;
}

bool Rf2GzBridge::parseConfigFile(std::string joint_list_file_path)
{
  try
  {
    YAML::Node config = YAML::LoadFile(joint_list_file_path.c_str());

    if (config["joint_names"] && config["joint_names"].IsSequence())
    {
      auto joint_list = config["joint_names"].as<std::vector<std::string>>();
      
      ndof_ = joint_list.size();
      joint_names_ = joint_list;

      // RCLCPP_INFO(this->get_logger(), "Loaded joint names:");
      // for (const auto &name : joints)
      // {
      //   RCLCPP_INFO(this->get_logger(), "  %s", name.c_str());
      // }
    }
    else
    {
      RCLCPP_ERROR(this->get_logger(), "No 'joint_names' key found or it's not a sequence.");
      return false;
    }
  }
  catch (const std::exception &e)
  {
    RCLCPP_ERROR(this->get_logger(), "Fail to load joint list yaml [%s]", joint_list_file_path.c_str());
    return false;
  }

  return true;
}

bool Rf2GzBridge::initialize(std::string joint_list_file_path)
{
  if (parseConfigFile(joint_list_file_path) == false)
    return false;

  for (int i = 0; i < ndof_; i++)
  {
    goal_pos_msg_.data.push_back(0);
  }


  goal_pos_subs_ = new rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr[ndof_];
  

  for (int i = 0; i < ndof_; i++)
  {
    // make subscribers for the joint position topic from robotis framework
    std::string goal_pos_topic_name = "/robotis_op3/" + joint_names_[i] + "_position/command";

    std::function<void(const std_msgs::msg::Float64::SharedPtr)> callback = 
         std::bind(&Rf2GzBridge::posCommandCallback, this, std::placeholders::_1, i);
    goal_pos_subs_[i] = this->create_subscription<std_msgs::msg::Float64>(goal_pos_topic_name, 1, callback);
  }
  
  goal_pos_pub_ = this->create_publisher<std_msgs::msg::Float64MultiArray>("robotis_op3_position/commands", 5);

  auto timer_callback =
    [this]() -> void {
        this->mutex_.lock();
        this->goal_pos_pub_->publish(goal_pos_msg_);
        this->mutex_.unlock();
      };
  
  timer_ = this->create_wall_timer(std::chrono::milliseconds(2), timer_callback);

  return true;
}

void Rf2GzBridge::posCommandCallback(const std_msgs::msg::Float64::SharedPtr msg, const int &joint_idx)
{
  mutex_.lock();
  goal_pos_msg_.data[joint_idx] = msg->data;
  mutex_.unlock();
}



