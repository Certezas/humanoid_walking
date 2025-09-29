// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotis_controller_msgs:srv/GetJointModule.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__GET_JOINT_MODULE__BUILDER_HPP_
#define ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__GET_JOINT_MODULE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotis_controller_msgs/srv/detail/get_joint_module__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotis_controller_msgs
{

namespace srv
{

namespace builder
{

class Init_GetJointModule_Request_joint_name
{
public:
  Init_GetJointModule_Request_joint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotis_controller_msgs::srv::GetJointModule_Request joint_name(::robotis_controller_msgs::srv::GetJointModule_Request::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotis_controller_msgs::srv::GetJointModule_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotis_controller_msgs::srv::GetJointModule_Request>()
{
  return robotis_controller_msgs::srv::builder::Init_GetJointModule_Request_joint_name();
}

}  // namespace robotis_controller_msgs


namespace robotis_controller_msgs
{

namespace srv
{

namespace builder
{

class Init_GetJointModule_Response_module_name
{
public:
  explicit Init_GetJointModule_Response_module_name(::robotis_controller_msgs::srv::GetJointModule_Response & msg)
  : msg_(msg)
  {}
  ::robotis_controller_msgs::srv::GetJointModule_Response module_name(::robotis_controller_msgs::srv::GetJointModule_Response::_module_name_type arg)
  {
    msg_.module_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotis_controller_msgs::srv::GetJointModule_Response msg_;
};

class Init_GetJointModule_Response_joint_name
{
public:
  Init_GetJointModule_Response_joint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetJointModule_Response_module_name joint_name(::robotis_controller_msgs::srv::GetJointModule_Response::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_GetJointModule_Response_module_name(msg_);
  }

private:
  ::robotis_controller_msgs::srv::GetJointModule_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotis_controller_msgs::srv::GetJointModule_Response>()
{
  return robotis_controller_msgs::srv::builder::Init_GetJointModule_Response_joint_name();
}

}  // namespace robotis_controller_msgs

#endif  // ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__GET_JOINT_MODULE__BUILDER_HPP_
