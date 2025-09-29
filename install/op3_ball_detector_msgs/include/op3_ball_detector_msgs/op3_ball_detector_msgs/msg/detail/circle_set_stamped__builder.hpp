// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_ball_detector_msgs:msg/CircleSetStamped.idl
// generated code does not contain a copyright notice

#ifndef OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__CIRCLE_SET_STAMPED__BUILDER_HPP_
#define OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__CIRCLE_SET_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_ball_detector_msgs/msg/detail/circle_set_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_ball_detector_msgs
{

namespace msg
{

namespace builder
{

class Init_CircleSetStamped_circles
{
public:
  explicit Init_CircleSetStamped_circles(::op3_ball_detector_msgs::msg::CircleSetStamped & msg)
  : msg_(msg)
  {}
  ::op3_ball_detector_msgs::msg::CircleSetStamped circles(::op3_ball_detector_msgs::msg::CircleSetStamped::_circles_type arg)
  {
    msg_.circles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_ball_detector_msgs::msg::CircleSetStamped msg_;
};

class Init_CircleSetStamped_header
{
public:
  Init_CircleSetStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CircleSetStamped_circles header(::op3_ball_detector_msgs::msg::CircleSetStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CircleSetStamped_circles(msg_);
  }

private:
  ::op3_ball_detector_msgs::msg::CircleSetStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_ball_detector_msgs::msg::CircleSetStamped>()
{
  return op3_ball_detector_msgs::msg::builder::Init_CircleSetStamped_header();
}

}  // namespace op3_ball_detector_msgs

#endif  // OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__CIRCLE_SET_STAMPED__BUILDER_HPP_
