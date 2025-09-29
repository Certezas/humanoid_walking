// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robotis_controller_msgs:srv/GetJointModule.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robotis_controller_msgs/srv/detail/get_joint_module__rosidl_typesupport_introspection_c.h"
#include "robotis_controller_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robotis_controller_msgs/srv/detail/get_joint_module__functions.h"
#include "robotis_controller_msgs/srv/detail/get_joint_module__struct.h"


// Include directives for member types
// Member `joint_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__GetJointModule_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotis_controller_msgs__srv__GetJointModule_Request__init(message_memory);
}

void robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__GetJointModule_Request_fini_function(void * message_memory)
{
  robotis_controller_msgs__srv__GetJointModule_Request__fini(message_memory);
}

size_t robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__size_function__GetJointModule_Request__joint_name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__get_const_function__GetJointModule_Request__joint_name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__get_function__GetJointModule_Request__joint_name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__fetch_function__GetJointModule_Request__joint_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__get_const_function__GetJointModule_Request__joint_name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__assign_function__GetJointModule_Request__joint_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__get_function__GetJointModule_Request__joint_name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__resize_function__GetJointModule_Request__joint_name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__GetJointModule_Request_message_member_array[1] = {
  {
    "joint_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotis_controller_msgs__srv__GetJointModule_Request, joint_name),  // bytes offset in struct
    NULL,  // default value
    robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__size_function__GetJointModule_Request__joint_name,  // size() function pointer
    robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__get_const_function__GetJointModule_Request__joint_name,  // get_const(index) function pointer
    robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__get_function__GetJointModule_Request__joint_name,  // get(index) function pointer
    robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__fetch_function__GetJointModule_Request__joint_name,  // fetch(index, &value) function pointer
    robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__assign_function__GetJointModule_Request__joint_name,  // assign(index, value) function pointer
    robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__resize_function__GetJointModule_Request__joint_name  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__GetJointModule_Request_message_members = {
  "robotis_controller_msgs__srv",  // message namespace
  "GetJointModule_Request",  // message name
  1,  // number of fields
  sizeof(robotis_controller_msgs__srv__GetJointModule_Request),
  robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__GetJointModule_Request_message_member_array,  // message members
  robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__GetJointModule_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__GetJointModule_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__GetJointModule_Request_message_type_support_handle = {
  0,
  &robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__GetJointModule_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotis_controller_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotis_controller_msgs, srv, GetJointModule_Request)() {
  if (!robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__GetJointModule_Request_message_type_support_handle.typesupport_identifier) {
    robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__GetJointModule_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotis_controller_msgs__srv__GetJointModule_Request__rosidl_typesupport_introspection_c__GetJointModule_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robotis_controller_msgs/srv/detail/get_joint_module__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robotis_controller_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robotis_controller_msgs/srv/detail/get_joint_module__functions.h"
// already included above
// #include "robotis_controller_msgs/srv/detail/get_joint_module__struct.h"


// Include directives for member types
// Member `joint_name`
// Member `module_name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__GetJointModule_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotis_controller_msgs__srv__GetJointModule_Response__init(message_memory);
}

void robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__GetJointModule_Response_fini_function(void * message_memory)
{
  robotis_controller_msgs__srv__GetJointModule_Response__fini(message_memory);
}

size_t robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__size_function__GetJointModule_Response__joint_name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__get_const_function__GetJointModule_Response__joint_name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__get_function__GetJointModule_Response__joint_name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__fetch_function__GetJointModule_Response__joint_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__get_const_function__GetJointModule_Response__joint_name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__assign_function__GetJointModule_Response__joint_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__get_function__GetJointModule_Response__joint_name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__resize_function__GetJointModule_Response__joint_name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__size_function__GetJointModule_Response__module_name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__get_const_function__GetJointModule_Response__module_name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__get_function__GetJointModule_Response__module_name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__fetch_function__GetJointModule_Response__module_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__get_const_function__GetJointModule_Response__module_name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__assign_function__GetJointModule_Response__module_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__get_function__GetJointModule_Response__module_name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__resize_function__GetJointModule_Response__module_name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__GetJointModule_Response_message_member_array[2] = {
  {
    "joint_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotis_controller_msgs__srv__GetJointModule_Response, joint_name),  // bytes offset in struct
    NULL,  // default value
    robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__size_function__GetJointModule_Response__joint_name,  // size() function pointer
    robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__get_const_function__GetJointModule_Response__joint_name,  // get_const(index) function pointer
    robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__get_function__GetJointModule_Response__joint_name,  // get(index) function pointer
    robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__fetch_function__GetJointModule_Response__joint_name,  // fetch(index, &value) function pointer
    robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__assign_function__GetJointModule_Response__joint_name,  // assign(index, value) function pointer
    robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__resize_function__GetJointModule_Response__joint_name  // resize(index) function pointer
  },
  {
    "module_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotis_controller_msgs__srv__GetJointModule_Response, module_name),  // bytes offset in struct
    NULL,  // default value
    robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__size_function__GetJointModule_Response__module_name,  // size() function pointer
    robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__get_const_function__GetJointModule_Response__module_name,  // get_const(index) function pointer
    robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__get_function__GetJointModule_Response__module_name,  // get(index) function pointer
    robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__fetch_function__GetJointModule_Response__module_name,  // fetch(index, &value) function pointer
    robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__assign_function__GetJointModule_Response__module_name,  // assign(index, value) function pointer
    robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__resize_function__GetJointModule_Response__module_name  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__GetJointModule_Response_message_members = {
  "robotis_controller_msgs__srv",  // message namespace
  "GetJointModule_Response",  // message name
  2,  // number of fields
  sizeof(robotis_controller_msgs__srv__GetJointModule_Response),
  robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__GetJointModule_Response_message_member_array,  // message members
  robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__GetJointModule_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__GetJointModule_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__GetJointModule_Response_message_type_support_handle = {
  0,
  &robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__GetJointModule_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotis_controller_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotis_controller_msgs, srv, GetJointModule_Response)() {
  if (!robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__GetJointModule_Response_message_type_support_handle.typesupport_identifier) {
    robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__GetJointModule_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotis_controller_msgs__srv__GetJointModule_Response__rosidl_typesupport_introspection_c__GetJointModule_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robotis_controller_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robotis_controller_msgs/srv/detail/get_joint_module__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robotis_controller_msgs__srv__detail__get_joint_module__rosidl_typesupport_introspection_c__GetJointModule_service_members = {
  "robotis_controller_msgs__srv",  // service namespace
  "GetJointModule",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robotis_controller_msgs__srv__detail__get_joint_module__rosidl_typesupport_introspection_c__GetJointModule_Request_message_type_support_handle,
  NULL  // response message
  // robotis_controller_msgs__srv__detail__get_joint_module__rosidl_typesupport_introspection_c__GetJointModule_Response_message_type_support_handle
};

static rosidl_service_type_support_t robotis_controller_msgs__srv__detail__get_joint_module__rosidl_typesupport_introspection_c__GetJointModule_service_type_support_handle = {
  0,
  &robotis_controller_msgs__srv__detail__get_joint_module__rosidl_typesupport_introspection_c__GetJointModule_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotis_controller_msgs, srv, GetJointModule_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotis_controller_msgs, srv, GetJointModule_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotis_controller_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotis_controller_msgs, srv, GetJointModule)() {
  if (!robotis_controller_msgs__srv__detail__get_joint_module__rosidl_typesupport_introspection_c__GetJointModule_service_type_support_handle.typesupport_identifier) {
    robotis_controller_msgs__srv__detail__get_joint_module__rosidl_typesupport_introspection_c__GetJointModule_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robotis_controller_msgs__srv__detail__get_joint_module__rosidl_typesupport_introspection_c__GetJointModule_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotis_controller_msgs, srv, GetJointModule_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotis_controller_msgs, srv, GetJointModule_Response)()->data;
  }

  return &robotis_controller_msgs__srv__detail__get_joint_module__rosidl_typesupport_introspection_c__GetJointModule_service_type_support_handle;
}
