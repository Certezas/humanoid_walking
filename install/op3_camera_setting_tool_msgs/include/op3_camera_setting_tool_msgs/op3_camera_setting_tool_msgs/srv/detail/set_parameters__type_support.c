// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from op3_camera_setting_tool_msgs:srv/SetParameters.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "op3_camera_setting_tool_msgs/srv/detail/set_parameters__rosidl_typesupport_introspection_c.h"
#include "op3_camera_setting_tool_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "op3_camera_setting_tool_msgs/srv/detail/set_parameters__functions.h"
#include "op3_camera_setting_tool_msgs/srv/detail/set_parameters__struct.h"


// Include directives for member types
// Member `params`
#include "op3_camera_setting_tool_msgs/msg/camera_params.h"
// Member `params`
#include "op3_camera_setting_tool_msgs/msg/detail/camera_params__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void op3_camera_setting_tool_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  op3_camera_setting_tool_msgs__srv__SetParameters_Request__init(message_memory);
}

void op3_camera_setting_tool_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_fini_function(void * message_memory)
{
  op3_camera_setting_tool_msgs__srv__SetParameters_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember op3_camera_setting_tool_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_member_array[1] = {
  {
    "params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_camera_setting_tool_msgs__srv__SetParameters_Request, params),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers op3_camera_setting_tool_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_members = {
  "op3_camera_setting_tool_msgs__srv",  // message namespace
  "SetParameters_Request",  // message name
  1,  // number of fields
  sizeof(op3_camera_setting_tool_msgs__srv__SetParameters_Request),
  op3_camera_setting_tool_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_member_array,  // message members
  op3_camera_setting_tool_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  op3_camera_setting_tool_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t op3_camera_setting_tool_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_type_support_handle = {
  0,
  &op3_camera_setting_tool_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_op3_camera_setting_tool_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_camera_setting_tool_msgs, srv, SetParameters_Request)() {
  op3_camera_setting_tool_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_camera_setting_tool_msgs, msg, CameraParams)();
  if (!op3_camera_setting_tool_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_type_support_handle.typesupport_identifier) {
    op3_camera_setting_tool_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &op3_camera_setting_tool_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "op3_camera_setting_tool_msgs/srv/detail/set_parameters__rosidl_typesupport_introspection_c.h"
// already included above
// #include "op3_camera_setting_tool_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "op3_camera_setting_tool_msgs/srv/detail/set_parameters__functions.h"
// already included above
// #include "op3_camera_setting_tool_msgs/srv/detail/set_parameters__struct.h"


// Include directives for member types
// Member `returns`
// already included above
// #include "op3_camera_setting_tool_msgs/msg/camera_params.h"
// Member `returns`
// already included above
// #include "op3_camera_setting_tool_msgs/msg/detail/camera_params__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void op3_camera_setting_tool_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  op3_camera_setting_tool_msgs__srv__SetParameters_Response__init(message_memory);
}

void op3_camera_setting_tool_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_fini_function(void * message_memory)
{
  op3_camera_setting_tool_msgs__srv__SetParameters_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember op3_camera_setting_tool_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_member_array[1] = {
  {
    "returns",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_camera_setting_tool_msgs__srv__SetParameters_Response, returns),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers op3_camera_setting_tool_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_members = {
  "op3_camera_setting_tool_msgs__srv",  // message namespace
  "SetParameters_Response",  // message name
  1,  // number of fields
  sizeof(op3_camera_setting_tool_msgs__srv__SetParameters_Response),
  op3_camera_setting_tool_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_member_array,  // message members
  op3_camera_setting_tool_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  op3_camera_setting_tool_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t op3_camera_setting_tool_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_type_support_handle = {
  0,
  &op3_camera_setting_tool_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_op3_camera_setting_tool_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_camera_setting_tool_msgs, srv, SetParameters_Response)() {
  op3_camera_setting_tool_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_camera_setting_tool_msgs, msg, CameraParams)();
  if (!op3_camera_setting_tool_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_type_support_handle.typesupport_identifier) {
    op3_camera_setting_tool_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &op3_camera_setting_tool_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "op3_camera_setting_tool_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "op3_camera_setting_tool_msgs/srv/detail/set_parameters__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers op3_camera_setting_tool_msgs__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_service_members = {
  "op3_camera_setting_tool_msgs__srv",  // service namespace
  "SetParameters",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // op3_camera_setting_tool_msgs__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_Request_message_type_support_handle,
  NULL  // response message
  // op3_camera_setting_tool_msgs__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_Response_message_type_support_handle
};

static rosidl_service_type_support_t op3_camera_setting_tool_msgs__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_service_type_support_handle = {
  0,
  &op3_camera_setting_tool_msgs__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_camera_setting_tool_msgs, srv, SetParameters_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_camera_setting_tool_msgs, srv, SetParameters_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_op3_camera_setting_tool_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_camera_setting_tool_msgs, srv, SetParameters)() {
  if (!op3_camera_setting_tool_msgs__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_service_type_support_handle.typesupport_identifier) {
    op3_camera_setting_tool_msgs__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)op3_camera_setting_tool_msgs__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_camera_setting_tool_msgs, srv, SetParameters_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_camera_setting_tool_msgs, srv, SetParameters_Response)()->data;
  }

  return &op3_camera_setting_tool_msgs__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_service_type_support_handle;
}
