// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_online_walking_module_msgs:msg/PreviewRequest.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__PREVIEW_REQUEST__BUILDER_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__PREVIEW_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_online_walking_module_msgs/msg/detail/preview_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_online_walking_module_msgs
{

namespace msg
{

namespace builder
{

class Init_PreviewRequest_lipm_height
{
public:
  explicit Init_PreviewRequest_lipm_height(::op3_online_walking_module_msgs::msg::PreviewRequest & msg)
  : msg_(msg)
  {}
  ::op3_online_walking_module_msgs::msg::PreviewRequest lipm_height(::op3_online_walking_module_msgs::msg::PreviewRequest::_lipm_height_type arg)
  {
    msg_.lipm_height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::PreviewRequest msg_;
};

class Init_PreviewRequest_control_cycle
{
public:
  Init_PreviewRequest_control_cycle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PreviewRequest_lipm_height control_cycle(::op3_online_walking_module_msgs::msg::PreviewRequest::_control_cycle_type arg)
  {
    msg_.control_cycle = std::move(arg);
    return Init_PreviewRequest_lipm_height(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::PreviewRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_online_walking_module_msgs::msg::PreviewRequest>()
{
  return op3_online_walking_module_msgs::msg::builder::Init_PreviewRequest_control_cycle();
}

}  // namespace op3_online_walking_module_msgs

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__PREVIEW_REQUEST__BUILDER_HPP_
