// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_camera_setting_tool_msgs:msg/V4lParameters.idl
// generated code does not contain a copyright notice

#ifndef OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__V4L_PARAMETERS__BUILDER_HPP_
#define OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__V4L_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_camera_setting_tool_msgs/msg/detail/v4l_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_camera_setting_tool_msgs
{

namespace msg
{

namespace builder
{

class Init_V4lParameters_video_parameter
{
public:
  Init_V4lParameters_video_parameter()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::op3_camera_setting_tool_msgs::msg::V4lParameters video_parameter(::op3_camera_setting_tool_msgs::msg::V4lParameters::_video_parameter_type arg)
  {
    msg_.video_parameter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_camera_setting_tool_msgs::msg::V4lParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_camera_setting_tool_msgs::msg::V4lParameters>()
{
  return op3_camera_setting_tool_msgs::msg::builder::Init_V4lParameters_video_parameter();
}

}  // namespace op3_camera_setting_tool_msgs

#endif  // OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__V4L_PARAMETERS__BUILDER_HPP_
