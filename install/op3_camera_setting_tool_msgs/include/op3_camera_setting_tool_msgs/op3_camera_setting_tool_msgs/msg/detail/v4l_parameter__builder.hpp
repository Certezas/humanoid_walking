// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_camera_setting_tool_msgs:msg/V4lParameter.idl
// generated code does not contain a copyright notice

#ifndef OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__V4L_PARAMETER__BUILDER_HPP_
#define OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__V4L_PARAMETER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_camera_setting_tool_msgs/msg/detail/v4l_parameter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_camera_setting_tool_msgs
{

namespace msg
{

namespace builder
{

class Init_V4lParameter_value
{
public:
  explicit Init_V4lParameter_value(::op3_camera_setting_tool_msgs::msg::V4lParameter & msg)
  : msg_(msg)
  {}
  ::op3_camera_setting_tool_msgs::msg::V4lParameter value(::op3_camera_setting_tool_msgs::msg::V4lParameter::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_camera_setting_tool_msgs::msg::V4lParameter msg_;
};

class Init_V4lParameter_name
{
public:
  Init_V4lParameter_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_V4lParameter_value name(::op3_camera_setting_tool_msgs::msg::V4lParameter::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_V4lParameter_value(msg_);
  }

private:
  ::op3_camera_setting_tool_msgs::msg::V4lParameter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_camera_setting_tool_msgs::msg::V4lParameter>()
{
  return op3_camera_setting_tool_msgs::msg::builder::Init_V4lParameter_name();
}

}  // namespace op3_camera_setting_tool_msgs

#endif  // OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__V4L_PARAMETER__BUILDER_HPP_
