// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_online_walking_module_msgs:msg/Step2D.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D__BUILDER_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_online_walking_module_msgs/msg/detail/step2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_online_walking_module_msgs
{

namespace msg
{

namespace builder
{

class Init_Step2D_moving_foot
{
public:
  explicit Init_Step2D_moving_foot(::op3_online_walking_module_msgs::msg::Step2D & msg)
  : msg_(msg)
  {}
  ::op3_online_walking_module_msgs::msg::Step2D moving_foot(::op3_online_walking_module_msgs::msg::Step2D::_moving_foot_type arg)
  {
    msg_.moving_foot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::Step2D msg_;
};

class Init_Step2D_step2d
{
public:
  Init_Step2D_step2d()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Step2D_moving_foot step2d(::op3_online_walking_module_msgs::msg::Step2D::_step2d_type arg)
  {
    msg_.step2d = std::move(arg);
    return Init_Step2D_moving_foot(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::Step2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_online_walking_module_msgs::msg::Step2D>()
{
  return op3_online_walking_module_msgs::msg::builder::Init_Step2D_step2d();
}

}  // namespace op3_online_walking_module_msgs

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D__BUILDER_HPP_
