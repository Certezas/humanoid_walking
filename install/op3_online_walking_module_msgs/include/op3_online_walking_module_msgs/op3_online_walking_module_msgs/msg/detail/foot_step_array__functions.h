// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from op3_online_walking_module_msgs:msg/FootStepArray.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_ARRAY__FUNCTIONS_H_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "op3_online_walking_module_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "op3_online_walking_module_msgs/msg/detail/foot_step_array__struct.h"

/// Initialize msg/FootStepArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * op3_online_walking_module_msgs__msg__FootStepArray
 * )) before or use
 * op3_online_walking_module_msgs__msg__FootStepArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
bool
op3_online_walking_module_msgs__msg__FootStepArray__init(op3_online_walking_module_msgs__msg__FootStepArray * msg);

/// Finalize msg/FootStepArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
void
op3_online_walking_module_msgs__msg__FootStepArray__fini(op3_online_walking_module_msgs__msg__FootStepArray * msg);

/// Create msg/FootStepArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * op3_online_walking_module_msgs__msg__FootStepArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
op3_online_walking_module_msgs__msg__FootStepArray *
op3_online_walking_module_msgs__msg__FootStepArray__create();

/// Destroy msg/FootStepArray message.
/**
 * It calls
 * op3_online_walking_module_msgs__msg__FootStepArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
void
op3_online_walking_module_msgs__msg__FootStepArray__destroy(op3_online_walking_module_msgs__msg__FootStepArray * msg);

/// Check for msg/FootStepArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
bool
op3_online_walking_module_msgs__msg__FootStepArray__are_equal(const op3_online_walking_module_msgs__msg__FootStepArray * lhs, const op3_online_walking_module_msgs__msg__FootStepArray * rhs);

/// Copy a msg/FootStepArray message.
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
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
bool
op3_online_walking_module_msgs__msg__FootStepArray__copy(
  const op3_online_walking_module_msgs__msg__FootStepArray * input,
  op3_online_walking_module_msgs__msg__FootStepArray * output);

/// Initialize array of msg/FootStepArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * op3_online_walking_module_msgs__msg__FootStepArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
bool
op3_online_walking_module_msgs__msg__FootStepArray__Sequence__init(op3_online_walking_module_msgs__msg__FootStepArray__Sequence * array, size_t size);

/// Finalize array of msg/FootStepArray messages.
/**
 * It calls
 * op3_online_walking_module_msgs__msg__FootStepArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
void
op3_online_walking_module_msgs__msg__FootStepArray__Sequence__fini(op3_online_walking_module_msgs__msg__FootStepArray__Sequence * array);

/// Create array of msg/FootStepArray messages.
/**
 * It allocates the memory for the array and calls
 * op3_online_walking_module_msgs__msg__FootStepArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
op3_online_walking_module_msgs__msg__FootStepArray__Sequence *
op3_online_walking_module_msgs__msg__FootStepArray__Sequence__create(size_t size);

/// Destroy array of msg/FootStepArray messages.
/**
 * It calls
 * op3_online_walking_module_msgs__msg__FootStepArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
void
op3_online_walking_module_msgs__msg__FootStepArray__Sequence__destroy(op3_online_walking_module_msgs__msg__FootStepArray__Sequence * array);

/// Check for msg/FootStepArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
bool
op3_online_walking_module_msgs__msg__FootStepArray__Sequence__are_equal(const op3_online_walking_module_msgs__msg__FootStepArray__Sequence * lhs, const op3_online_walking_module_msgs__msg__FootStepArray__Sequence * rhs);

/// Copy an array of msg/FootStepArray messages.
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
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
bool
op3_online_walking_module_msgs__msg__FootStepArray__Sequence__copy(
  const op3_online_walking_module_msgs__msg__FootStepArray__Sequence * input,
  op3_online_walking_module_msgs__msg__FootStepArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_ARRAY__FUNCTIONS_H_
