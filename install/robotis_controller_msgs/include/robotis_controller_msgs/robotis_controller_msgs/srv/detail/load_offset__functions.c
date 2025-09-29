// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robotis_controller_msgs:srv/LoadOffset.idl
// generated code does not contain a copyright notice
#include "robotis_controller_msgs/srv/detail/load_offset__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `file_path`
#include "rosidl_runtime_c/string_functions.h"

bool
robotis_controller_msgs__srv__LoadOffset_Request__init(robotis_controller_msgs__srv__LoadOffset_Request * msg)
{
  if (!msg) {
    return false;
  }
  // file_path
  if (!rosidl_runtime_c__String__init(&msg->file_path)) {
    robotis_controller_msgs__srv__LoadOffset_Request__fini(msg);
    return false;
  }
  return true;
}

void
robotis_controller_msgs__srv__LoadOffset_Request__fini(robotis_controller_msgs__srv__LoadOffset_Request * msg)
{
  if (!msg) {
    return;
  }
  // file_path
  rosidl_runtime_c__String__fini(&msg->file_path);
}

bool
robotis_controller_msgs__srv__LoadOffset_Request__are_equal(const robotis_controller_msgs__srv__LoadOffset_Request * lhs, const robotis_controller_msgs__srv__LoadOffset_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // file_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->file_path), &(rhs->file_path)))
  {
    return false;
  }
  return true;
}

bool
robotis_controller_msgs__srv__LoadOffset_Request__copy(
  const robotis_controller_msgs__srv__LoadOffset_Request * input,
  robotis_controller_msgs__srv__LoadOffset_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // file_path
  if (!rosidl_runtime_c__String__copy(
      &(input->file_path), &(output->file_path)))
  {
    return false;
  }
  return true;
}

