// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robotis_controller_msgs:msg/StatusMsg.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__STATUS_MSG__FUNCTIONS_H_
#define ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__STATUS_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robotis_controller_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "robotis_controller_msgs/msg/detail/status_msg__struct.h"

/// Initialize msg/StatusMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotis_controller_msgs__msg__StatusMsg
 * )) before or use
 * robotis_controller_msgs__msg__StatusMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
bool
robotis_controller_msgs__msg__StatusMsg__init(robotis_controller_msgs__msg__StatusMsg * msg);

/// Finalize msg/StatusMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
void
robotis_controller_msgs__msg__StatusMsg__fini(robotis_controller_msgs__msg__StatusMsg * msg);

/// Create msg/StatusMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotis_controller_msgs__msg__StatusMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
robotis_controller_msgs__msg__StatusMsg *
robotis_controller_msgs__msg__StatusMsg__create();

/// Destroy msg/StatusMsg message.
/**
 * It calls
 * robotis_controller_msgs__msg__StatusMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
void
robotis_controller_msgs__msg__StatusMsg__destroy(robotis_controller_msgs__msg__StatusMsg * msg);

/// Check for msg/StatusMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
bool
robotis_controller_msgs__msg__StatusMsg__are_equal(const robotis_controller_msgs__msg__StatusMsg * lhs, const robotis_controller_msgs__msg__StatusMsg * rhs);

/// Copy a msg/StatusMsg message.
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
robotis_controller_msgs__msg__StatusMsg__copy(
  const robotis_controller_msgs__msg__StatusMsg * input,
  robotis_controller_msgs__msg__StatusMsg * output);

/// Initialize array of msg/StatusMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotis_controller_msgs__msg__StatusMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
bool
robotis_controller_msgs__msg__StatusMsg__Sequence__init(robotis_controller_msgs__msg__StatusMsg__Sequence * array, size_t size);

/// Finalize array of msg/StatusMsg messages.
/**
 * It calls
 * robotis_controller_msgs__msg__StatusMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
void
robotis_controller_msgs__msg__StatusMsg__Sequence__fini(robotis_controller_msgs__msg__StatusMsg__Sequence * array);

/// Create array of msg/StatusMsg messages.
/**
 * It allocates the memory for the array and calls
 * robotis_controller_msgs__msg__StatusMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
robotis_controller_msgs__msg__StatusMsg__Sequence *
robotis_controller_msgs__msg__StatusMsg__Sequence__create(size_t size);

/// Destroy array of msg/StatusMsg messages.
/**
 * It calls
 * robotis_controller_msgs__msg__StatusMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
void
robotis_controller_msgs__msg__StatusMsg__Sequence__destroy(robotis_controller_msgs__msg__StatusMsg__Sequence * array);

/// Check for msg/StatusMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
bool
robotis_controller_msgs__msg__StatusMsg__Sequence__are_equal(const robotis_controller_msgs__msg__StatusMsg__Sequence * lhs, const robotis_controller_msgs__msg__StatusMsg__Sequence * rhs);

/// Copy an array of msg/StatusMsg messages.
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
robotis_controller_msgs__msg__StatusMsg__Sequence__copy(
  const robotis_controller_msgs__msg__StatusMsg__Sequence * input,
  robotis_controller_msgs__msg__StatusMsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIS_CONTROLLER_MSGS__MSG__DETAIL__STATUS_MSG__FUNCTIONS_H_
