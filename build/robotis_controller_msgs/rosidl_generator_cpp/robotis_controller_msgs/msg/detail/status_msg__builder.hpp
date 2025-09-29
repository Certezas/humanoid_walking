// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotis_controller_msgs:msg/StatusMsg.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__STATUS_MSG__BUILDER_HPP_
#define ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__STATUS_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotis_controller_msgs/msg/detail/status_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotis_controller_msgs
{

namespace msg
{

namespace builder
{

class Init_StatusMsg_status_msg
{
public:
  explicit Init_StatusMsg_status_msg(::robotis_controller_msgs::msg::StatusMsg & msg)
  : msg_(msg)
  {}
  ::robotis_controller_msgs::msg::StatusMsg status_msg(::robotis_controller_msgs::msg::StatusMsg::_status_msg_type arg)
  {
    msg_.status_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotis_controller_msgs::msg::StatusMsg msg_;
};

class Init_StatusMsg_module_name
{
public:
  explicit Init_StatusMsg_module_name(::robotis_controller_msgs::msg::StatusMsg & msg)
  : msg_(msg)
  {}
  Init_StatusMsg_status_msg module_name(::robotis_controller_msgs::msg::StatusMsg::_module_name_type arg)
  {
    msg_.module_name = std::move(arg);
    return Init_StatusMsg_status_msg(msg_);
  }

private:
  ::robotis_controller_msgs::msg::StatusMsg msg_;
};

class Init_StatusMsg_type
{
public:
  explicit Init_StatusMsg_type(::robotis_controller_msgs::msg::StatusMsg & msg)
  : msg_(msg)
  {}
  Init_StatusMsg_module_name type(::robotis_controller_msgs::msg::StatusMsg::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_StatusMsg_module_name(msg_);
  }

private:
  ::robotis_controller_msgs::msg::StatusMsg msg_;
};

class Init_StatusMsg_header
{
public:
  Init_StatusMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StatusMsg_type header(::robotis_controller_msgs::msg::StatusMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StatusMsg_type(msg_);
  }

private:
  ::robotis_controller_msgs::msg::StatusMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotis_controller_msgs::msg::StatusMsg>()
{
  return robotis_controller_msgs::msg::builder::Init_StatusMsg_header();
}

}  // namespace robotis_controller_msgs

#endif  // ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__STATUS_MSG__BUILDER_HPP_
