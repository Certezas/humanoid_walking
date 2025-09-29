// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from op3_camera_setting_tool_msgs:msg/V4lParameter.idl
// generated code does not contain a copyright notice
#include "op3_camera_setting_tool_msgs/msg/detail/v4l_parameter__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
op3_camera_setting_tool_msgs__msg__V4lParameter__init(op3_camera_setting_tool_msgs__msg__V4lParameter * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    op3_camera_setting_tool_msgs__msg__V4lParameter__fini(msg);
    return false;
  }
  // value
  return true;
}

void
op3_camera_setting_tool_msgs__msg__V4lParameter__fini(op3_camera_setting_tool_msgs__msg__V4lParameter * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // value
}

bool
op3_camera_setting_tool_msgs__msg__V4lParameter__are_equal(const op3_camera_setting_tool_msgs__msg__V4lParameter * lhs, const op3_camera_setting_tool_msgs__msg__V4lParameter * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
op3_camera_setting_tool_msgs__msg__V4lParameter__copy(
  const op3_camera_setting_tool_msgs__msg__V4lParameter * input,
  op3_camera_setting_tool_msgs__msg__V4lParameter * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

op3_camera_setting_tool_msgs__msg__V4lParameter *
op3_camera_setting_tool_msgs__msg__V4lParameter__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_camera_setting_tool_msgs__msg__V4lParameter * msg = (op3_camera_setting_tool_msgs__msg__V4lParameter *)allocator.allocate(sizeof(op3_camera_setting_tool_msgs__msg__V4lParameter), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(op3_camera_setting_tool_msgs__msg__V4lParameter));
  bool success = op3_camera_setting_tool_msgs__msg__V4lParameter__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
op3_camera_setting_tool_msgs__msg__V4lParameter__destroy(op3_camera_setting_tool_msgs__msg__V4lParameter * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    op3_camera_setting_tool_msgs__msg__V4lParameter__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence__init(op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_camera_setting_tool_msgs__msg__V4lParameter * data = NULL;

  if (size) {
    data = (op3_camera_setting_tool_msgs__msg__V4lParameter *)allocator.zero_allocate(size, sizeof(op3_camera_setting_tool_msgs__msg__V4lParameter), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = op3_camera_setting_tool_msgs__msg__V4lParameter__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        op3_camera_setting_tool_msgs__msg__V4lParameter__fini(&data[i - 1]);
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
op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence__fini(op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence * array)
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
      op3_camera_setting_tool_msgs__msg__V4lParameter__fini(&array->data[i]);
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

op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence *
op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence * array = (op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence *)allocator.allocate(sizeof(op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence__destroy(op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence__are_equal(const op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence * lhs, const op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!op3_camera_setting_tool_msgs__msg__V4lParameter__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence__copy(
  const op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence * input,
  op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(op3_camera_setting_tool_msgs__msg__V4lParameter);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    op3_camera_setting_tool_msgs__msg__V4lParameter * data =
      (op3_camera_setting_tool_msgs__msg__V4lParameter *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!op3_camera_setting_tool_msgs__msg__V4lParameter__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          op3_camera_setting_tool_msgs__msg__V4lParameter__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!op3_camera_setting_tool_msgs__msg__V4lParameter__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
