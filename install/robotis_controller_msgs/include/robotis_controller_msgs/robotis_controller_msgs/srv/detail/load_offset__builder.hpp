// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotis_controller_msgs:srv/LoadOffset.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__LOAD_OFFSET__BUILDER_HPP_
#define ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__LOAD_OFFSET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotis_controller_msgs/srv/detail/load_offset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotis_controller_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadOffset_Request_file_path
{
public:
  Init_LoadOffset_Request_file_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotis_controller_msgs::srv::LoadOffset_Request file_path(::robotis_controller_msgs::srv::LoadOffset_Request::_file_path_type arg)
  {
    msg_.file_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotis_controller_msgs::srv::LoadOffset_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotis_controller_msgs::srv::LoadOffset_Request>()
{
  return robotis_controller_msgs::srv::builder::Init_LoadOffset_Request_file_path();
}

}  // namespace robotis_controller_msgs


namespace robotis_controller_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadOffset_Response_result
{
public:
  Init_LoadOffset_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotis_controller_msgs::srv::LoadOffset_Response result(::robotis_controller_msgs::srv::LoadOffset_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotis_controller_msgs::srv::LoadOffset_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotis_controller_msgs::srv::LoadOffset_Response>()
{
  return robotis_controller_msgs::srv::builder::Init_LoadOffset_Response_result();
}

}  // namespace robotis_controller_msgs

#endif  // ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__LOAD_OFFSET__BUILDER_HPP_
