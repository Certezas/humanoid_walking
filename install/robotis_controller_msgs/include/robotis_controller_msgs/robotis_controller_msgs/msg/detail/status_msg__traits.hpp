// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotis_controller_msgs:msg/StatusMsg.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__STATUS_MSG__TRAITS_HPP_
#define ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__STATUS_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotis_controller_msgs/msg/detail/status_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace robotis_controller_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StatusMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: module_name
  {
    out << "module_name: ";
    rosidl_generator_traits::value_to_yaml(msg.module_name, out);
    out << ", ";
  }

  // member: status_msg
  {
    out << "status_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.status_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StatusMsg & msg,
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

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: module_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "module_name: ";
    rosidl_generator_traits::value_to_yaml(msg.module_name, out);
    out << "\n";
  }

  // member: status_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.status_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StatusMsg & msg, bool use_flow_style = false)
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

}  // namespace robotis_controller_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robotis_controller_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotis_controller_msgs::msg::StatusMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotis_controller_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotis_controller_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robotis_controller_msgs::msg::StatusMsg & msg)
{
  return robotis_controller_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robotis_controller_msgs::msg::StatusMsg>()
{
  return "robotis_controller_msgs::msg::StatusMsg";
}

template<>
inline const char * name<robotis_controller_msgs::msg::StatusMsg>()
{
  return "robotis_controller_msgs/msg/StatusMsg";
}

template<>
struct has_fixed_size<robotis_controller_msgs::msg::StatusMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robotis_controller_msgs::msg::StatusMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robotis_controller_msgs::msg::StatusMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__STATUS_MSG__TRAITS_HPP_
