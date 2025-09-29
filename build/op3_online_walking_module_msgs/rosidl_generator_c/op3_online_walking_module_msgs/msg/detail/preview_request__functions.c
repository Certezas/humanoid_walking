// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from op3_online_walking_module_msgs:msg/PreviewRequest.idl
// generated code does not contain a copyright notice
#include "op3_online_walking_module_msgs/msg/detail/preview_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
op3_online_walking_module_msgs__msg__PreviewRequest__init(op3_online_walking_module_msgs__msg__PreviewRequest * msg)
{
  if (!msg) {
    return false;
  }
  // control_cycle
  // lipm_height
  return true;
}

void
op3_online_walking_module_msgs__msg__PreviewRequest__fini(op3_online_walking_module_msgs__msg__PreviewRequest * msg)
{
  if (!msg) {
    return;
  }
  // control_cycle
  // lipm_height
}

bool
op3_online_walking_module_msgs__msg__PreviewRequest__are_equal(const op3_online_walking_module_msgs__msg__PreviewRequest * lhs, const op3_online_walking_module_msgs__msg__PreviewRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // control_cycle
  if (lhs->control_cycle != rhs->control_cycle) {
    return false;
  }
  // lipm_height
  if (lhs->lipm_height != rhs->lipm_height) {
    return false;
  }
  return true;
}

bool
op3_online_walking_module_msgs__msg__PreviewRequest__copy(
  const op3_online_walking_module_msgs__msg__PreviewRequest * input,
  op3_online_walking_module_msgs__msg__PreviewRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // control_cycle
  output->control_cycle = input->control_cycle;
  // lipm_height
  output->lipm_height = input->lipm_height;
  return true;
}

op3_online_walking_module_msgs__msg__PreviewRequest *
op3_online_walking_module_msgs__msg__PreviewRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__msg__PreviewRequest * msg = (op3_online_walking_module_msgs__msg__PreviewRequest *)allocator.allocate(sizeof(op3_online_walking_module_msgs__msg__PreviewRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(op3_online_walking_module_msgs__msg__PreviewRequest));
  bool success = op3_online_walking_module_msgs__msg__PreviewRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
op3_online_walking_module_msgs__msg__PreviewRequest__destroy(op3_online_walking_module_msgs__msg__PreviewRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    op3_online_walking_module_msgs__msg__PreviewRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
op3_online_walking_module_msgs__msg__PreviewRequest__Sequence__init(op3_online_walking_module_msgs__msg__PreviewRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__msg__PreviewRequest * data = NULL;

  if (size) {
    data = (op3_online_walking_module_msgs__msg__PreviewRequest *)allocator.zero_allocate(size, sizeof(op3_online_walking_module_msgs__msg__PreviewRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = op3_online_walking_module_msgs__msg__PreviewRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        op3_online_walking_module_msgs__msg__PreviewRequest__fini(&data[i - 1]);
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
op3_online_walking_module_msgs__msg__PreviewRequest__Sequence__fini(op3_online_walking_module_msgs__msg__PreviewRequest__Sequence * array)
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
      op3_online_walking_module_msgs__msg__PreviewRequest__fini(&array->data[i]);
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

op3_online_walking_module_msgs__msg__PreviewRequest__Sequence *
op3_online_walking_module_msgs__msg__PreviewRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__msg__PreviewRequest__Sequence * array = (op3_online_walking_module_msgs__msg__PreviewRequest__Sequence *)allocator.allocate(sizeof(op3_online_walking_module_msgs__msg__PreviewRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = op3_online_walking_module_msgs__msg__PreviewRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
op3_online_walking_module_msgs__msg__PreviewRequest__Sequence__destroy(op3_online_walking_module_msgs__msg__PreviewRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    op3_online_walking_module_msgs__msg__PreviewRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
op3_online_walking_module_msgs__msg__PreviewRequest__Sequence__are_equal(const op3_online_walking_module_msgs__msg__PreviewRequest__Sequence * lhs, const op3_online_walking_module_msgs__msg__PreviewRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!op3_online_walking_module_msgs__msg__PreviewRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
op3_online_walking_module_msgs__msg__PreviewRequest__Sequence__copy(
  const op3_online_walking_module_msgs__msg__PreviewRequest__Sequence * input,
  op3_online_walking_module_msgs__msg__PreviewRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(op3_online_walking_module_msgs__msg__PreviewRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    op3_online_walking_module_msgs__msg__PreviewRequest * data =
      (op3_online_walking_module_msgs__msg__PreviewRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!op3_online_walking_module_msgs__msg__PreviewRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          op3_online_walking_module_msgs__msg__PreviewRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!op3_online_walking_module_msgs__msg__PreviewRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
