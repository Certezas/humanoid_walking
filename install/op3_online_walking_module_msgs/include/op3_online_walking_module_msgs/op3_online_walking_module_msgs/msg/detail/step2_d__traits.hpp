// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_online_walking_module_msgs:msg/Step2D.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D__TRAITS_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_online_walking_module_msgs/msg/detail/step2_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'step2d'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace op3_online_walking_module_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Step2D & msg,
  std::ostream & out)
{
  out << "{";
  // member: step2d
  {
    out << "step2d: ";
    to_flow_style_yaml(msg.step2d, out);
    out << ", ";
  }

  // member: moving_foot
  {
    out << "moving_foot: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_foot, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Step2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: step2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step2d:\n";
    to_block_style_yaml(msg.step2d, out, indentation + 2);
  }

  // member: moving_foot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moving_foot: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_foot, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Step2D & msg, bool use_flow_style = false)
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

}  // namespace op3_online_walking_module_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_online_walking_module_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_online_walking_module_msgs::msg::Step2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_online_walking_module_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_online_walking_module_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const op3_online_walking_module_msgs::msg::Step2D & msg)
{
  return op3_online_walking_module_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<op3_online_walking_module_msgs::msg::Step2D>()
{
  return "op3_online_walking_module_msgs::msg::Step2D";
}

template<>
inline const char * name<op3_online_walking_module_msgs::msg::Step2D>()
{
  return "op3_online_walking_module_msgs/msg/Step2D";
}

template<>
struct has_fixed_size<op3_online_walking_module_msgs::msg::Step2D>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct has_bounded_size<op3_online_walking_module_msgs::msg::Step2D>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct is_message<op3_online_walking_module_msgs::msg::Step2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__STEP2_D__TRAITS_HPP_