robotis_controller_msgs__srv__LoadOffset_Request *
robotis_controller_msgs__srv__LoadOffset_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotis_controller_msgs__srv__LoadOffset_Request * msg = (robotis_controller_msgs__srv__LoadOffset_Request *)allocator.allocate(sizeof(robotis_controller_msgs__srv__LoadOffset_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotis_controller_msgs__srv__LoadOffset_Request));
  bool success = robotis_controller_msgs__srv__LoadOffset_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotis_controller_msgs__srv__LoadOffset_Request__destroy(robotis_controller_msgs__srv__LoadOffset_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotis_controller_msgs__srv__LoadOffset_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotis_controller_msgs__srv__LoadOffset_Request__Sequence__init(robotis_controller_msgs__srv__LoadOffset_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotis_controller_msgs__srv__LoadOffset_Request * data = NULL;

  if (size) {
    data = (robotis_controller_msgs__srv__LoadOffset_Request *)allocator.zero_allocate(size, sizeof(robotis_controller_msgs__srv__LoadOffset_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotis_controller_msgs__srv__LoadOffset_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotis_controller_msgs__srv__LoadOffset_Request__fini(&data[i - 1]);
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
robotis_controller_msgs__srv__LoadOffset_Request__Sequence__fini(robotis_controller_msgs__srv__LoadOffset_Request__Sequence * array)
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
      robotis_controller_msgs__srv__LoadOffset_Request__fini(&array->data[i]);
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

robotis_controller_msgs__srv__LoadOffset_Request__Sequence *
robotis_controller_msgs__srv__LoadOffset_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotis_controller_msgs__srv__LoadOffset_Request__Sequence * array = (robotis_controller_msgs__srv__LoadOffset_Request__Sequence *)allocator.allocate(sizeof(robotis_controller_msgs__srv__LoadOffset_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotis_controller_msgs__srv__LoadOffset_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotis_controller_msgs__srv__LoadOffset_Request__Sequence__destroy(robotis_controller_msgs__srv__LoadOffset_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotis_controller_msgs__srv__LoadOffset_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotis_controller_msgs__srv__LoadOffset_Request__Sequence__are_equal(const robotis_controller_msgs__srv__LoadOffset_Request__Sequence * lhs, const robotis_controller_msgs__srv__LoadOffset_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotis_controller_msgs__srv__LoadOffset_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotis_controller_msgs__srv__LoadOffset_Request__Sequence__copy(
  const robotis_controller_msgs__srv__LoadOffset_Request__Sequence * input,
  robotis_controller_msgs__srv__LoadOffset_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotis_controller_msgs__srv__LoadOffset_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotis_controller_msgs__srv__LoadOffset_Request * data =
      (robotis_controller_msgs__srv__LoadOffset_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotis_controller_msgs__srv__LoadOffset_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotis_controller_msgs__srv__LoadOffset_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotis_controller_msgs__srv__LoadOffset_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
robotis_controller_msgs__srv__LoadOffset_Response__init(robotis_controller_msgs__srv__LoadOffset_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
robotis_controller_msgs__srv__LoadOffset_Response__fini(robotis_controller_msgs__srv__LoadOffset_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
robotis_controller_msgs__srv__LoadOffset_Response__are_equal(const robotis_controller_msgs__srv__LoadOffset_Response * lhs, const robotis_controller_msgs__srv__LoadOffset_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
robotis_controller_msgs__srv__LoadOffset_Response__copy(
  const robotis_controller_msgs__srv__LoadOffset_Response * input,
  robotis_controller_msgs__srv__LoadOffset_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

robotis_controller_msgs__srv__LoadOffset_Response *
robotis_controller_msgs__srv__LoadOffset_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotis_controller_msgs__srv__LoadOffset_Response * msg = (robotis_controller_msgs__srv__LoadOffset_Response *)allocator.allocate(sizeof(robotis_controller_msgs__srv__LoadOffset_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotis_controller_msgs__srv__LoadOffset_Response));
  bool success = robotis_controller_msgs__srv__LoadOffset_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotis_controller_msgs__srv__LoadOffset_Response__destroy(robotis_controller_msgs__srv__LoadOffset_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotis_controller_msgs__srv__LoadOffset_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotis_controller_msgs__srv__LoadOffset_Response__Sequence__init(robotis_controller_msgs__srv__LoadOffset_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotis_controller_msgs__srv__LoadOffset_Response * data = NULL;

  if (size) {
    data = (robotis_controller_msgs__srv__LoadOffset_Response *)allocator.zero_allocate(size, sizeof(robotis_controller_msgs__srv__LoadOffset_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotis_controller_msgs__srv__LoadOffset_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotis_controller_msgs__srv__LoadOffset_Response__fini(&data[i - 1]);
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
robotis_controller_msgs__srv__LoadOffset_Response__Sequence__fini(robotis_controller_msgs__srv__LoadOffset_Response__Sequence * array)
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
      robotis_controller_msgs__srv__LoadOffset_Response__fini(&array->data[i]);
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

robotis_controller_msgs__srv__LoadOffset_Response__Sequence *
robotis_controller_msgs__srv__LoadOffset_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotis_controller_msgs__srv__LoadOffset_Response__Sequence * array = (robotis_controller_msgs__srv__LoadOffset_Response__Sequence *)allocator.allocate(sizeof(robotis_controller_msgs__srv__LoadOffset_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotis_controller_msgs__srv__LoadOffset_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotis_controller_msgs__srv__LoadOffset_Response__Sequence__destroy(robotis_controller_msgs__srv__LoadOffset_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotis_controller_msgs__srv__LoadOffset_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotis_controller_msgs__srv__LoadOffset_Response__Sequence__are_equal(const robotis_controller_msgs__srv__LoadOffset_Response__Sequence * lhs, const robotis_controller_msgs__srv__LoadOffset_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotis_controller_msgs__srv__LoadOffset_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotis_controller_msgs__srv__LoadOffset_Response__Sequence__copy(
  const robotis_controller_msgs__srv__LoadOffset_Response__Sequence * input,
  robotis_controller_msgs__srv__LoadOffset_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotis_controller_msgs__srv__LoadOffset_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotis_controller_msgs__srv__LoadOffset_Response * data =
      (robotis_controller_msgs__srv__LoadOffset_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotis_controller_msgs__srv__LoadOffset_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotis_controller_msgs__srv__LoadOffset_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotis_controller_msgs__srv__LoadOffset_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
