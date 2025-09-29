// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotis_controller_msgs:srv/SetJointModule.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__SET_JOINT_MODULE__TRAITS_HPP_
#define ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__SET_JOINT_MODULE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotis_controller_msgs/srv/detail/set_joint_module__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robotis_controller_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetJointModule_Request & msg,
  std::ostream & out)
{
  out << "{";
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

  // member: module_name
  {
    if (msg.module_name.size() == 0) {
      out << "module_name: []";
    } else {
      out << "module_name: [";
      size_t pending_items = msg.module_name.size();
      for (auto item : msg.module_name) {
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
  const SetJointModule_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: module_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.module_name.size() == 0) {
      out << "module_name: []\n";
    } else {
      out << "module_name:\n";
      for (auto item : msg.module_name) {
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

inline std::string to_yaml(const SetJointModule_Request & msg, bool use_flow_style = false)
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
  const robotis_controller_msgs::srv::SetJointModule_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotis_controller_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotis_controller_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robotis_controller_msgs::srv::SetJointModule_Request & msg)
{
  return robotis_controller_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robotis_controller_msgs::srv::SetJointModule_Request>()
{
  return "robotis_controller_msgs::srv::SetJointModule_Request";
}

template<>
inline const char * name<robotis_controller_msgs::srv::SetJointModule_Request>()
{
  return "robotis_controller_msgs/srv/SetJointModule_Request";
}

template<>
struct has_fixed_size<robotis_controller_msgs::srv::SetJointModule_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robotis_controller_msgs::srv::SetJointModule_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robotis_controller_msgs::srv::SetJointModule_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robotis_controller_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetJointModule_Response & msg,
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
  const SetJointModule_Response & msg,
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

inline std::string to_yaml(const SetJointModule_Response & msg, bool use_flow_style = false)
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
  const robotis_controller_msgs::srv::SetJointModule_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotis_controller_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotis_controller_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robotis_controller_msgs::srv::SetJointModule_Response & msg)
{
  return robotis_controller_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robotis_controller_msgs::srv::SetJointModule_Response>()
{
  return "robotis_controller_msgs::srv::SetJointModule_Response";
}

template<>
inline const char * name<robotis_controller_msgs::srv::SetJointModule_Response>()
{
  return "robotis_controller_msgs/srv/SetJointModule_Response";
}

template<>
struct has_fixed_size<robotis_controller_msgs::srv::SetJointModule_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robotis_controller_msgs::srv::SetJointModule_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robotis_controller_msgs::srv::SetJointModule_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robotis_controller_msgs::srv::SetJointModule>()
{
  return "robotis_controller_msgs::srv::SetJointModule";
}

template<>
inline const char * name<robotis_controller_msgs::srv::SetJointModule>()
{
  return "robotis_controller_msgs/srv/SetJointModule";
}

template<>
struct has_fixed_size<robotis_controller_msgs::srv::SetJointModule>
  : std::integral_constant<
    bool,
    has_fixed_size<robotis_controller_msgs::srv::SetJointModule_Request>::value &&
    has_fixed_size<robotis_controller_msgs::srv::SetJointModule_Response>::value
  >
{
};

template<>
struct has_bounded_size<robotis_controller_msgs::srv::SetJointModule>
  : std::integral_constant<
    bool,
    has_bounded_size<robotis_controller_msgs::srv::SetJointModule_Request>::value &&
    has_bounded_size<robotis_controller_msgs::srv::SetJointModule_Response>::value
  >
{
};

template<>
struct is_service<robotis_controller_msgs::srv::SetJointModule>
  : std::true_type
{
};

template<>
struct is_service_request<robotis_controller_msgs::srv::SetJointModule_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robotis_controller_msgs::srv::SetJointModule_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__SET_JOINT_MODULE__TRAITS_HPP_
