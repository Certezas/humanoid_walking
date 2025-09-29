// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from op3_online_walking_module_msgs:msg/WalkingParam.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "op3_online_walking_module_msgs/msg/detail/walking_param__rosidl_typesupport_introspection_c.h"
#include "op3_online_walking_module_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "op3_online_walking_module_msgs/msg/detail/walking_param__functions.h"
#include "op3_online_walking_module_msgs/msg/detail/walking_param__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void op3_online_walking_module_msgs__msg__WalkingParam__rosidl_typesupport_introspection_c__WalkingParam_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  op3_online_walking_module_msgs__msg__WalkingParam__init(message_memory);
}

void op3_online_walking_module_msgs__msg__WalkingParam__rosidl_typesupport_introspection_c__WalkingParam_fini_function(void * message_memory)
{
  op3_online_walking_module_msgs__msg__WalkingParam__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember op3_online_walking_module_msgs__msg__WalkingParam__rosidl_typesupport_introspection_c__WalkingParam_message_member_array[5] = {
  {
    "dsp_ratio",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs__msg__WalkingParam, dsp_ratio),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lipm_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs__msg__WalkingParam, lipm_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot_height_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs__msg__WalkingParam, foot_height_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "zmp_offset_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs__msg__WalkingParam, zmp_offset_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "zmp_offset_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_online_walking_module_msgs__msg__WalkingParam, zmp_offset_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers op3_online_walking_module_msgs__msg__WalkingParam__rosidl_typesupport_introspection_c__WalkingParam_message_members = {
  "op3_online_walking_module_msgs__msg",  // message namespace
  "WalkingParam",  // message name
  5,  // number of fields
  sizeof(op3_online_walking_module_msgs__msg__WalkingParam),
  op3_online_walking_module_msgs__msg__WalkingParam__rosidl_typesupport_introspection_c__WalkingParam_message_member_array,  // message members
  op3_online_walking_module_msgs__msg__WalkingParam__rosidl_typesupport_introspection_c__WalkingParam_init_function,  // function to initialize message memory (memory has to be allocated)
  op3_online_walking_module_msgs__msg__WalkingParam__rosidl_typesupport_introspection_c__WalkingParam_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t op3_online_walking_module_msgs__msg__WalkingParam__rosidl_typesupport_introspection_c__WalkingParam_message_type_support_handle = {
  0,
  &op3_online_walking_module_msgs__msg__WalkingParam__rosidl_typesupport_introspection_c__WalkingParam_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_op3_online_walking_module_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_online_walking_module_msgs, msg, WalkingParam)() {
  if (!op3_online_walking_module_msgs__msg__WalkingParam__rosidl_typesupport_introspection_c__WalkingParam_message_type_support_handle.typesupport_identifier) {
    op3_online_walking_module_msgs__msg__WalkingParam__rosidl_typesupport_introspection_c__WalkingParam_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &op3_online_walking_module_msgs__msg__WalkingParam__rosidl_typesupport_introspection_c__WalkingParam_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
