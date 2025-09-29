// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_tuning_module_msgs:srv/GetPresentJointOffsetData.idl
// generated code does not contain a copyright notice

#ifndef OP3_TUNING_MODULE_MSGS__SRV__DETAIL__GET_PRESENT_JOINT_OFFSET_DATA__TRAITS_HPP_
#define OP3_TUNING_MODULE_MSGS__SRV__DETAIL__GET_PRESENT_JOINT_OFFSET_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_tuning_module_msgs/srv/detail/get_present_joint_offset_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace op3_tuning_module_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPresentJointOffsetData_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPresentJointOffsetData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPresentJointOffsetData_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace op3_tuning_module_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_tuning_module_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_tuning_module_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_tuning_module_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Request & msg)
{
  return op3_tuning_module_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Request>()
{
  return "op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Request";
}

template<>
inline const char * name<op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Request>()
{
  return "op3_tuning_module_msgs/srv/GetPresentJointOffsetData_Request";
}

template<>
struct has_fixed_size<op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'present_data_array'
#include "op3_tuning_module_msgs/msg/detail/joint_offset_position_data__traits.hpp"

namespace op3_tuning_module_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPresentJointOffsetData_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: present_data_array
  {
    if (msg.present_data_array.size() == 0) {
      out << "present_data_array: []";
    } else {
      out << "present_data_array: [";
      size_t pending_items = msg.present_data_array.size();
      for (auto item : msg.present_data_array) {
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
  const GetPresentJointOffsetData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: present_data_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.present_data_array.size() == 0) {
      out << "present_data_array: []\n";
    } else {
      out << "present_data_array:\n";
      for (auto item : msg.present_data_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPresentJointOffsetData_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace op3_tuning_module_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_tuning_module_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_tuning_module_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_tuning_module_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Response & msg)
{
  return op3_tuning_module_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Response>()
{
  return "op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Response";
}

template<>
inline const char * name<op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Response>()
{
  return "op3_tuning_module_msgs/srv/GetPresentJointOffsetData_Response";
}

template<>
struct has_fixed_size<op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<op3_tuning_module_msgs::srv::GetPresentJointOffsetData>()
{
  return "op3_tuning_module_msgs::srv::GetPresentJointOffsetData";
}

template<>
inline const char * name<op3_tuning_module_msgs::srv::GetPresentJointOffsetData>()
{
  return "op3_tuning_module_msgs/srv/GetPresentJointOffsetData";
}

template<>
struct has_fixed_size<op3_tuning_module_msgs::srv::GetPresentJointOffsetData>
  : std::integral_constant<
    bool,
    has_fixed_size<op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Request>::value &&
    has_fixed_size<op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Response>::value
  >
{
};

template<>
struct has_bounded_size<op3_tuning_module_msgs::srv::GetPresentJointOffsetData>
  : std::integral_constant<
    bool,
    has_bounded_size<op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Request>::value &&
    has_bounded_size<op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Response>::value
  >
{
};

template<>
struct is_service<op3_tuning_module_msgs::srv::GetPresentJointOffsetData>
  : std::true_type
{
};

template<>
struct is_service_request<op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Request>
  : std::true_type
{
};

template<>
struct is_service_response<op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OP3_TUNING_MODULE_MSGS__SRV__DETAIL__GET_PRESENT_JOINT_OFFSET_DATA__TRAITS_HPP_
