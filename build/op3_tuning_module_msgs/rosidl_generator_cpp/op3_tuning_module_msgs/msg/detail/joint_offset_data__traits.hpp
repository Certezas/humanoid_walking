// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_tuning_module_msgs:msg/JointOffsetData.idl
// generated code does not contain a copyright notice

#ifndef OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_OFFSET_DATA__TRAITS_HPP_
#define OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_OFFSET_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_tuning_module_msgs/msg/detail/joint_offset_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace op3_tuning_module_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointOffsetData & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_name
  {
    out << "joint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_name, out);
    out << ", ";
  }

  // member: goal_value
  {
    out << "goal_value: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_value, out);
    out << ", ";
  }

  // member: offset_value
  {
    out << "offset_value: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_value, out);
    out << ", ";
  }

  // member: p_gain
  {
    out << "p_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.p_gain, out);
    out << ", ";
  }

  // member: i_gain
  {
    out << "i_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.i_gain, out);
    out << ", ";
  }

  // member: d_gain
  {
    out << "d_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.d_gain, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointOffsetData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_name, out);
    out << "\n";
  }

  // member: goal_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_value: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_value, out);
    out << "\n";
  }

  // member: offset_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_value: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_value, out);
    out << "\n";
  }

  // member: p_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.p_gain, out);
    out << "\n";
  }

  // member: i_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.i_gain, out);
    out << "\n";
  }

  // member: d_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.d_gain, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointOffsetData & msg, bool use_flow_style = false)
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

}  // namespace op3_tuning_module_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_tuning_module_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_tuning_module_msgs::msg::JointOffsetData & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_tuning_module_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_tuning_module_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const op3_tuning_module_msgs::msg::JointOffsetData & msg)
{
  return op3_tuning_module_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<op3_tuning_module_msgs::msg::JointOffsetData>()
{
  return "op3_tuning_module_msgs::msg::JointOffsetData";
}

template<>
inline const char * name<op3_tuning_module_msgs::msg::JointOffsetData>()
{
  return "op3_tuning_module_msgs/msg/JointOffsetData";
}

template<>
struct has_fixed_size<op3_tuning_module_msgs::msg::JointOffsetData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<op3_tuning_module_msgs::msg::JointOffsetData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<op3_tuning_module_msgs::msg::JointOffsetData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_OFFSET_DATA__TRAITS_HPP_
