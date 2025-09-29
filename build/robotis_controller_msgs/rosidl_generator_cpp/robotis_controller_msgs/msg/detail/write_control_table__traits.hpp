// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotis_controller_msgs:msg/WriteControlTable.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__WRITE_CONTROL_TABLE__TRAITS_HPP_
#define ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__WRITE_CONTROL_TABLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotis_controller_msgs/msg/detail/write_control_table__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robotis_controller_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WriteControlTable & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_name
  {
    out << "joint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_name, out);
    out << ", ";
  }

  // member: start_item_name
  {
    out << "start_item_name: ";
    rosidl_generator_traits::value_to_yaml(msg.start_item_name, out);
    out << ", ";
  }

  // member: data_length
  {
    out << "data_length: ";
    rosidl_generator_traits::value_to_yaml(msg.data_length, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const WriteControlTable & msg,
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

  // member: start_item_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_item_name: ";
    rosidl_generator_traits::value_to_yaml(msg.start_item_name, out);
    out << "\n";
  }

  // member: data_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_length: ";
    rosidl_generator_traits::value_to_yaml(msg.data_length, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WriteControlTable & msg, bool use_flow_style = false)
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
  const robotis_controller_msgs::msg::WriteControlTable & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotis_controller_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotis_controller_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robotis_controller_msgs::msg::WriteControlTable & msg)
{
  return robotis_controller_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robotis_controller_msgs::msg::WriteControlTable>()
{
  return "robotis_controller_msgs::msg::WriteControlTable";
}

template<>
inline const char * name<robotis_controller_msgs::msg::WriteControlTable>()
{
  return "robotis_controller_msgs/msg/WriteControlTable";
}

template<>
struct has_fixed_size<robotis_controller_msgs::msg::WriteControlTable>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robotis_controller_msgs::msg::WriteControlTable>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robotis_controller_msgs::msg::WriteControlTable>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__WRITE_CONTROL_TABLE__TRAITS_HPP_
