// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_online_walking_module_msgs:msg/FootStepArray.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_ARRAY__BUILDER_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_online_walking_module_msgs/msg/detail/foot_step_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_online_walking_module_msgs
{

namespace msg
{

namespace builder
{

class Init_FootStepArray_data
{
public:
  explicit Init_FootStepArray_data(::op3_online_walking_module_msgs::msg::FootStepArray & msg)
  : msg_(msg)
  {}
  ::op3_online_walking_module_msgs::msg::FootStepArray data(::op3_online_walking_module_msgs::msg::FootStepArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::FootStepArray msg_;
};

class Init_FootStepArray_moving_foot
{
public:
  Init_FootStepArray_moving_foot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FootStepArray_data moving_foot(::op3_online_walking_module_msgs::msg::FootStepArray::_moving_foot_type arg)
  {
    msg_.moving_foot = std::move(arg);
    return Init_FootStepArray_data(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::FootStepArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_online_walking_module_msgs::msg::FootStepArray>()
{
  return op3_online_walking_module_msgs::msg::builder::Init_FootStepArray_moving_foot();
}

}  // namespace op3_online_walking_module_msgs

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_ARRAY__BUILDER_HPP_
