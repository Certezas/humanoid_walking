// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from op3_camera_setting_tool_msgs:msg/V4lParameters.idl
// generated code does not contain a copyright notice
#include "op3_camera_setting_tool_msgs/msg/detail/v4l_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `video_parameter`
#include "op3_camera_setting_tool_msgs/msg/detail/v4l_parameter__functions.h"

bool
op3_camera_setting_tool_msgs__msg__V4lParameters__init(op3_camera_setting_tool_msgs__msg__V4lParameters * msg)
{
  if (!msg) {
    return false;
  }
  // video_parameter
  if (!op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence__init(&msg->video_parameter, 0)) {
    op3_camera_setting_tool_msgs__msg__V4lParameters__fini(msg);
    return false;
  }
  return true;
}

void
op3_camera_setting_tool_msgs__msg__V4lParameters__fini(op3_camera_setting_tool_msgs__msg__V4lParameters * msg)
{
  if (!msg) {
    return;
  }
  // video_parameter
  op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence__fini(&msg->video_parameter);
}

bool
op3_camera_setting_tool_msgs__msg__V4lParameters__are_equal(const op3_camera_setting_tool_msgs__msg__V4lParameters * lhs, const op3_camera_setting_tool_msgs__msg__V4lParameters * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // video_parameter
  if (!op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence__are_equal(
      &(lhs->video_parameter), &(rhs->video_parameter)))
  {
    return false;
  }
  return true;
}

bool
op3_camera_setting_tool_msgs__msg__V4lParameters__copy(
  const op3_camera_setting_tool_msgs__msg__V4lParameters * input,
  op3_camera_setting_tool_msgs__msg__V4lParameters * output)
{
  if (!input || !output) {
    return false;
  }
  // video_parameter
  if (!op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence__copy(
      &(input->video_parameter), &(output->video_parameter)))
  {
    return false;
  }
  return true;
}

op3_camera_setting_tool_msgs__msg__V4lParameters *
op3_camera_setting_tool_msgs__msg__V4lParameters__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_camera_setting_tool_msgs__msg__V4lParameters * msg = (op3_camera_setting_tool_msgs__msg__V4lParameters *)allocator.allocate(sizeof(op3_camera_setting_tool_msgs__msg__V4lParameters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(op3_camera_setting_tool_msgs__msg__V4lParameters));
  bool success = op3_camera_setting_tool_msgs__msg__V4lParameters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
op3_camera_setting_tool_msgs__msg__V4lParameters__destroy(op3_camera_setting_tool_msgs__msg__V4lParameters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    op3_camera_setting_tool_msgs__msg__V4lParameters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
op3_camera_setting_tool_msgs__msg__V4lParameters__Sequence__init(op3_camera_setting_tool_msgs__msg__V4lParameters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_camera_setting_tool_msgs__msg__V4lParameters * data = NULL;

  if (size) {
    data = (op3_camera_setting_tool_msgs__msg__V4lParameters *)allocator.zero_allocate(size, sizeof(op3_camera_setting_tool_msgs__msg__V4lParameters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = op3_camera_setting_tool_msgs__msg__V4lParameters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        op3_camera_setting_tool_msgs__msg__V4lParameters__fini(&data[i - 1]);
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
op3_camera_setting_tool_msgs__msg__V4lParameters__Sequence__fini(op3_camera_setting_tool_msgs__msg__V4lParameters__Sequence * array)
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
      op3_camera_setting_tool_msgs__msg__V4lParameters__fini(&array->data[i]);
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

op3_camera_setting_tool_msgs__msg__V4lParameters__Sequence *
op3_camera_setting_tool_msgs__msg__V4lParameters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_camera_setting_tool_msgs__msg__V4lParameters__Sequence * array = (op3_camera_setting_tool_msgs__msg__V4lParameters__Sequence *)allocator.allocate(sizeof(op3_camera_setting_tool_msgs__msg__V4lParameters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = op3_camera_setting_tool_msgs__msg__V4lParameters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
op3_camera_setting_tool_msgs__msg__V4lParameters__Sequence__destroy(op3_camera_setting_tool_msgs__msg__V4lParameters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    op3_camera_setting_tool_msgs__msg__V4lParameters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
op3_camera_setting_tool_msgs__msg__V4lParameters__Sequence__are_equal(const op3_camera_setting_tool_msgs__msg__V4lParameters__Sequence * lhs, const op3_camera_setting_tool_msgs__msg__V4lParameters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!op3_camera_setting_tool_msgs__msg__V4lParameters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
op3_camera_setting_tool_msgs__msg__V4lParameters__Sequence__copy(
  const op3_camera_setting_tool_msgs__msg__V4lParameters__Sequence * input,
  op3_camera_setting_tool_msgs__msg__V4lParameters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(op3_camera_setting_tool_msgs__msg__V4lParameters);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    op3_camera_setting_tool_msgs__msg__V4lParameters * data =
      (op3_camera_setting_tool_msgs__msg__V4lParameters *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!op3_camera_setting_tool_msgs__msg__V4lParameters__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          op3_camera_setting_tool_msgs__msg__V4lParameters__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!op3_camera_setting_tool_msgs__msg__V4lParameters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
