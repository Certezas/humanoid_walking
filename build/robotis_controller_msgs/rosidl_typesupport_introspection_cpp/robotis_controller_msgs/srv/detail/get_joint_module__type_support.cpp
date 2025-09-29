// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robotis_controller_msgs:srv/GetJointModule.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robotis_controller_msgs/srv/detail/get_joint_module__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robotis_controller_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetJointModule_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotis_controller_msgs::srv::GetJointModule_Request(_init);
}

void GetJointModule_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotis_controller_msgs::srv::GetJointModule_Request *>(message_memory);
  typed_message->~GetJointModule_Request();
}

size_t size_function__GetJointModule_Request__joint_name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetJointModule_Request__joint_name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetJointModule_Request__joint_name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetJointModule_Request__joint_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__GetJointModule_Request__joint_name(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__GetJointModule_Request__joint_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__GetJointModule_Request__joint_name(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__GetJointModule_Request__joint_name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetJointModule_Request_message_member_array[1] = {
  {
    "joint_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotis_controller_msgs::srv::GetJointModule_Request, joint_name),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetJointModule_Request__joint_name,  // size() function pointer
    get_const_function__GetJointModule_Request__joint_name,  // get_const(index) function pointer
    get_function__GetJointModule_Request__joint_name,  // get(index) function pointer
    fetch_function__GetJointModule_Request__joint_name,  // fetch(index, &value) function pointer
    assign_function__GetJointModule_Request__joint_name,  // assign(index, value) function pointer
    resize_function__GetJointModule_Request__joint_name  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetJointModule_Request_message_members = {
  "robotis_controller_msgs::srv",  // message namespace
  "GetJointModule_Request",  // message name
  1,  // number of fields
  sizeof(robotis_controller_msgs::srv::GetJointModule_Request),
  GetJointModule_Request_message_member_array,  // message members
  GetJointModule_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetJointModule_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetJointModule_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetJointModule_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace robotis_controller_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotis_controller_msgs::srv::GetJointModule_Request>()
{
  return &::robotis_controller_msgs::srv::rosidl_typesupport_introspection_cpp::GetJointModule_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotis_controller_msgs, srv, GetJointModule_Request)() {
  return &::robotis_controller_msgs::srv::rosidl_typesupport_introspection_cpp::GetJointModule_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "robotis_controller_msgs/srv/detail/get_joint_module__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robotis_controller_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetJointModule_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotis_controller_msgs::srv::GetJointModule_Response(_init);
}

void GetJointModule_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotis_controller_msgs::srv::GetJointModule_Response *>(message_memory);
  typed_message->~GetJointModule_Response();
}

size_t size_function__GetJointModule_Response__joint_name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetJointModule_Response__joint_name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetJointModule_Response__joint_name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetJointModule_Response__joint_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__GetJointModule_Response__joint_name(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__GetJointModule_Response__joint_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__GetJointModule_Response__joint_name(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__GetJointModule_Response__joint_name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetJointModule_Response__module_name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetJointModule_Response__module_name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetJointModule_Response__module_name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetJointModule_Response__module_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__GetJointModule_Response__module_name(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__GetJointModule_Response__module_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__GetJointModule_Response__module_name(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__GetJointModule_Response__module_name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetJointModule_Response_message_member_array[2] = {
  {
    "joint_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotis_controller_msgs::srv::GetJointModule_Response, joint_name),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetJointModule_Response__joint_name,  // size() function pointer
    get_const_function__GetJointModule_Response__joint_name,  // get_const(index) function pointer
    get_function__GetJointModule_Response__joint_name,  // get(index) function pointer
    fetch_function__GetJointModule_Response__joint_name,  // fetch(index, &value) function pointer
    assign_function__GetJointModule_Response__joint_name,  // assign(index, value) function pointer
    resize_function__GetJointModule_Response__joint_name  // resize(index) function pointer
  },
  {
    "module_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotis_controller_msgs::srv::GetJointModule_Response, module_name),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetJointModule_Response__module_name,  // size() function pointer
    get_const_function__GetJointModule_Response__module_name,  // get_const(index) function pointer
    get_function__GetJointModule_Response__module_name,  // get(index) function pointer
    fetch_function__GetJointModule_Response__module_name,  // fetch(index, &value) function pointer
    assign_function__GetJointModule_Response__module_name,  // assign(index, value) function pointer
    resize_function__GetJointModule_Response__module_name  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetJointModule_Response_message_members = {
  "robotis_controller_msgs::srv",  // message namespace
  "GetJointModule_Response",  // message name
  2,  // number of fields
  sizeof(robotis_controller_msgs::srv::GetJointModule_Response),
  GetJointModule_Response_message_member_array,  // message members
  GetJointModule_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetJointModule_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetJointModule_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetJointModule_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace robotis_controller_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotis_controller_msgs::srv::GetJointModule_Response>()
{
  return &::robotis_controller_msgs::srv::rosidl_typesupport_introspection_cpp::GetJointModule_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotis_controller_msgs, srv, GetJointModule_Response)() {
  return &::robotis_controller_msgs::srv::rosidl_typesupport_introspection_cpp::GetJointModule_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "robotis_controller_msgs/srv/detail/get_joint_module__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace robotis_controller_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetJointModule_service_members = {
  "robotis_controller_msgs::srv",  // service namespace
  "GetJointModule",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<robotis_controller_msgs::srv::GetJointModule>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetJointModule_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetJointModule_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace robotis_controller_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robotis_controller_msgs::srv::GetJointModule>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::robotis_controller_msgs::srv::rosidl_typesupport_introspection_cpp::GetJointModule_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::robotis_controller_msgs::srv::GetJointModule_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::robotis_controller_msgs::srv::GetJointModule_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotis_controller_msgs, srv, GetJointModule)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<robotis_controller_msgs::srv::GetJointModule>();
}

#ifdef __cplusplus
}
#endif
