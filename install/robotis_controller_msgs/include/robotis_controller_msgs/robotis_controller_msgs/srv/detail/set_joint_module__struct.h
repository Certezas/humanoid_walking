// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotis_controller_msgs:srv/SetJointModule.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__SET_JOINT_MODULE__STRUCT_H_
#define ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__SET_JOINT_MODULE__STRUCT_H_

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
// Member 'module_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetJointModule in the package robotis_controller_msgs.
typedef struct robotis_controller_msgs__srv__SetJointModule_Request
{
  rosidl_runtime_c__String__Sequence joint_name;
  rosidl_runtime_c__String__Sequence module_name;
} robotis_controller_msgs__srv__SetJointModule_Request;

// Struct for a sequence of robotis_controller_msgs__srv__SetJointModule_Request.
typedef struct robotis_controller_msgs__srv__SetJointModule_Request__Sequence
{
  robotis_controller_msgs__srv__SetJointModule_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotis_controller_msgs__srv__SetJointModule_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetJointModule in the package robotis_controller_msgs.
typedef struct robotis_controller_msgs__srv__SetJointModule_Response
{
  bool result;
} robotis_controller_msgs__srv__SetJointModule_Response;

// Struct for a sequence of robotis_controller_msgs__srv__SetJointModule_Response.
typedef struct robotis_controller_msgs__srv__SetJointModule_Response__Sequence
{
  robotis_controller_msgs__srv__SetJointModule_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotis_controller_msgs__srv__SetJointModule_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__SET_JOINT_MODULE__STRUCT_H_
