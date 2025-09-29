// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robotis_controller_msgs:msg/JointCtrlModule.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__JOINT_CTRL_MODULE__FUNCTIONS_H_
#define ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__JOINT_CTRL_MODULE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robotis_controller_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "robotis_controller_msgs/msg/detail/joint_ctrl_module__struct.h"

/// Initialize msg/JointCtrlModule message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotis_controller_msgs__msg__JointCtrlModule
 * )) before or use
 * robotis_controller_msgs__msg__JointCtrlModule__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
bool
robotis_controller_msgs__msg__JointCtrlModule__init(robotis_controller_msgs__msg__JointCtrlModule * msg);

/// Finalize msg/JointCtrlModule message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
void
robotis_controller_msgs__msg__JointCtrlModule__fini(robotis_controller_msgs__msg__JointCtrlModule * msg);

/// Create msg/JointCtrlModule message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotis_controller_msgs__msg__JointCtrlModule__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
robotis_controller_msgs__msg__JointCtrlModule *
robotis_controller_msgs__msg__JointCtrlModule__create();

/// Destroy msg/JointCtrlModule message.
/**
 * It calls
 * robotis_controller_msgs__msg__JointCtrlModule__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
void
robotis_controller_msgs__msg__JointCtrlModule__destroy(robotis_controller_msgs__msg__JointCtrlModule * msg);

/// Check for msg/JointCtrlModule message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
bool
robotis_controller_msgs__msg__JointCtrlModule__are_equal(const robotis_controller_msgs__msg__JointCtrlModule * lhs, const robotis_controller_msgs__msg__JointCtrlModule * rhs);

/// Copy a msg/JointCtrlModule message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
bool
robotis_controller_msgs__msg__JointCtrlModule__copy(
  const robotis_controller_msgs__msg__JointCtrlModule * input,
  robotis_controller_msgs__msg__JointCtrlModule * output);

/// Initialize array of msg/JointCtrlModule messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotis_controller_msgs__msg__JointCtrlModule__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
bool
robotis_controller_msgs__msg__JointCtrlModule__Sequence__init(robotis_controller_msgs__msg__JointCtrlModule__Sequence * array, size_t size);

/// Finalize array of msg/JointCtrlModule messages.
/**
 * It calls
 * robotis_controller_msgs__msg__JointCtrlModule__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
void
robotis_controller_msgs__msg__JointCtrlModule__Sequence__fini(robotis_controller_msgs__msg__JointCtrlModule__Sequence * array);

/// Create array of msg/JointCtrlModule messages.
/**
 * It allocates the memory for the array and calls
 * robotis_controller_msgs__msg__JointCtrlModule__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
robotis_controller_msgs__msg__JointCtrlModule__Sequence *
robotis_controller_msgs__msg__JointCtrlModule__Sequence__create(size_t size);

/// Destroy array of msg/JointCtrlModule messages.
/**
 * It calls
 * robotis_controller_msgs__msg__JointCtrlModule__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
void
robotis_controller_msgs__msg__JointCtrlModule__Sequence__destroy(robotis_controller_msgs__msg__JointCtrlModule__Sequence * array);

/// Check for msg/JointCtrlModule message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
bool
robotis_controller_msgs__msg__JointCtrlModule__Sequence__are_equal(const robotis_controller_msgs__msg__JointCtrlModule__Sequence * lhs, const robotis_controller_msgs__msg__JointCtrlModule__Sequence * rhs);

/// Copy an array of msg/JointCtrlModule messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
bool
robotis_controller_msgs__msg__JointCtrlModule__Sequence__copy(
  const robotis_controller_msgs__msg__JointCtrlModule__Sequence * input,
  robotis_controller_msgs__msg__JointCtrlModule__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__JOINT_CTRL_MODULE__FUNCTIONS_H_
