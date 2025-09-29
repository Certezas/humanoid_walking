// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_ball_detector_msgs:srv/SetParameters.idl
// generated code does not contain a copyright notice

#ifndef OP3_BALL_DETECTOR_MSGS__SRV__DETAIL__SET_PARAMETERS__BUILDER_HPP_
#define OP3_BALL_DETECTOR_MSGS__SRV__DETAIL__SET_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_ball_detector_msgs/srv/detail/set_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_ball_detector_msgs
{

namespace srv
{

namespace builder
{

class Init_SetParameters_Request_params
{
public:
  Init_SetParameters_Request_params()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::op3_ball_detector_msgs::srv::SetParameters_Request params(::op3_ball_detector_msgs::srv::SetParameters_Request::_params_type arg)
  {
    msg_.params = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_ball_detector_msgs::srv::SetParameters_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_ball_detector_msgs::srv::SetParameters_Request>()
{
  return op3_ball_detector_msgs::srv::builder::Init_SetParameters_Request_params();
}

}  // namespace op3_ball_detector_msgs


namespace op3_ball_detector_msgs
{

namespace srv
{

namespace builder
{

class Init_SetParameters_Response_returns
{
public:
  Init_SetParameters_Response_returns()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::op3_ball_detector_msgs::srv::SetParameters_Response returns(::op3_ball_detector_msgs::srv::SetParameters_Response::_returns_type arg)
  {
    msg_.returns = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_ball_detector_msgs::srv::SetParameters_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_ball_detector_msgs::srv::SetParameters_Response>()
{
  return op3_ball_detector_msgs::srv::builder::Init_SetParameters_Response_returns();
}

}  // namespace op3_ball_detector_msgs

#endif  // OP3_BALL_DETECTOR_MSGS__SRV__DETAIL__SET_PARAMETERS__BUILDER_HPP_
