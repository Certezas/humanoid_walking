// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from op3_camera_setting_tool_msgs:msg/V4lParameters.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "op3_camera_setting_tool_msgs/msg/detail/v4l_parameters__rosidl_typesupport_introspection_c.h"
#include "op3_camera_setting_tool_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "op3_camera_setting_tool_msgs/msg/detail/v4l_parameters__functions.h"
#include "op3_camera_setting_tool_msgs/msg/detail/v4l_parameters__struct.h"


// Include directives for member types
// Member `video_parameter`
#include "op3_camera_setting_tool_msgs/msg/v4l_parameter.h"
// Member `video_parameter`
#include "op3_camera_setting_tool_msgs/msg/detail/v4l_parameter__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__V4lParameters_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  op3_camera_setting_tool_msgs__msg__V4lParameters__init(message_memory);
}

void op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__V4lParameters_fini_function(void * message_memory)
{
  op3_camera_setting_tool_msgs__msg__V4lParameters__fini(message_memory);
}

size_t op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__size_function__V4lParameters__video_parameter(
  const void * untyped_member)
{
  const op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence * member =
    (const op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence *)(untyped_member);
  return member->size;
}

const void * op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__get_const_function__V4lParameters__video_parameter(
  const void * untyped_member, size_t index)
{
  const op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence * member =
    (const op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence *)(untyped_member);
  return &member->data[index];
}

void * op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__get_function__V4lParameters__video_parameter(
  void * untyped_member, size_t index)
{
  op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence * member =
    (op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence *)(untyped_member);
  return &member->data[index];
}

void op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__fetch_function__V4lParameters__video_parameter(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const op3_camera_setting_tool_msgs__msg__V4lParameter * item =
    ((const op3_camera_setting_tool_msgs__msg__V4lParameter *)
    op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__get_const_function__V4lParameters__video_parameter(untyped_member, index));
  op3_camera_setting_tool_msgs__msg__V4lParameter * value =
    (op3_camera_setting_tool_msgs__msg__V4lParameter *)(untyped_value);
  *value = *item;
}

void op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__assign_function__V4lParameters__video_parameter(
  void * untyped_member, size_t index, const void * untyped_value)
{
  op3_camera_setting_tool_msgs__msg__V4lParameter * item =
    ((op3_camera_setting_tool_msgs__msg__V4lParameter *)
    op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__get_function__V4lParameters__video_parameter(untyped_member, index));
  const op3_camera_setting_tool_msgs__msg__V4lParameter * value =
    (const op3_camera_setting_tool_msgs__msg__V4lParameter *)(untyped_value);
  *item = *value;
}

bool op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__resize_function__V4lParameters__video_parameter(
  void * untyped_member, size_t size)
{
  op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence * member =
    (op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence *)(untyped_member);
  op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence__fini(member);
  return op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__V4lParameters_message_member_array[1] = {
  {
    "video_parameter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_camera_setting_tool_msgs__msg__V4lParameters, video_parameter),  // bytes offset in struct
    NULL,  // default value
    op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__size_function__V4lParameters__video_parameter,  // size() function pointer
    op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__get_const_function__V4lParameters__video_parameter,  // get_const(index) function pointer
    op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__get_function__V4lParameters__video_parameter,  // get(index) function pointer
    op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__fetch_function__V4lParameters__video_parameter,  // fetch(index, &value) function pointer
    op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__assign_function__V4lParameters__video_parameter,  // assign(index, value) function pointer
    op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__resize_function__V4lParameters__video_parameter  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__V4lParameters_message_members = {
  "op3_camera_setting_tool_msgs__msg",  // message namespace
  "V4lParameters",  // message name
  1,  // number of fields
  sizeof(op3_camera_setting_tool_msgs__msg__V4lParameters),
  op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__V4lParameters_message_member_array,  // message members
  op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__V4lParameters_init_function,  // function to initialize message memory (memory has to be allocated)
  op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__V4lParameters_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__V4lParameters_message_type_support_handle = {
  0,
  &op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__V4lParameters_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_op3_camera_setting_tool_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_camera_setting_tool_msgs, msg, V4lParameters)() {
  op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__V4lParameters_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_camera_setting_tool_msgs, msg, V4lParameter)();
  if (!op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__V4lParameters_message_type_support_handle.typesupport_identifier) {
    op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__V4lParameters_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &op3_camera_setting_tool_msgs__msg__V4lParameters__rosidl_typesupport_introspection_c__V4lParameters_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
