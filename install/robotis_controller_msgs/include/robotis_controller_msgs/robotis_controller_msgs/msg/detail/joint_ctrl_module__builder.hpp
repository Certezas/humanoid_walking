// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotis_controller_msgs:msg/JointCtrlModule.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__JOINT_CTRL_MODULE__BUILDER_HPP_
#define ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__JOINT_CTRL_MODULE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotis_controller_msgs/msg/detail/joint_ctrl_module__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotis_controller_msgs
{

namespace msg
{

namespace builder
{

class Init_JointCtrlModule_module_name
{
public:
  explicit Init_JointCtrlModule_module_name(::robotis_controller_msgs::msg::JointCtrlModule & msg)
  : msg_(msg)
  {}
  ::robotis_controller_msgs::msg::JointCtrlModule module_name(::robotis_controller_msgs::msg::JointCtrlModule::_module_name_type arg)
  {
    msg_.module_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotis_controller_msgs::msg::JointCtrlModule msg_;
};

class Init_JointCtrlModule_joint_name
{
public:
  Init_JointCtrlModule_joint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointCtrlModule_module_name joint_name(::robotis_controller_msgs::msg::JointCtrlModule::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_JointCtrlModule_module_name(msg_);
  }

private:
  ::robotis_controller_msgs::msg::JointCtrlModule msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotis_controller_msgs::msg::JointCtrlModule>()
{
  return robotis_controller_msgs::msg::builder::Init_JointCtrlModule_joint_name();
}

}  // namespace robotis_controller_msgs

#endif  // ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__JOINT_CTRL_MODULE__BUILDER_HPP_
