// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_action_module_msgs:msg/StartAction.idl
// generated code does not contain a copyright notice

#ifndef OP3_ACTION_MODULE_MSGS__MSG__DETAIL__START_ACTION__BUILDER_HPP_
#define OP3_ACTION_MODULE_MSGS__MSG__DETAIL__START_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_action_module_msgs/msg/detail/start_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_action_module_msgs
{

namespace msg
{

namespace builder
{

class Init_StartAction_joint_name_array
{
public:
  explicit Init_StartAction_joint_name_array(::op3_action_module_msgs::msg::StartAction & msg)
  : msg_(msg)
  {}
  ::op3_action_module_msgs::msg::StartAction joint_name_array(::op3_action_module_msgs::msg::StartAction::_joint_name_array_type arg)
  {
    msg_.joint_name_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_action_module_msgs::msg::StartAction msg_;
};

class Init_StartAction_page_num
{
public:
  Init_StartAction_page_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartAction_joint_name_array page_num(::op3_action_module_msgs::msg::StartAction::_page_num_type arg)
  {
    msg_.page_num = std::move(arg);
    return Init_StartAction_joint_name_array(msg_);
  }

private:
  ::op3_action_module_msgs::msg::StartAction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_action_module_msgs::msg::StartAction>()
{
  return op3_action_module_msgs::msg::builder::Init_StartAction_page_num();
}

}  // namespace op3_action_module_msgs

#endif  // OP3_ACTION_MODULE_MSGS__MSG__DETAIL__START_ACTION__BUILDER_HPP_
