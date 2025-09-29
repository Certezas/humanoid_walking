// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotis_controller_msgs:msg/SyncWriteItem.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__SYNC_WRITE_ITEM__STRUCT_H_
#define ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__SYNC_WRITE_ITEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'item_name'
// Member 'joint_name'
#include "rosidl_runtime_c/string.h"
// Member 'value'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SyncWriteItem in the package robotis_controller_msgs.
typedef struct robotis_controller_msgs__msg__SyncWriteItem
{
  rosidl_runtime_c__String item_name;
  rosidl_runtime_c__String__Sequence joint_name;
  rosidl_runtime_c__uint32__Sequence value;
} robotis_controller_msgs__msg__SyncWriteItem;

// Struct for a sequence of robotis_controller_msgs__msg__SyncWriteItem.
typedef struct robotis_controller_msgs__msg__SyncWriteItem__Sequence
{
  robotis_controller_msgs__msg__SyncWriteItem * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotis_controller_msgs__msg__SyncWriteItem__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__SYNC_WRITE_ITEM__STRUCT_H_
