// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_offset_tuner_msgs:msg/JointOffsetData.idl
// generated code does not contain a copyright notice

#ifndef OP3_OFFSET_TUNER_MSGS__MSG__DETAIL__JOINT_OFFSET_DATA__BUILDER_HPP_
#define OP3_OFFSET_TUNER_MSGS__MSG__DETAIL__JOINT_OFFSET_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_offset_tuner_msgs/msg/detail/joint_offset_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_offset_tuner_msgs
{

namespace msg
{

namespace builder
{

class Init_JointOffsetData_d_gain
{
public:
  explicit Init_JointOffsetData_d_gain(::op3_offset_tuner_msgs::msg::JointOffsetData & msg)
  : msg_(msg)
  {}
  ::op3_offset_tuner_msgs::msg::JointOffsetData d_gain(::op3_offset_tuner_msgs::msg::JointOffsetData::_d_gain_type arg)
  {
    msg_.d_gain = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_offset_tuner_msgs::msg::JointOffsetData msg_;
};

class Init_JointOffsetData_i_gain
{
public:
  explicit Init_JointOffsetData_i_gain(::op3_offset_tuner_msgs::msg::JointOffsetData & msg)
  : msg_(msg)
  {}
  Init_JointOffsetData_d_gain i_gain(::op3_offset_tuner_msgs::msg::JointOffsetData::_i_gain_type arg)
  {
    msg_.i_gain = std::move(arg);
    return Init_JointOffsetData_d_gain(msg_);
  }

private:
  ::op3_offset_tuner_msgs::msg::JointOffsetData msg_;
};

class Init_JointOffsetData_p_gain
{
public:
  explicit Init_JointOffsetData_p_gain(::op3_offset_tuner_msgs::msg::JointOffsetData & msg)
  : msg_(msg)
  {}
  Init_JointOffsetData_i_gain p_gain(::op3_offset_tuner_msgs::msg::JointOffsetData::_p_gain_type arg)
  {
    msg_.p_gain = std::move(arg);
    return Init_JointOffsetData_i_gain(msg_);
  }

private:
  ::op3_offset_tuner_msgs::msg::JointOffsetData msg_;
};

class Init_JointOffsetData_offset_value
{
public:
  explicit Init_JointOffsetData_offset_value(::op3_offset_tuner_msgs::msg::JointOffsetData & msg)
  : msg_(msg)
  {}
  Init_JointOffsetData_p_gain offset_value(::op3_offset_tuner_msgs::msg::JointOffsetData::_offset_value_type arg)
  {
    msg_.offset_value = std::move(arg);
    return Init_JointOffsetData_p_gain(msg_);
  }

private:
  ::op3_offset_tuner_msgs::msg::JointOffsetData msg_;
};

class Init_JointOffsetData_goal_value
{
public:
  explicit Init_JointOffsetData_goal_value(::op3_offset_tuner_msgs::msg::JointOffsetData & msg)
  : msg_(msg)
  {}
  Init_JointOffsetData_offset_value goal_value(::op3_offset_tuner_msgs::msg::JointOffsetData::_goal_value_type arg)
  {
    msg_.goal_value = std::move(arg);
    return Init_JointOffsetData_offset_value(msg_);
  }

private:
  ::op3_offset_tuner_msgs::msg::JointOffsetData msg_;
};

class Init_JointOffsetData_joint_name
{
public:
  Init_JointOffsetData_joint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointOffsetData_goal_value joint_name(::op3_offset_tuner_msgs::msg::JointOffsetData::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_JointOffsetData_goal_value(msg_);
  }

private:
  ::op3_offset_tuner_msgs::msg::JointOffsetData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_offset_tuner_msgs::msg::JointOffsetData>()
{
  return op3_offset_tuner_msgs::msg::builder::Init_JointOffsetData_joint_name();
}

}  // namespace op3_offset_tuner_msgs

#endif  // OP3_OFFSET_TUNER_MSGS__MSG__DETAIL__JOINT_OFFSET_DATA__BUILDER_HPP_
