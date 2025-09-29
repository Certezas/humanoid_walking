// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotis_controller_msgs:srv/SetModule.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__SET_MODULE__STRUCT_H_
#define ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__SET_MODULE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'module_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetModule in the package robotis_controller_msgs.
typedef struct robotis_controller_msgs__srv__SetModule_Request
{
  rosidl_runtime_c__String module_name;
} robotis_controller_msgs__srv__SetModule_Request;

// Struct for a sequence of robotis_controller_msgs__srv__SetModule_Request.
typedef struct robotis_controller_msgs__srv__SetModule_Request__Sequence
{
  robotis_controller_msgs__srv__SetModule_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotis_controller_msgs__srv__SetModule_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetModule in the package robotis_controller_msgs.
typedef struct robotis_controller_msgs__srv__SetModule_Response
{
  bool result;
} robotis_controller_msgs__srv__SetModule_Response;

// Struct for a sequence of robotis_controller_msgs__srv__SetModule_Response.
typedef struct robotis_controller_msgs__srv__SetModule_Response__Sequence
{
  robotis_controller_msgs__srv__SetModule_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotis_controller_msgs__srv__SetModule_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__SET_MODULE__STRUCT_H_
