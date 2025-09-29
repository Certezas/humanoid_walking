// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotis_controller_msgs:srv/SetJointModule.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__SET_JOINT_MODULE__BUILDER_HPP_
#define ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__SET_JOINT_MODULE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotis_controller_msgs/srv/detail/set_joint_module__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotis_controller_msgs
{

namespace srv
{

namespace builder
{

class Init_SetJointModule_Request_module_name
{
public:
  explicit Init_SetJointModule_Request_module_name(::robotis_controller_msgs::srv::SetJointModule_Request & msg)
  : msg_(msg)
  {}
  ::robotis_controller_msgs::srv::SetJointModule_Request module_name(::robotis_controller_msgs::srv::SetJointModule_Request::_module_name_type arg)
  {
    msg_.module_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotis_controller_msgs::srv::SetJointModule_Request msg_;
};

class Init_SetJointModule_Request_joint_name
{
public:
  Init_SetJointModule_Request_joint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointModule_Request_module_name joint_name(::robotis_controller_msgs::srv::SetJointModule_Request::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_SetJointModule_Request_module_name(msg_);
  }

private:
  ::robotis_controller_msgs::srv::SetJointModule_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotis_controller_msgs::srv::SetJointModule_Request>()
{
  return robotis_controller_msgs::srv::builder::Init_SetJointModule_Request_joint_name();
}

}  // namespace robotis_controller_msgs


namespace robotis_controller_msgs
{

namespace srv
{

namespace builder
{

class Init_SetJointModule_Response_result
{
public:
  Init_SetJointModule_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotis_controller_msgs::srv::SetJointModule_Response result(::robotis_controller_msgs::srv::SetJointModule_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotis_controller_msgs::srv::SetJointModule_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotis_controller_msgs::srv::SetJointModule_Response>()
{
  return robotis_controller_msgs::srv::builder::Init_SetJointModule_Response_result();
}

}  // namespace robotis_controller_msgs

#endif  // ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__SET_JOINT_MODULE__BUILDER_HPP_
