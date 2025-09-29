// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_walking_module_msgs:srv/SetWalkingParam.idl
// generated code does not contain a copyright notice

#ifndef OP3_WALKING_MODULE_MSGS__SRV__DETAIL__SET_WALKING_PARAM__STRUCT_H_
#define OP3_WALKING_MODULE_MSGS__SRV__DETAIL__SET_WALKING_PARAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'parameters'
#include "op3_walking_module_msgs/msg/detail/walking_param__struct.h"

/// Struct defined in srv/SetWalkingParam in the package op3_walking_module_msgs.
typedef struct op3_walking_module_msgs__srv__SetWalkingParam_Request
{
  op3_walking_module_msgs__msg__WalkingParam parameters;
} op3_walking_module_msgs__srv__SetWalkingParam_Request;

// Struct for a sequence of op3_walking_module_msgs__srv__SetWalkingParam_Request.
typedef struct op3_walking_module_msgs__srv__SetWalkingParam_Request__Sequence
{
  op3_walking_module_msgs__srv__SetWalkingParam_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_walking_module_msgs__srv__SetWalkingParam_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetWalkingParam in the package op3_walking_module_msgs.
typedef struct op3_walking_module_msgs__srv__SetWalkingParam_Response
{
  bool result;
} op3_walking_module_msgs__srv__SetWalkingParam_Response;

// Struct for a sequence of op3_walking_module_msgs__srv__SetWalkingParam_Response.
typedef struct op3_walking_module_msgs__srv__SetWalkingParam_Response__Sequence
{
  op3_walking_module_msgs__srv__SetWalkingParam_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_walking_module_msgs__srv__SetWalkingParam_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_WALKING_MODULE_MSGS__SRV__DETAIL__SET_WALKING_PARAM__STRUCT_H_
