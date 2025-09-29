// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from op3_tuning_module_msgs:msg/JointOffsetPositionData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "op3_tuning_module_msgs/msg/detail/joint_offset_position_data__rosidl_typesupport_introspection_c.h"
#include "op3_tuning_module_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "op3_tuning_module_msgs/msg/detail/joint_offset_position_data__functions.h"
#include "op3_tuning_module_msgs/msg/detail/joint_offset_position_data__struct.h"


// Include directives for member types
// Member `joint_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void op3_tuning_module_msgs__msg__JointOffsetPositionData__rosidl_typesupport_introspection_c__JointOffsetPositionData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  op3_tuning_module_msgs__msg__JointOffsetPositionData__init(message_memory);
}

void op3_tuning_module_msgs__msg__JointOffsetPositionData__rosidl_typesupport_introspection_c__JointOffsetPositionData_fini_function(void * message_memory)
{
  op3_tuning_module_msgs__msg__JointOffsetPositionData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember op3_tuning_module_msgs__msg__JointOffsetPositionData__rosidl_typesupport_introspection_c__JointOffsetPositionData_message_member_array[7] = {
  {
    "joint_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_tuning_module_msgs__msg__JointOffsetPositionData, joint_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_tuning_module_msgs__msg__JointOffsetPositionData, goal_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_tuning_module_msgs__msg__JointOffsetPositionData, offset_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "present_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_tuning_module_msgs__msg__JointOffsetPositionData, present_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "p_gain",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_tuning_module_msgs__msg__JointOffsetPositionData, p_gain),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "i_gain",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_tuning_module_msgs__msg__JointOffsetPositionData, i_gain),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d_gain",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_tuning_module_msgs__msg__JointOffsetPositionData, d_gain),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers op3_tuning_module_msgs__msg__JointOffsetPositionData__rosidl_typesupport_introspection_c__JointOffsetPositionData_message_members = {
  "op3_tuning_module_msgs__msg",  // message namespace
  "JointOffsetPositionData",  // message name
  7,  // number of fields
  sizeof(op3_tuning_module_msgs__msg__JointOffsetPositionData),
  op3_tuning_module_msgs__msg__JointOffsetPositionData__rosidl_typesupport_introspection_c__JointOffsetPositionData_message_member_array,  // message members
  op3_tuning_module_msgs__msg__JointOffsetPositionData__rosidl_typesupport_introspection_c__JointOffsetPositionData_init_function,  // function to initialize message memory (memory has to be allocated)
  op3_tuning_module_msgs__msg__JointOffsetPositionData__rosidl_typesupport_introspection_c__JointOffsetPositionData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t op3_tuning_module_msgs__msg__JointOffsetPositionData__rosidl_typesupport_introspection_c__JointOffsetPositionData_message_type_support_handle = {
  0,
  &op3_tuning_module_msgs__msg__JointOffsetPositionData__rosidl_typesupport_introspection_c__JointOffsetPositionData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_op3_tuning_module_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_tuning_module_msgs, msg, JointOffsetPositionData)() {
  if (!op3_tuning_module_msgs__msg__JointOffsetPositionData__rosidl_typesupport_introspection_c__JointOffsetPositionData_message_type_support_handle.typesupport_identifier) {
    op3_tuning_module_msgs__msg__JointOffsetPositionData__rosidl_typesupport_introspection_c__JointOffsetPositionData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &op3_tuning_module_msgs__msg__JointOffsetPositionData__rosidl_typesupport_introspection_c__JointOffsetPositionData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
