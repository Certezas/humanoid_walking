// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_ball_detector_msgs:msg/CircleSetStamped.idl
// generated code does not contain a copyright notice

#ifndef OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__CIRCLE_SET_STAMPED__TRAITS_HPP_
#define OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__CIRCLE_SET_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_ball_detector_msgs/msg/detail/circle_set_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'circles'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace op3_ball_detector_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CircleSetStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: circles
  {
    if (msg.circles.size() == 0) {
      out << "circles: []";
    } else {
      out << "circles: [";
      size_t pending_items = msg.circles.size();
      for (auto item : msg.circles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CircleSetStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: circles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.circles.size() == 0) {
      out << "circles: []\n";
    } else {
      out << "circles:\n";
      for (auto item : msg.circles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CircleSetStamped & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace op3_ball_detector_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_ball_detector_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_ball_detector_msgs::msg::CircleSetStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_ball_detector_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_ball_detector_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const op3_ball_detector_msgs::msg::CircleSetStamped & msg)
{
  return op3_ball_detector_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<op3_ball_detector_msgs::msg::CircleSetStamped>()
{
  return "op3_ball_detector_msgs::msg::CircleSetStamped";
}

template<>
inline const char * name<op3_ball_detector_msgs::msg::CircleSetStamped>()
{
  return "op3_ball_detector_msgs/msg/CircleSetStamped";
}

template<>
struct has_fixed_size<op3_ball_detector_msgs::msg::CircleSetStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<op3_ball_detector_msgs::msg::CircleSetStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<op3_ball_detector_msgs::msg::CircleSetStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__CIRCLE_SET_STAMPED__TRAITS_HPP_
