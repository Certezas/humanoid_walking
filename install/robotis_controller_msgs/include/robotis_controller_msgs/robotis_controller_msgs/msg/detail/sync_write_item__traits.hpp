// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotis_controller_msgs:msg/SyncWriteItem.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__SYNC_WRITE_ITEM__TRAITS_HPP_
#define ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__SYNC_WRITE_ITEM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotis_controller_msgs/msg/detail/sync_write_item__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robotis_controller_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SyncWriteItem & msg,
  std::ostream & out)
{
  out << "{";
  // member: item_name
  {
    out << "item_name: ";
    rosidl_generator_traits::value_to_yaml(msg.item_name, out);
    out << ", ";
  }

  // member: joint_name
  {
    if (msg.joint_name.size() == 0) {
      out << "joint_name: []";
    } else {
      out << "joint_name: [";
      size_t pending_items = msg.joint_name.size();
      for (auto item : msg.joint_name) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: value
  {
    if (msg.value.size() == 0) {
      out << "value: []";
    } else {
      out << "value: [";
      size_t pending_items = msg.value.size();
      for (auto item : msg.value) {
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
  const SyncWriteItem & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: item_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "item_name: ";
    rosidl_generator_traits::value_to_yaml(msg.item_name, out);
    out << "\n";
  }

  // member: joint_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_name.size() == 0) {
      out << "joint_name: []\n";
    } else {
      out << "joint_name:\n";
      for (auto item : msg.joint_name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.value.size() == 0) {
      out << "value: []\n";
    } else {
      out << "value:\n";
      for (auto item : msg.value) {
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

inline std::string to_yaml(const SyncWriteItem & msg, bool use_flow_style = false)
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
  const robotis_controller_msgs::msg::SyncWriteItem & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotis_controller_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotis_controller_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robotis_controller_msgs::msg::SyncWriteItem & msg)
{
  return robotis_controller_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robotis_controller_msgs::msg::SyncWriteItem>()
{
  return "robotis_controller_msgs::msg::SyncWriteItem";
}

template<>
inline const char * name<robotis_controller_msgs::msg::SyncWriteItem>()
{
  return "robotis_controller_msgs/msg/SyncWriteItem";
}

template<>
struct has_fixed_size<robotis_controller_msgs::msg::SyncWriteItem>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robotis_controller_msgs::msg::SyncWriteItem>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robotis_controller_msgs::msg::SyncWriteItem>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__SYNC_WRITE_ITEM__TRAITS_HPP_
