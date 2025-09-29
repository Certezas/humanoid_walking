// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from op3_camera_setting_tool_msgs:msg/CameraParams.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "op3_camera_setting_tool_msgs/msg/detail/camera_params__rosidl_typesupport_introspection_c.h"
#include "op3_camera_setting_tool_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "op3_camera_setting_tool_msgs/msg/detail/camera_params__functions.h"
#include "op3_camera_setting_tool_msgs/msg/detail/camera_params__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void op3_camera_setting_tool_msgs__msg__CameraParams__rosidl_typesupport_introspection_c__CameraParams_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  op3_camera_setting_tool_msgs__msg__CameraParams__init(message_memory);
}

void op3_camera_setting_tool_msgs__msg__CameraParams__rosidl_typesupport_introspection_c__CameraParams_fini_function(void * message_memory)
{
  op3_camera_setting_tool_msgs__msg__CameraParams__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember op3_camera_setting_tool_msgs__msg__CameraParams__rosidl_typesupport_introspection_c__CameraParams_message_member_array[11] = {
  {
    "brightness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_camera_setting_tool_msgs__msg__CameraParams, brightness),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contrast",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_camera_setting_tool_msgs__msg__CameraParams, contrast),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "saturation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_camera_setting_tool_msgs__msg__CameraParams, saturation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sharpness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_camera_setting_tool_msgs__msg__CameraParams, sharpness),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gain",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_camera_setting_tool_msgs__msg__CameraParams, gain),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "focus_automatic_continuous",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_camera_setting_tool_msgs__msg__CameraParams, focus_automatic_continuous),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "focus_absolute",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_camera_setting_tool_msgs__msg__CameraParams, focus_absolute),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "auto_exposure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_camera_setting_tool_msgs__msg__CameraParams, auto_exposure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "exposure_time_absolute",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_camera_setting_tool_msgs__msg__CameraParams, exposure_time_absolute),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "white_balance_automatic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_camera_setting_tool_msgs__msg__CameraParams, white_balance_automatic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "white_balance_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_camera_setting_tool_msgs__msg__CameraParams, white_balance_temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers op3_camera_setting_tool_msgs__msg__CameraParams__rosidl_typesupport_introspection_c__CameraParams_message_members = {
  "op3_camera_setting_tool_msgs__msg",  // message namespace
  "CameraParams",  // message name
  11,  // number of fields
  sizeof(op3_camera_setting_tool_msgs__msg__CameraParams),
  op3_camera_setting_tool_msgs__msg__CameraParams__rosidl_typesupport_introspection_c__CameraParams_message_member_array,  // message members
  op3_camera_setting_tool_msgs__msg__CameraParams__rosidl_typesupport_introspection_c__CameraParams_init_function,  // function to initialize message memory (memory has to be allocated)
  op3_camera_setting_tool_msgs__msg__CameraParams__rosidl_typesupport_introspection_c__CameraParams_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t op3_camera_setting_tool_msgs__msg__CameraParams__rosidl_typesupport_introspection_c__CameraParams_message_type_support_handle = {
  0,
  &op3_camera_setting_tool_msgs__msg__CameraParams__rosidl_typesupport_introspection_c__CameraParams_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_op3_camera_setting_tool_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_camera_setting_tool_msgs, msg, CameraParams)() {
  if (!op3_camera_setting_tool_msgs__msg__CameraParams__rosidl_typesupport_introspection_c__CameraParams_message_type_support_handle.typesupport_identifier) {
    op3_camera_setting_tool_msgs__msg__CameraParams__rosidl_typesupport_introspection_c__CameraParams_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &op3_camera_setting_tool_msgs__msg__CameraParams__rosidl_typesupport_introspection_c__CameraParams_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
