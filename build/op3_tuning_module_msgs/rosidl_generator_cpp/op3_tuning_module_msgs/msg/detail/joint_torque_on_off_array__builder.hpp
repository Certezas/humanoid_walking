// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_tuning_module_msgs:msg/JointTorqueOnOffArray.idl
// generated code does not contain a copyright notice

#ifndef OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF_ARRAY__BUILDER_HPP_
#define OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_tuning_module_msgs/msg/detail/joint_torque_on_off_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_tuning_module_msgs
{

namespace msg
{

namespace builder
{

class Init_JointTorqueOnOffArray_torque_enable_data
{
public:
  Init_JointTorqueOnOffArray_torque_enable_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::op3_tuning_module_msgs::msg::JointTorqueOnOffArray torque_enable_data(::op3_tuning_module_msgs::msg::JointTorqueOnOffArray::_torque_enable_data_type arg)
  {
    msg_.torque_enable_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_tuning_module_msgs::msg::JointTorqueOnOffArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_tuning_module_msgs::msg::JointTorqueOnOffArray>()
{
  return op3_tuning_module_msgs::msg::builder::Init_JointTorqueOnOffArray_torque_enable_data();
}

}  // namespace op3_tuning_module_msgs

#endif  // OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF_ARRAY__BUILDER_HPP_
