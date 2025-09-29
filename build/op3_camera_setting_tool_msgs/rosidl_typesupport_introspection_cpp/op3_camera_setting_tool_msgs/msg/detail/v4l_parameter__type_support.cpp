// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from op3_camera_setting_tool_msgs:msg/V4lParameter.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "op3_camera_setting_tool_msgs/msg/detail/v4l_parameter__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace op3_camera_setting_tool_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void V4lParameter_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) op3_camera_setting_tool_msgs::msg::V4lParameter(_init);
}

void V4lParameter_fini_function(void * message_memory)
{
  auto typed_message = static_cast<op3_camera_setting_tool_msgs::msg::V4lParameter *>(message_memory);
  typed_message->~V4lParameter();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember V4lParameter_message_member_array[2] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_camera_setting_tool_msgs::msg::V4lParameter, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_camera_setting_tool_msgs::msg::V4lParameter, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers V4lParameter_message_members = {
  "op3_camera_setting_tool_msgs::msg",  // message namespace
  "V4lParameter",  // message name
  2,  // number of fields
  sizeof(op3_camera_setting_tool_msgs::msg::V4lParameter),
  V4lParameter_message_member_array,  // message members
  V4lParameter_init_function,  // function to initialize message memory (memory has to be allocated)
  V4lParameter_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t V4lParameter_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &V4lParameter_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace op3_camera_setting_tool_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<op3_camera_setting_tool_msgs::msg::V4lParameter>()
{
  return &::op3_camera_setting_tool_msgs::msg::rosidl_typesupport_introspection_cpp::V4lParameter_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, op3_camera_setting_tool_msgs, msg, V4lParameter)() {
  return &::op3_camera_setting_tool_msgs::msg::rosidl_typesupport_introspection_cpp::V4lParameter_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
