// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from op3_online_walking_module_msgs:msg/PreviewResponse.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "op3_online_walking_module_msgs/msg/detail/preview_response__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace op3_online_walking_module_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PreviewResponse_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) op3_online_walking_module_msgs::msg::PreviewResponse(_init);
}

void PreviewResponse_fini_function(void * message_memory)
{
  auto typed_message = static_cast<op3_online_walking_module_msgs::msg::PreviewResponse *>(message_memory);
  typed_message->~PreviewResponse();
}

size_t size_function__PreviewResponse__k(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PreviewResponse__k(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__PreviewResponse__k(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__PreviewResponse__k(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__PreviewResponse__k(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__PreviewResponse__k(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__PreviewResponse__k(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__PreviewResponse__k(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PreviewResponse__p(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PreviewResponse__p(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__PreviewResponse__p(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__PreviewResponse__p(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__PreviewResponse__p(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__PreviewResponse__p(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__PreviewResponse__p(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__PreviewResponse__p(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PreviewResponse_message_member_array[6] = {
  {
    "k_row",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs::msg::PreviewResponse, k_row),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "k_col",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs::msg::PreviewResponse, k_col),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "k",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs::msg::PreviewResponse, k),  // bytes offset in struct
    nullptr,  // default value
    size_function__PreviewResponse__k,  // size() function pointer
    get_const_function__PreviewResponse__k,  // get_const(index) function pointer
    get_function__PreviewResponse__k,  // get(index) function pointer
    fetch_function__PreviewResponse__k,  // fetch(index, &value) function pointer
    assign_function__PreviewResponse__k,  // assign(index, value) function pointer
    resize_function__PreviewResponse__k  // resize(index) function pointer
  },
  {
    "p_row",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs::msg::PreviewResponse, p_row),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "p_col",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs::msg::PreviewResponse, p_col),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "p",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs::msg::PreviewResponse, p),  // bytes offset in struct
    nullptr,  // default value
    size_function__PreviewResponse__p,  // size() function pointer
    get_const_function__PreviewResponse__p,  // get_const(index) function pointer
    get_function__PreviewResponse__p,  // get(index) function pointer
    fetch_function__PreviewResponse__p,  // fetch(index, &value) function pointer
    assign_function__PreviewResponse__p,  // assign(index, value) function pointer
    resize_function__PreviewResponse__p  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PreviewResponse_message_members = {
  "op3_online_walking_module_msgs::msg",  // message namespace
  "PreviewResponse",  // message name
  6,  // number of fields
  sizeof(op3_online_walking_module_msgs::msg::PreviewResponse),
  PreviewResponse_message_member_array,  // message members
  PreviewResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  PreviewResponse_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PreviewResponse_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PreviewResponse_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace op3_online_walking_module_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<op3_online_walking_module_msgs::msg::PreviewResponse>()
{
  return &::op3_online_walking_module_msgs::msg::rosidl_typesupport_introspection_cpp::PreviewResponse_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, op3_online_walking_module_msgs, msg, PreviewResponse)() {
  return &::op3_online_walking_module_msgs::msg::rosidl_typesupport_introspection_cpp::PreviewResponse_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
