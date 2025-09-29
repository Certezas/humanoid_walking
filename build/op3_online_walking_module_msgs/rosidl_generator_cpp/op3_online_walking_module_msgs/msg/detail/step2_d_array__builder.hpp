// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_online_walking_module_msgs:msg/Step2DArray.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D_ARRAY__BUILDER_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_online_walking_module_msgs/msg/detail/step2_d_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_online_walking_module_msgs
{

namespace msg
{

namespace builder
{

class Init_Step2DArray_footsteps_2d
{
public:
  explicit Init_Step2DArray_footsteps_2d(::op3_online_walking_module_msgs::msg::Step2DArray & msg)
  : msg_(msg)
  {}
  ::op3_online_walking_module_msgs::msg::Step2DArray footsteps_2d(::op3_online_walking_module_msgs::msg::Step2DArray::_footsteps_2d_type arg)
  {
    msg_.footsteps_2d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::Step2DArray msg_;
};

class Init_Step2DArray_step_time
{
public:
  Init_Step2DArray_step_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Step2DArray_footsteps_2d step_time(::op3_online_walking_module_msgs::msg::Step2DArray::_step_time_type arg)
  {
    msg_.step_time = std::move(arg);
    return Init_Step2DArray_footsteps_2d(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::Step2DArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_online_walking_module_msgs::msg::Step2DArray>()
{
  return op3_online_walking_module_msgs::msg::builder::Init_Step2DArray_step_time();
}

}  // namespace op3_online_walking_module_msgs

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D_ARRAY__BUILDER_HPP_
