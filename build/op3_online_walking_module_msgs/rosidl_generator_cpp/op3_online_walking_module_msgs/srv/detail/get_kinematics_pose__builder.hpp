// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_online_walking_module_msgs:srv/GetKinematicsPose.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_KINEMATICS_POSE__BUILDER_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_KINEMATICS_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_online_walking_module_msgs/srv/detail/get_kinematics_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_online_walking_module_msgs
{

namespace srv
{

namespace builder
{

class Init_GetKinematicsPose_Request_name
{
public:
  Init_GetKinematicsPose_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::op3_online_walking_module_msgs::srv::GetKinematicsPose_Request name(::op3_online_walking_module_msgs::srv::GetKinematicsPose_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_online_walking_module_msgs::srv::GetKinematicsPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_online_walking_module_msgs::srv::GetKinematicsPose_Request>()
{
  return op3_online_walking_module_msgs::srv::builder::Init_GetKinematicsPose_Request_name();
}

}  // namespace op3_online_walking_module_msgs


namespace op3_online_walking_module_msgs
{

namespace srv
{

namespace builder
{

class Init_GetKinematicsPose_Response_pose
{
public:
  Init_GetKinematicsPose_Response_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::op3_online_walking_module_msgs::srv::GetKinematicsPose_Response pose(::op3_online_walking_module_msgs::srv::GetKinematicsPose_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_online_walking_module_msgs::srv::GetKinematicsPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_online_walking_module_msgs::srv::GetKinematicsPose_Response>()
{
  return op3_online_walking_module_msgs::srv::builder::Init_GetKinematicsPose_Response_pose();
}

}  // namespace op3_online_walking_module_msgs

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_KINEMATICS_POSE__BUILDER_HPP_
