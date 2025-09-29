// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotis_controller_msgs:msg/WriteControlTable.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__WRITE_CONTROL_TABLE__STRUCT_H_
#define ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__WRITE_CONTROL_TABLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_name'
// Member 'start_item_name'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/WriteControlTable in the package robotis_controller_msgs.
typedef struct robotis_controller_msgs__msg__WriteControlTable
{
  rosidl_runtime_c__String joint_name;
  rosidl_runtime_c__String start_item_name;
  uint16_t data_length;
  rosidl_runtime_c__uint8__Sequence data;
} robotis_controller_msgs__msg__WriteControlTable;

// Struct for a sequence of robotis_controller_msgs__msg__WriteControlTable.
typedef struct robotis_controller_msgs__msg__WriteControlTable__Sequence
{
  robotis_controller_msgs__msg__WriteControlTable * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotis_controller_msgs__msg__WriteControlTable__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__WRITE_CONTROL_TABLE__STRUCT_H_
