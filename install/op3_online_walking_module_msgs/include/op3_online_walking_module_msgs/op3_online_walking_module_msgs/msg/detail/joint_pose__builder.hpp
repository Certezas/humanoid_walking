// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_online_walking_module_msgs:msg/JointPose.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__JOINT_POSE__BUILDER_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__JOINT_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_online_walking_module_msgs/msg/detail/joint_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_online_walking_module_msgs
{

namespace msg
{

namespace builder
{

class Init_JointPose_pose
{
public:
  explicit Init_JointPose_pose(::op3_online_walking_module_msgs::msg::JointPose & msg)
  : msg_(msg)
  {}
  ::op3_online_walking_module_msgs::msg::JointPose pose(::op3_online_walking_module_msgs::msg::JointPose::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::JointPose msg_;
};

class Init_JointPose_mov_time
{
public:
  Init_JointPose_mov_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointPose_pose mov_time(::op3_online_walking_module_msgs::msg::JointPose::_mov_time_type arg)
  {
    msg_.mov_time = std::move(arg);
    return Init_JointPose_pose(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::JointPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_online_walking_module_msgs::msg::JointPose>()
{
  return op3_online_walking_module_msgs::msg::builder::Init_JointPose_mov_time();
}

}  // namespace op3_online_walking_module_msgs

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__JOINT_POSE__BUILDER_HPP_
