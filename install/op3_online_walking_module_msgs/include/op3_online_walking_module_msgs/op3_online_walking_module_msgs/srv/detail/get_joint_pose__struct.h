// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_online_walking_module_msgs:srv/GetJointPose.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_JOINT_POSE__STRUCT_H_
#define OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_JOINT_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetJointPose in the package op3_online_walking_module_msgs.
typedef struct op3_online_walking_module_msgs__srv__GetJointPose_Request
{
  uint8_t structure_needs_at_least_one_member;
} op3_online_walking_module_msgs__srv__GetJointPose_Request;

// Struct for a sequence of op3_online_walking_module_msgs__srv__GetJointPose_Request.
typedef struct op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence
{
  op3_online_walking_module_msgs__srv__GetJointPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "op3_online_walking_module_msgs/msg/detail/joint_pose__struct.h"

/// Struct defined in srv/GetJointPose in the package op3_online_walking_module_msgs.
typedef struct op3_online_walking_module_msgs__srv__GetJointPose_Response
{
  op3_online_walking_module_msgs__msg__JointPose pose;
} op3_online_walking_module_msgs__srv__GetJointPose_Response;

// Struct for a sequence of op3_online_walking_module_msgs__srv__GetJointPose_Response.
typedef struct op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence
{
  op3_online_walking_module_msgs__srv__GetJointPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_JOINT_POSE__STRUCT_H_
