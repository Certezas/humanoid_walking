// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from op3_ball_detector_msgs:msg/CircleSetStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "op3_ball_detector_msgs/msg/detail/circle_set_stamped__rosidl_typesupport_introspection_c.h"
#include "op3_ball_detector_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "op3_ball_detector_msgs/msg/detail/circle_set_stamped__functions.h"
#include "op3_ball_detector_msgs/msg/detail/circle_set_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `circles`
#include "geometry_msgs/msg/point.h"
// Member `circles`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__CircleSetStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  op3_ball_detector_msgs__msg__CircleSetStamped__init(message_memory);
}

void op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__CircleSetStamped_fini_function(void * message_memory)
{
  op3_ball_detector_msgs__msg__CircleSetStamped__fini(message_memory);
}

size_t op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__size_function__CircleSetStamped__circles(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__get_const_function__CircleSetStamped__circles(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__get_function__CircleSetStamped__circles(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__fetch_function__CircleSetStamped__circles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__get_const_function__CircleSetStamped__circles(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__assign_function__CircleSetStamped__circles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__get_function__CircleSetStamped__circles(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__resize_function__CircleSetStamped__circles(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__CircleSetStamped_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_ball_detector_msgs__msg__CircleSetStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "circles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_ball_detector_msgs__msg__CircleSetStamped, circles),  // bytes offset in struct
    NULL,  // default value
    op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__size_function__CircleSetStamped__circles,  // size() function pointer
    op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__get_const_function__CircleSetStamped__circles,  // get_const(index) function pointer
    op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__get_function__CircleSetStamped__circles,  // get(index) function pointer
    op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__fetch_function__CircleSetStamped__circles,  // fetch(index, &value) function pointer
    op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__assign_function__CircleSetStamped__circles,  // assign(index, value) function pointer
    op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__resize_function__CircleSetStamped__circles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__CircleSetStamped_message_members = {
  "op3_ball_detector_msgs__msg",  // message namespace
  "CircleSetStamped",  // message name
  2,  // number of fields
  sizeof(op3_ball_detector_msgs__msg__CircleSetStamped),
  op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__CircleSetStamped_message_member_array,  // message members
  op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__CircleSetStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__CircleSetStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__CircleSetStamped_message_type_support_handle = {
  0,
  &op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__CircleSetStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_op3_ball_detector_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_ball_detector_msgs, msg, CircleSetStamped)() {
  op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__CircleSetStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__CircleSetStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__CircleSetStamped_message_type_support_handle.typesupport_identifier) {
    op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__CircleSetStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &op3_ball_detector_msgs__msg__CircleSetStamped__rosidl_typesupport_introspection_c__CircleSetStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
