// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_online_walking_module_msgs:srv/GetPreviewMatrix.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_PREVIEW_MATRIX__TRAITS_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_PREVIEW_MATRIX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_online_walking_module_msgs/srv/detail/get_preview_matrix__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'req'
#include "op3_online_walking_module_msgs/msg/detail/preview_request__traits.hpp"

namespace op3_online_walking_module_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPreviewMatrix_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: req
  {
    out << "req: ";
    to_flow_style_yaml(msg.req, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPreviewMatrix_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "req:\n";
    to_block_style_yaml(msg.req, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPreviewMatrix_Request & msg, bool use_flow_style = false)
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

}  // namespace op3_online_walking_module_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_online_walking_module_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_online_walking_module_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_online_walking_module_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request & msg)
{
  return op3_online_walking_module_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request>()
{
  return "op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request";
}

template<>
inline const char * name<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request>()
{
  return "op3_online_walking_module_msgs/srv/GetPreviewMatrix_Request";
}

template<>
struct has_fixed_size<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request>
  : std::integral_constant<bool, has_fixed_size<op3_online_walking_module_msgs::msg::PreviewRequest>::value> {};

template<>
struct has_bounded_size<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request>
  : std::integral_constant<bool, has_bounded_size<op3_online_walking_module_msgs::msg::PreviewRequest>::value> {};

template<>
struct is_message<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'res'
#include "op3_online_walking_module_msgs/msg/detail/preview_response__traits.hpp"

namespace op3_online_walking_module_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPreviewMatrix_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: res
  {
    out << "res: ";
    to_flow_style_yaml(msg.res, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPreviewMatrix_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: res
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "res:\n";
    to_block_style_yaml(msg.res, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPreviewMatrix_Response & msg, bool use_flow_style = false)
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

}  // namespace op3_online_walking_module_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_online_walking_module_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_online_walking_module_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_online_walking_module_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response & msg)
{
  return op3_online_walking_module_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response>()
{
  return "op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response";
}

template<>
inline const char * name<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response>()
{
  return "op3_online_walking_module_msgs/srv/GetPreviewMatrix_Response";
}

template<>
struct has_fixed_size<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response>
  : std::integral_constant<bool, has_fixed_size<op3_online_walking_module_msgs::msg::PreviewResponse>::value> {};

template<>
struct has_bounded_size<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response>
  : std::integral_constant<bool, has_bounded_size<op3_online_walking_module_msgs::msg::PreviewResponse>::value> {};

template<>
struct is_message<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<op3_online_walking_module_msgs::srv::GetPreviewMatrix>()
{
  return "op3_online_walking_module_msgs::srv::GetPreviewMatrix";
}

template<>
inline const char * name<op3_online_walking_module_msgs::srv::GetPreviewMatrix>()
{
  return "op3_online_walking_module_msgs/srv/GetPreviewMatrix";
}

template<>
struct has_fixed_size<op3_online_walking_module_msgs::srv::GetPreviewMatrix>
  : std::integral_constant<
    bool,
    has_fixed_size<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request>::value &&
    has_fixed_size<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response>::value
  >
{
};

template<>
struct has_bounded_size<op3_online_walking_module_msgs::srv::GetPreviewMatrix>
  : std::integral_constant<
    bool,
    has_bounded_size<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request>::value &&
    has_bounded_size<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response>::value
  >
{
};

template<>
struct is_service<op3_online_walking_module_msgs::srv::GetPreviewMatrix>
  : std::true_type
{
};

template<>
struct is_service_request<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request>
  : std::true_type
{
};

template<>
struct is_service_response<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_PREVIEW_MATRIX__TRAITS_HPP_
