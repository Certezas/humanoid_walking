// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from op3_camera_setting_tool_msgs:msg/CameraParams.idl
// generated code does not contain a copyright notice
#include "op3_camera_setting_tool_msgs/msg/detail/camera_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
op3_camera_setting_tool_msgs__msg__CameraParams__init(op3_camera_setting_tool_msgs__msg__CameraParams * msg)
{
  if (!msg) {
    return false;
  }
  // brightness
  // contrast
  // saturation
  // sharpness
  // gain
  // focus_automatic_continuous
  // focus_absolute
  // auto_exposure
  // exposure_time_absolute
  // white_balance_automatic
  // white_balance_temperature
  return true;
}

void
op3_camera_setting_tool_msgs__msg__CameraParams__fini(op3_camera_setting_tool_msgs__msg__CameraParams * msg)
{
  if (!msg) {
    return;
  }
  // brightness
  // contrast
  // saturation
  // sharpness
  // gain
  // focus_automatic_continuous
  // focus_absolute
  // auto_exposure
  // exposure_time_absolute
  // white_balance_automatic
  // white_balance_temperature
}

bool
op3_camera_setting_tool_msgs__msg__CameraParams__are_equal(const op3_camera_setting_tool_msgs__msg__CameraParams * lhs, const op3_camera_setting_tool_msgs__msg__CameraParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // brightness
  if (lhs->brightness != rhs->brightness) {
    return false;
  }
  // contrast
  if (lhs->contrast != rhs->contrast) {
    return false;
  }
  // saturation
  if (lhs->saturation != rhs->saturation) {
    return false;
  }
  // sharpness
  if (lhs->sharpness != rhs->sharpness) {
    return false;
  }
  // gain
  if (lhs->gain != rhs->gain) {
    return false;
  }
  // focus_automatic_continuous
  if (lhs->focus_automatic_continuous != rhs->focus_automatic_continuous) {
    return false;
  }
  // focus_absolute
  if (lhs->focus_absolute != rhs->focus_absolute) {
    return false;
  }
  // auto_exposure
  if (lhs->auto_exposure != rhs->auto_exposure) {
    return false;
  }
  // exposure_time_absolute
  if (lhs->exposure_time_absolute != rhs->exposure_time_absolute) {
    return false;
  }
  // white_balance_automatic
  if (lhs->white_balance_automatic != rhs->white_balance_automatic) {
    return false;
  }
  // white_balance_temperature
  if (lhs->white_balance_temperature != rhs->white_balance_temperature) {
    return false;
  }
  return true;
}

bool
op3_camera_setting_tool_msgs__msg__CameraParams__copy(
  const op3_camera_setting_tool_msgs__msg__CameraParams * input,
  op3_camera_setting_tool_msgs__msg__CameraParams * output)
{
  if (!input || !output) {
    return false;
  }
  // brightness
  output->brightness = input->brightness;
  // contrast
  output->contrast = input->contrast;
  // saturation
  output->saturation = input->saturation;
  // sharpness
  output->sharpness = input->sharpness;
  // gain
  output->gain = input->gain;
  // focus_automatic_continuous
  output->focus_automatic_continuous = input->focus_automatic_continuous;
  // focus_absolute
  output->focus_absolute = input->focus_absolute;
  // auto_exposure
  output->auto_exposure = input->auto_exposure;
  // exposure_time_absolute
  output->exposure_time_absolute = input->exposure_time_absolute;
  // white_balance_automatic
  output->white_balance_automatic = input->white_balance_automatic;
  // white_balance_temperature
  output->white_balance_temperature = input->white_balance_temperature;
  return true;
}

op3_camera_setting_tool_msgs__msg__CameraParams *
op3_camera_setting_tool_msgs__msg__CameraParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_camera_setting_tool_msgs__msg__CameraParams * msg = (op3_camera_setting_tool_msgs__msg__CameraParams *)allocator.allocate(sizeof(op3_camera_setting_tool_msgs__msg__CameraParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(op3_camera_setting_tool_msgs__msg__CameraParams));
  bool success = op3_camera_setting_tool_msgs__msg__CameraParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
op3_camera_setting_tool_msgs__msg__CameraParams__destroy(op3_camera_setting_tool_msgs__msg__CameraParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    op3_camera_setting_tool_msgs__msg__CameraParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
op3_camera_setting_tool_msgs__msg__CameraParams__Sequence__init(op3_camera_setting_tool_msgs__msg__CameraParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_camera_setting_tool_msgs__msg__CameraParams * data = NULL;

  if (size) {
    data = (op3_camera_setting_tool_msgs__msg__CameraParams *)allocator.zero_allocate(size, sizeof(op3_camera_setting_tool_msgs__msg__CameraParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = op3_camera_setting_tool_msgs__msg__CameraParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        op3_camera_setting_tool_msgs__msg__CameraParams__fini(&data[i - 1]);
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
op3_camera_setting_tool_msgs__msg__CameraParams__Sequence__fini(op3_camera_setting_tool_msgs__msg__CameraParams__Sequence * array)
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
      op3_camera_setting_tool_msgs__msg__CameraParams__fini(&array->data[i]);
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

op3_camera_setting_tool_msgs__msg__CameraParams__Sequence *
op3_camera_setting_tool_msgs__msg__CameraParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_camera_setting_tool_msgs__msg__CameraParams__Sequence * array = (op3_camera_setting_tool_msgs__msg__CameraParams__Sequence *)allocator.allocate(sizeof(op3_camera_setting_tool_msgs__msg__CameraParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = op3_camera_setting_tool_msgs__msg__CameraParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
op3_camera_setting_tool_msgs__msg__CameraParams__Sequence__destroy(op3_camera_setting_tool_msgs__msg__CameraParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    op3_camera_setting_tool_msgs__msg__CameraParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
op3_camera_setting_tool_msgs__msg__CameraParams__Sequence__are_equal(const op3_camera_setting_tool_msgs__msg__CameraParams__Sequence * lhs, const op3_camera_setting_tool_msgs__msg__CameraParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!op3_camera_setting_tool_msgs__msg__CameraParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
op3_camera_setting_tool_msgs__msg__CameraParams__Sequence__copy(
  const op3_camera_setting_tool_msgs__msg__CameraParams__Sequence * input,
  op3_camera_setting_tool_msgs__msg__CameraParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(op3_camera_setting_tool_msgs__msg__CameraParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    op3_camera_setting_tool_msgs__msg__CameraParams * data =
      (op3_camera_setting_tool_msgs__msg__CameraParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!op3_camera_setting_tool_msgs__msg__CameraParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          op3_camera_setting_tool_msgs__msg__CameraParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!op3_camera_setting_tool_msgs__msg__CameraParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
