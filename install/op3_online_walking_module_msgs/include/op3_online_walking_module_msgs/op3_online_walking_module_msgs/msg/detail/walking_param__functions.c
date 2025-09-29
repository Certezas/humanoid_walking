// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from op3_online_walking_module_msgs:msg/WalkingParam.idl
// generated code does not contain a copyright notice
#include "op3_online_walking_module_msgs/msg/detail/walking_param__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
op3_online_walking_module_msgs__msg__WalkingParam__init(op3_online_walking_module_msgs__msg__WalkingParam * msg)
{
  if (!msg) {
    return false;
  }
  // dsp_ratio
  // lipm_height
  // foot_height_max
  // zmp_offset_x
  // zmp_offset_y
  return true;
}

void
op3_online_walking_module_msgs__msg__WalkingParam__fini(op3_online_walking_module_msgs__msg__WalkingParam * msg)
{
  if (!msg) {
    return;
  }
  // dsp_ratio
  // lipm_height
  // foot_height_max
  // zmp_offset_x
  // zmp_offset_y
}

bool
op3_online_walking_module_msgs__msg__WalkingParam__are_equal(const op3_online_walking_module_msgs__msg__WalkingParam * lhs, const op3_online_walking_module_msgs__msg__WalkingParam * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dsp_ratio
  if (lhs->dsp_ratio != rhs->dsp_ratio) {
    return false;
  }
  // lipm_height
  if (lhs->lipm_height != rhs->lipm_height) {
    return false;
  }
  // foot_height_max
  if (lhs->foot_height_max != rhs->foot_height_max) {
    return false;
  }
  // zmp_offset_x
  if (lhs->zmp_offset_x != rhs->zmp_offset_x) {
    return false;
  }
  // zmp_offset_y
  if (lhs->zmp_offset_y != rhs->zmp_offset_y) {
    return false;
  }
  return true;
}

bool
op3_online_walking_module_msgs__msg__WalkingParam__copy(
  const op3_online_walking_module_msgs__msg__WalkingParam * input,
  op3_online_walking_module_msgs__msg__WalkingParam * output)
{
  if (!input || !output) {
    return false;
  }
  // dsp_ratio
  output->dsp_ratio = input->dsp_ratio;
  // lipm_height
  output->lipm_height = input->lipm_height;
  // foot_height_max
  output->foot_height_max = input->foot_height_max;
  // zmp_offset_x
  output->zmp_offset_x = input->zmp_offset_x;
  // zmp_offset_y
  output->zmp_offset_y = input->zmp_offset_y;
  return true;
}

op3_online_walking_module_msgs__msg__WalkingParam *
op3_online_walking_module_msgs__msg__WalkingParam__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__msg__WalkingParam * msg = (op3_online_walking_module_msgs__msg__WalkingParam *)allocator.allocate(sizeof(op3_online_walking_module_msgs__msg__WalkingParam), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(op3_online_walking_module_msgs__msg__WalkingParam));
  bool success = op3_online_walking_module_msgs__msg__WalkingParam__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
op3_online_walking_module_msgs__msg__WalkingParam__destroy(op3_online_walking_module_msgs__msg__WalkingParam * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    op3_online_walking_module_msgs__msg__WalkingParam__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
op3_online_walking_module_msgs__msg__WalkingParam__Sequence__init(op3_online_walking_module_msgs__msg__WalkingParam__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__msg__WalkingParam * data = NULL;

  if (size) {
    data = (op3_online_walking_module_msgs__msg__WalkingParam *)allocator.zero_allocate(size, sizeof(op3_online_walking_module_msgs__msg__WalkingParam), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = op3_online_walking_module_msgs__msg__WalkingParam__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        op3_online_walking_module_msgs__msg__WalkingParam__fini(&data[i - 1]);
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
op3_online_walking_module_msgs__msg__WalkingParam__Sequence__fini(op3_online_walking_module_msgs__msg__WalkingParam__Sequence * array)
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
      op3_online_walking_module_msgs__msg__WalkingParam__fini(&array->data[i]);
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

op3_online_walking_module_msgs__msg__WalkingParam__Sequence *
op3_online_walking_module_msgs__msg__WalkingParam__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__msg__WalkingParam__Sequence * array = (op3_online_walking_module_msgs__msg__WalkingParam__Sequence *)allocator.allocate(sizeof(op3_online_walking_module_msgs__msg__WalkingParam__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = op3_online_walking_module_msgs__msg__WalkingParam__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
op3_online_walking_module_msgs__msg__WalkingParam__Sequence__destroy(op3_online_walking_module_msgs__msg__WalkingParam__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    op3_online_walking_module_msgs__msg__WalkingParam__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
op3_online_walking_module_msgs__msg__WalkingParam__Sequence__are_equal(const op3_online_walking_module_msgs__msg__WalkingParam__Sequence * lhs, const op3_online_walking_module_msgs__msg__WalkingParam__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!op3_online_walking_module_msgs__msg__WalkingParam__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
op3_online_walking_module_msgs__msg__WalkingParam__Sequence__copy(
  const op3_online_walking_module_msgs__msg__WalkingParam__Sequence * input,
  op3_online_walking_module_msgs__msg__WalkingParam__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(op3_online_walking_module_msgs__msg__WalkingParam);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    op3_online_walking_module_msgs__msg__WalkingParam * data =
      (op3_online_walking_module_msgs__msg__WalkingParam *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!op3_online_walking_module_msgs__msg__WalkingParam__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          op3_online_walking_module_msgs__msg__WalkingParam__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!op3_online_walking_module_msgs__msg__WalkingParam__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
