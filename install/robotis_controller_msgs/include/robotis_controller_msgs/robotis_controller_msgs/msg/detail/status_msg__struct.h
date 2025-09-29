// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotis_controller_msgs:msg/StatusMsg.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__STATUS_MSG__STRUCT_H_
#define ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__STATUS_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_UNKNOWN'.
enum
{
  robotis_controller_msgs__msg__StatusMsg__STATUS_UNKNOWN = 0
};

/// Constant 'STATUS_INFO'.
enum
{
  robotis_controller_msgs__msg__StatusMsg__STATUS_INFO = 1
};

/// Constant 'STATUS_WARN'.
enum
{
  robotis_controller_msgs__msg__StatusMsg__STATUS_WARN = 2
};

/// Constant 'STATUS_ERROR'.
enum
{
  robotis_controller_msgs__msg__StatusMsg__STATUS_ERROR = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'module_name'
// Member 'status_msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/StatusMsg in the package robotis_controller_msgs.
/**
  * Status Constants
 */
typedef struct robotis_controller_msgs__msg__StatusMsg
{
  std_msgs__msg__Header header;
  uint8_t type;
  rosidl_runtime_c__String module_name;
  rosidl_runtime_c__String status_msg;
} robotis_controller_msgs__msg__StatusMsg;

// Struct for a sequence of robotis_controller_msgs__msg__StatusMsg.
typedef struct robotis_controller_msgs__msg__StatusMsg__Sequence
{
  robotis_controller_msgs__msg__StatusMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotis_controller_msgs__msg__StatusMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__STATUS_MSG__STRUCT_H_
