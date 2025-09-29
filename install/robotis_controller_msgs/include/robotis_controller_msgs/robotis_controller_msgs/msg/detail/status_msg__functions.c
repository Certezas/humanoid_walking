// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robotis_controller_msgs:msg/StatusMsg.idl
// generated code does not contain a copyright notice
#include "robotis_controller_msgs/msg/detail/status_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `module_name`
// Member `status_msg`
#include "rosidl_runtime_c/string_functions.h"

bool
robotis_controller_msgs__msg__StatusMsg__init(robotis_controller_msgs__msg__StatusMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    robotis_controller_msgs__msg__StatusMsg__fini(msg);
    return false;
  }
  // type
  // module_name
  if (!rosidl_runtime_c__String__init(&msg->module_name)) {
    robotis_controller_msgs__msg__StatusMsg__fini(msg);
    return false;
  }
  // status_msg
  if (!rosidl_runtime_c__String__init(&msg->status_msg)) {
    robotis_controller_msgs__msg__StatusMsg__fini(msg);
    return false;
  }
  return true;
}

void
robotis_controller_msgs__msg__StatusMsg__fini(robotis_controller_msgs__msg__StatusMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // type
  // module_name
  rosidl_runtime_c__String__fini(&msg->module_name);
  // status_msg
  rosidl_runtime_c__String__fini(&msg->status_msg);
}

bool
robotis_controller_msgs__msg__StatusMsg__are_equal(const robotis_controller_msgs__msg__StatusMsg * lhs, const robotis_controller_msgs__msg__StatusMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // module_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->module_name), &(rhs->module_name)))
  {
    return false;
  }
  // status_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status_msg), &(rhs->status_msg)))
  {
    return false;
  }
  return true;
}

bool
robotis_controller_msgs__msg__StatusMsg__copy(
  const robotis_controller_msgs__msg__StatusMsg * input,
  robotis_controller_msgs__msg__StatusMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // type
  output->type = input->type;
  // module_name
  if (!rosidl_runtime_c__String__copy(
      &(input->module_name), &(output->module_name)))
  {
    return false;
  }
  // status_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->status_msg), &(output->status_msg)))
  {
    return false;
  }
  return true;
}

robotis_controller_msgs__msg__StatusMsg *
robotis_controller_msgs__msg__StatusMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotis_controller_msgs__msg__StatusMsg * msg = (robotis_controller_msgs__msg__StatusMsg *)allocator.allocate(sizeof(robotis_controller_msgs__msg__StatusMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotis_controller_msgs__msg__StatusMsg));
  bool success = robotis_controller_msgs__msg__StatusMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotis_controller_msgs__msg__StatusMsg__destroy(robotis_controller_msgs__msg__StatusMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotis_controller_msgs__msg__StatusMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotis_controller_msgs__msg__StatusMsg__Sequence__init(robotis_controller_msgs__msg__StatusMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotis_controller_msgs__msg__StatusMsg * data = NULL;

  if (size) {
    data = (robotis_controller_msgs__msg__StatusMsg *)allocator.zero_allocate(size, sizeof(robotis_controller_msgs__msg__StatusMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotis_controller_msgs__msg__StatusMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotis_controller_msgs__msg__StatusMsg__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robotis_controller_msgs__msg__StatusMsg__Sequence__fini(robotis_controller_msgs__msg__StatusMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robotis_controller_msgs__msg__StatusMsg__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robotis_controller_msgs__msg__StatusMsg__Sequence *
robotis_controller_msgs__msg__StatusMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotis_controller_msgs__msg__StatusMsg__Sequence * array = (robotis_controller_msgs__msg__StatusMsg__Sequence *)allocator.allocate(sizeof(robotis_controller_msgs__msg__StatusMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotis_controller_msgs__msg__StatusMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotis_controller_msgs__msg__StatusMsg__Sequence__destroy(robotis_controller_msgs__msg__StatusMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotis_controller_msgs__msg__StatusMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotis_controller_msgs__msg__StatusMsg__Sequence__are_equal(const robotis_controller_msgs__msg__StatusMsg__Sequence * lhs, const robotis_controller_msgs__msg__StatusMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotis_controller_msgs__msg__StatusMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotis_controller_msgs__msg__StatusMsg__Sequence__copy(
  const robotis_controller_msgs__msg__StatusMsg__Sequence * input,
  robotis_controller_msgs__msg__StatusMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotis_controller_msgs__msg__StatusMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotis_controller_msgs__msg__StatusMsg * data =
      (robotis_controller_msgs__msg__StatusMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotis_controller_msgs__msg__StatusMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotis_controller_msgs__msg__StatusMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotis_controller_msgs__msg__StatusMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
