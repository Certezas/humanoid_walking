// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_action_module_msgs:srv/IsRunning.idl
// generated code does not contain a copyright notice

#ifndef OP3_ACTION_MODULE_MSGS__SRV__DETAIL__IS_RUNNING__BUILDER_HPP_
#define OP3_ACTION_MODULE_MSGS__SRV__DETAIL__IS_RUNNING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_action_module_msgs/srv/detail/is_running__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_action_module_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_action_module_msgs::srv::IsRunning_Request>()
{
  return ::op3_action_module_msgs::srv::IsRunning_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace op3_action_module_msgs


namespace op3_action_module_msgs
{

namespace srv
{

namespace builder
{

class Init_IsRunning_Response_is_running
{
public:
  Init_IsRunning_Response_is_running()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::op3_action_module_msgs::srv::IsRunning_Response is_running(::op3_action_module_msgs::srv::IsRunning_Response::_is_running_type arg)
  {
    msg_.is_running = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_action_module_msgs::srv::IsRunning_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_action_module_msgs::srv::IsRunning_Response>()
{
  return op3_action_module_msgs::srv::builder::Init_IsRunning_Response_is_running();
}

}  // namespace op3_action_module_msgs

#endif  // OP3_ACTION_MODULE_MSGS__SRV__DETAIL__IS_RUNNING__BUILDER_HPP_
