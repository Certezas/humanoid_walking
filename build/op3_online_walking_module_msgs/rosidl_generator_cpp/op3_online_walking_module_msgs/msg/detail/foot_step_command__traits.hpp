// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_online_walking_module_msgs:msg/FootStepCommand.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_COMMAND__TRAITS_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_online_walking_module_msgs/msg/detail/foot_step_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace op3_online_walking_module_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FootStepCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: start_leg
  {
    out << "start_leg: ";
    rosidl_generator_traits::value_to_yaml(msg.start_leg, out);
    out << ", ";
  }

  // member: step_num
  {
    out << "step_num: ";
    rosidl_generator_traits::value_to_yaml(msg.step_num, out);
    out << ", ";
  }

  // member: step_time
  {
    out << "step_time: ";
    rosidl_generator_traits::value_to_yaml(msg.step_time, out);
    out << ", ";
  }

  // member: step_length
  {
    out << "step_length: ";
    rosidl_generator_traits::value_to_yaml(msg.step_length, out);
    out << ", ";
  }

  // member: side_length
  {
    out << "side_length: ";
    rosidl_generator_traits::value_to_yaml(msg.side_length, out);
    out << ", ";
  }

  // member: step_angle
  {
    out << "step_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.step_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FootStepCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: start_leg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_leg: ";
    rosidl_generator_traits::value_to_yaml(msg.start_leg, out);
    out << "\n";
  }

  // member: step_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_num: ";
    rosidl_generator_traits::value_to_yaml(msg.step_num, out);
    out << "\n";
  }

  // member: step_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_time: ";
    rosidl_generator_traits::value_to_yaml(msg.step_time, out);
    out << "\n";
  }

  // member: step_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_length: ";
    rosidl_generator_traits::value_to_yaml(msg.step_length, out);
    out << "\n";
  }

  // member: side_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "side_length: ";
    rosidl_generator_traits::value_to_yaml(msg.side_length, out);
    out << "\n";
  }

  // member: step_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.step_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FootStepCommand & msg, bool use_flow_style = false)
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
  const op3_online_walking_module_msgs::msg::FootStepCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_online_walking_module_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_online_walking_module_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const op3_online_walking_module_msgs::msg::FootStepCommand & msg)
{
  return op3_online_walking_module_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<op3_online_walking_module_msgs::msg::FootStepCommand>()
{
  return "op3_online_walking_module_msgs::msg::FootStepCommand";
}

template<>
inline const char * name<op3_online_walking_module_msgs::msg::FootStepCommand>()
{
  return "op3_online_walking_module_msgs/msg/FootStepCommand";
}

template<>
struct has_fixed_size<op3_online_walking_module_msgs::msg::FootStepCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<op3_online_walking_module_msgs::msg::FootStepCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<op3_online_walking_module_msgs::msg::FootStepCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_COMMAND__TRAITS_HPP_
