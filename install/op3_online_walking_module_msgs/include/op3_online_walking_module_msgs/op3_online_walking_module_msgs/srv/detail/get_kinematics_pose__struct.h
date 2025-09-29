// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_online_walking_module_msgs:srv/GetKinematicsPose.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_KINEMATICS_POSE__STRUCT_H_
#define OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_KINEMATICS_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetKinematicsPose in the package op3_online_walking_module_msgs.
typedef struct op3_online_walking_module_msgs__srv__GetKinematicsPose_Request
{
  rosidl_runtime_c__String name;
} op3_online_walking_module_msgs__srv__GetKinematicsPose_Request;

// Struct for a sequence of op3_online_walking_module_msgs__srv__GetKinematicsPose_Request.
typedef struct op3_online_walking_module_msgs__srv__GetKinematicsPose_Request__Sequence
{
  op3_online_walking_module_msgs__srv__GetKinematicsPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_online_walking_module_msgs__srv__GetKinematicsPose_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "op3_online_walking_module_msgs/msg/detail/kinematics_pose__struct.h"

/// Struct defined in srv/GetKinematicsPose in the package op3_online_walking_module_msgs.
typedef struct op3_online_walking_module_msgs__srv__GetKinematicsPose_Response
{
  op3_online_walking_module_msgs__msg__KinematicsPose pose;
} op3_online_walking_module_msgs__srv__GetKinematicsPose_Response;

// Struct for a sequence of op3_online_walking_module_msgs__srv__GetKinematicsPose_Response.
typedef struct op3_online_walking_module_msgs__srv__GetKinematicsPose_Response__Sequence
{
  op3_online_walking_module_msgs__srv__GetKinematicsPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_online_walking_module_msgs__srv__GetKinematicsPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_KINEMATICS_POSE__STRUCT_H_
