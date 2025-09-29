// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_online_walking_module_msgs:msg/KinematicsPose.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__KINEMATICS_POSE__BUILDER_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__KINEMATICS_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_online_walking_module_msgs/msg/detail/kinematics_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_online_walking_module_msgs
{

namespace msg
{

namespace builder
{

class Init_KinematicsPose_pose
{
public:
  explicit Init_KinematicsPose_pose(::op3_online_walking_module_msgs::msg::KinematicsPose & msg)
  : msg_(msg)
  {}
  ::op3_online_walking_module_msgs::msg::KinematicsPose pose(::op3_online_walking_module_msgs::msg::KinematicsPose::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::KinematicsPose msg_;
};

class Init_KinematicsPose_mov_time
{
public:
  explicit Init_KinematicsPose_mov_time(::op3_online_walking_module_msgs::msg::KinematicsPose & msg)
  : msg_(msg)
  {}
  Init_KinematicsPose_pose mov_time(::op3_online_walking_module_msgs::msg::KinematicsPose::_mov_time_type arg)
  {
    msg_.mov_time = std::move(arg);
    return Init_KinematicsPose_pose(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::KinematicsPose msg_;
};

class Init_KinematicsPose_name
{
public:
  Init_KinematicsPose_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KinematicsPose_mov_time name(::op3_online_walking_module_msgs::msg::KinematicsPose::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_KinematicsPose_mov_time(msg_);
  }

private:
  ::op3_online_walking_module_msgs::msg::KinematicsPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_online_walking_module_msgs::msg::KinematicsPose>()
{
  return op3_online_walking_module_msgs::msg::builder::Init_KinematicsPose_name();
}

}  // namespace op3_online_walking_module_msgs

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__KINEMATICS_POSE__BUILDER_HPP_
