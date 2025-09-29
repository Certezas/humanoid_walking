// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotis_controller_msgs:srv/LoadOffset.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__LOAD_OFFSET__TRAITS_HPP_
#define ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__LOAD_OFFSET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotis_controller_msgs/srv/detail/load_offset__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robotis_controller_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LoadOffset_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: file_path
  {
    out << "file_path: ";
    rosidl_generator_traits::value_to_yaml(msg.file_path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadOffset_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: file_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file_path: ";
    rosidl_generator_traits::value_to_yaml(msg.file_path, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadOffset_Request & msg, bool use_flow_style = false)
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

}  // namespace robotis_controller_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robotis_controller_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotis_controller_msgs::srv::LoadOffset_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotis_controller_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotis_controller_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robotis_controller_msgs::srv::LoadOffset_Request & msg)
{
  return robotis_controller_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robotis_controller_msgs::srv::LoadOffset_Request>()
{
  return "robotis_controller_msgs::srv::LoadOffset_Request";
}

template<>
inline const char * name<robotis_controller_msgs::srv::LoadOffset_Request>()
{
  return "robotis_controller_msgs/srv/LoadOffset_Request";
}

template<>
struct has_fixed_size<robotis_controller_msgs::srv::LoadOffset_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robotis_controller_msgs::srv::LoadOffset_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robotis_controller_msgs::srv::LoadOffset_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robotis_controller_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LoadOffset_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadOffset_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadOffset_Response & msg, bool use_flow_style = false)
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

}  // namespace robotis_controller_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robotis_controller_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotis_controller_msgs::srv::LoadOffset_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotis_controller_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotis_controller_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robotis_controller_msgs::srv::LoadOffset_Response & msg)
{
  return robotis_controller_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robotis_controller_msgs::srv::LoadOffset_Response>()
{
  return "robotis_controller_msgs::srv::LoadOffset_Response";
}

template<>
inline const char * name<robotis_controller_msgs::srv::LoadOffset_Response>()
{
  return "robotis_controller_msgs/srv/LoadOffset_Response";
}

template<>
struct has_fixed_size<robotis_controller_msgs::srv::LoadOffset_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robotis_controller_msgs::srv::LoadOffset_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robotis_controller_msgs::srv::LoadOffset_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robotis_controller_msgs::srv::LoadOffset>()
{
  return "robotis_controller_msgs::srv::LoadOffset";
}

template<>
inline const char * name<robotis_controller_msgs::srv::LoadOffset>()
{
  return "robotis_controller_msgs/srv/LoadOffset";
}

template<>
struct has_fixed_size<robotis_controller_msgs::srv::LoadOffset>
  : std::integral_constant<
    bool,
    has_fixed_size<robotis_controller_msgs::srv::LoadOffset_Request>::value &&
    has_fixed_size<robotis_controller_msgs::srv::LoadOffset_Response>::value
  >
{
};

template<>
struct has_bounded_size<robotis_controller_msgs::srv::LoadOffset>
  : std::integral_constant<
    bool,
    has_bounded_size<robotis_controller_msgs::srv::LoadOffset_Request>::value &&
    has_bounded_size<robotis_controller_msgs::srv::LoadOffset_Response>::value
  >
{
};

template<>
struct is_service<robotis_controller_msgs::srv::LoadOffset>
  : std::true_type
{
};

template<>
struct is_service_request<robotis_controller_msgs::srv::LoadOffset_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robotis_controller_msgs::srv::LoadOffset_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__LOAD_OFFSET__TRAITS_HPP_
