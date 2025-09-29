// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_offset_tuner_msgs:msg/JointTorqueOnOff.idl
// generated code does not contain a copyright notice

#ifndef OP3_OFFSET_TUNER_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF__BUILDER_HPP_
#define OP3_OFFSET_TUNER_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_offset_tuner_msgs/msg/detail/joint_torque_on_off__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_offset_tuner_msgs
{

namespace msg
{

namespace builder
{

class Init_JointTorqueOnOff_torque_enable
{
public:
  explicit Init_JointTorqueOnOff_torque_enable(::op3_offset_tuner_msgs::msg::JointTorqueOnOff & msg)
  : msg_(msg)
  {}
  ::op3_offset_tuner_msgs::msg::JointTorqueOnOff torque_enable(::op3_offset_tuner_msgs::msg::JointTorqueOnOff::_torque_enable_type arg)
  {
    msg_.torque_enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_offset_tuner_msgs::msg::JointTorqueOnOff msg_;
};

class Init_JointTorqueOnOff_joint_name
{
public:
  Init_JointTorqueOnOff_joint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTorqueOnOff_torque_enable joint_name(::op3_offset_tuner_msgs::msg::JointTorqueOnOff::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_JointTorqueOnOff_torque_enable(msg_);
  }

private:
  ::op3_offset_tuner_msgs::msg::JointTorqueOnOff msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_offset_tuner_msgs::msg::JointTorqueOnOff>()
{
  return op3_offset_tuner_msgs::msg::builder::Init_JointTorqueOnOff_joint_name();
}

}  // namespace op3_offset_tuner_msgs

#endif  // OP3_OFFSET_TUNER_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF__BUILDER_HPP_
