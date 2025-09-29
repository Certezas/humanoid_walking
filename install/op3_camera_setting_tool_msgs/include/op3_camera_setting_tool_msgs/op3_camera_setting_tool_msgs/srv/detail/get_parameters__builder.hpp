// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_camera_setting_tool_msgs:srv/GetParameters.idl
// generated code does not contain a copyright notice

#ifndef OP3_CAMERA_SETTING_TOOL_MSGS__SRV__DETAIL__GET_PARAMETERS__BUILDER_HPP_
#define OP3_CAMERA_SETTING_TOOL_MSGS__SRV__DETAIL__GET_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_camera_setting_tool_msgs/srv/detail/get_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_camera_setting_tool_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_camera_setting_tool_msgs::srv::GetParameters_Request>()
{
  return ::op3_camera_setting_tool_msgs::srv::GetParameters_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace op3_camera_setting_tool_msgs


namespace op3_camera_setting_tool_msgs
{

namespace srv
{

namespace builder
{

class Init_GetParameters_Response_returns
{
public:
  Init_GetParameters_Response_returns()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::op3_camera_setting_tool_msgs::srv::GetParameters_Response returns(::op3_camera_setting_tool_msgs::srv::GetParameters_Response::_returns_type arg)
  {
    msg_.returns = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_camera_setting_tool_msgs::srv::GetParameters_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_camera_setting_tool_msgs::srv::GetParameters_Response>()
{
  return op3_camera_setting_tool_msgs::srv::builder::Init_GetParameters_Response_returns();
}

}  // namespace op3_camera_setting_tool_msgs

#endif  // OP3_CAMERA_SETTING_TOOL_MSGS__SRV__DETAIL__GET_PARAMETERS__BUILDER_HPP_
