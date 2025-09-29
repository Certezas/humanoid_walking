// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from op3_ball_detector_msgs:msg/BallDetectorParams.idl
// generated code does not contain a copyright notice
#include "op3_ball_detector_msgs/msg/detail/ball_detector_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
op3_ball_detector_msgs__msg__BallDetectorParams__init(op3_ball_detector_msgs__msg__BallDetectorParams * msg)
{
  if (!msg) {
    return false;
  }
  // gaussian_blur_size
  // gaussian_blur_sigma
  // canny_edge_th
  // hough_accum_resolution
  // hough_accum_th
  // min_circle_dist
  // min_radius
  // max_radius
  // filter_h_min
  // filter_h_max
  // filter_s_min
  // filter_s_max
  // filter_v_min
  // filter_v_max
  // ellipse_size
  return true;
}

void
op3_ball_detector_msgs__msg__BallDetectorParams__fini(op3_ball_detector_msgs__msg__BallDetectorParams * msg)
{
  if (!msg) {
    return;
  }
  // gaussian_blur_size
  // gaussian_blur_sigma
  // canny_edge_th
  // hough_accum_resolution
  // hough_accum_th
  // min_circle_dist
  // min_radius
  // max_radius
  // filter_h_min
  // filter_h_max
  // filter_s_min
  // filter_s_max
  // filter_v_min
  // filter_v_max
  // ellipse_size
}

bool
op3_ball_detector_msgs__msg__BallDetectorParams__are_equal(const op3_ball_detector_msgs__msg__BallDetectorParams * lhs, const op3_ball_detector_msgs__msg__BallDetectorParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gaussian_blur_size
  if (lhs->gaussian_blur_size != rhs->gaussian_blur_size) {
    return false;
  }
  // gaussian_blur_sigma
  if (lhs->gaussian_blur_sigma != rhs->gaussian_blur_sigma) {
    return false;
  }
  // canny_edge_th
  if (lhs->canny_edge_th != rhs->canny_edge_th) {
    return false;
  }
  // hough_accum_resolution
  if (lhs->hough_accum_resolution != rhs->hough_accum_resolution) {
    return false;
  }
  // hough_accum_th
  if (lhs->hough_accum_th != rhs->hough_accum_th) {
    return false;
  }
  // min_circle_dist
  if (lhs->min_circle_dist != rhs->min_circle_dist) {
    return false;
  }
  // min_radius
  if (lhs->min_radius != rhs->min_radius) {
    return false;
  }
  // max_radius
  if (lhs->max_radius != rhs->max_radius) {
    return false;
  }
  // filter_h_min
  if (lhs->filter_h_min != rhs->filter_h_min) {
    return false;
  }
  // filter_h_max
  if (lhs->filter_h_max != rhs->filter_h_max) {
    return false;
  }
  // filter_s_min
  if (lhs->filter_s_min != rhs->filter_s_min) {
    return false;
  }
  // filter_s_max
  if (lhs->filter_s_max != rhs->filter_s_max) {
    return false;
  }
  // filter_v_min
  if (lhs->filter_v_min != rhs->filter_v_min) {
    return false;
  }
  // filter_v_max
  if (lhs->filter_v_max != rhs->filter_v_max) {
    return false;
  }
  // ellipse_size
  if (lhs->ellipse_size != rhs->ellipse_size) {
    return false;
  }
  return true;
}

bool
op3_ball_detector_msgs__msg__BallDetectorParams__copy(
  const op3_ball_detector_msgs__msg__BallDetectorParams * input,
  op3_ball_detector_msgs__msg__BallDetectorParams * output)
{
  if (!input || !output) {
    return false;
  }
  // gaussian_blur_size
  output->gaussian_blur_size = input->gaussian_blur_size;
  // gaussian_blur_sigma
  output->gaussian_blur_sigma = input->gaussian_blur_sigma;
  // canny_edge_th
  output->canny_edge_th = input->canny_edge_th;
  // hough_accum_resolution
  output->hough_accum_resolution = input->hough_accum_resolution;
  // hough_accum_th
  output->hough_accum_th = input->hough_accum_th;
  // min_circle_dist
  output->min_circle_dist = input->min_circle_dist;
  // min_radius
  output->min_radius = input->min_radius;
  // max_radius
  output->max_radius = input->max_radius;
  // filter_h_min
  output->filter_h_min = input->filter_h_min;
  // filter_h_max
  output->filter_h_max = input->filter_h_max;
  // filter_s_min
  output->filter_s_min = input->filter_s_min;
  // filter_s_max
  output->filter_s_max = input->filter_s_max;
  // filter_v_min
  output->filter_v_min = input->filter_v_min;
  // filter_v_max
  output->filter_v_max = input->filter_v_max;
  // ellipse_size
  output->ellipse_size = input->ellipse_size;
  return true;
}

op3_ball_detector_msgs__msg__BallDetectorParams *
op3_ball_detector_msgs__msg__BallDetectorParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_ball_detector_msgs__msg__BallDetectorParams * msg = (op3_ball_detector_msgs__msg__BallDetectorParams *)allocator.allocate(sizeof(op3_ball_detector_msgs__msg__BallDetectorParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(op3_ball_detector_msgs__msg__BallDetectorParams));
  bool success = op3_ball_detector_msgs__msg__BallDetectorParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
op3_ball_detector_msgs__msg__BallDetectorParams__destroy(op3_ball_detector_msgs__msg__BallDetectorParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    op3_ball_detector_msgs__msg__BallDetectorParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
op3_ball_detector_msgs__msg__BallDetectorParams__Sequence__init(op3_ball_detector_msgs__msg__BallDetectorParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_ball_detector_msgs__msg__BallDetectorParams * data = NULL;

  if (size) {
    data = (op3_ball_detector_msgs__msg__BallDetectorParams *)allocator.zero_allocate(size, sizeof(op3_ball_detector_msgs__msg__BallDetectorParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = op3_ball_detector_msgs__msg__BallDetectorParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        op3_ball_detector_msgs__msg__BallDetectorParams__fini(&data[i - 1]);
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
op3_ball_detector_msgs__msg__BallDetectorParams__Sequence__fini(op3_ball_detector_msgs__msg__BallDetectorParams__Sequence * array)
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
      op3_ball_detector_msgs__msg__BallDetectorParams__fini(&array->data[i]);
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

op3_ball_detector_msgs__msg__BallDetectorParams__Sequence *
op3_ball_detector_msgs__msg__BallDetectorParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_ball_detector_msgs__msg__BallDetectorParams__Sequence * array = (op3_ball_detector_msgs__msg__BallDetectorParams__Sequence *)allocator.allocate(sizeof(op3_ball_detector_msgs__msg__BallDetectorParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = op3_ball_detector_msgs__msg__BallDetectorParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
op3_ball_detector_msgs__msg__BallDetectorParams__Sequence__destroy(op3_ball_detector_msgs__msg__BallDetectorParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    op3_ball_detector_msgs__msg__BallDetectorParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
op3_ball_detector_msgs__msg__BallDetectorParams__Sequence__are_equal(const op3_ball_detector_msgs__msg__BallDetectorParams__Sequence * lhs, const op3_ball_detector_msgs__msg__BallDetectorParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!op3_ball_detector_msgs__msg__BallDetectorParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
op3_ball_detector_msgs__msg__BallDetectorParams__Sequence__copy(
  const op3_ball_detector_msgs__msg__BallDetectorParams__Sequence * input,
  op3_ball_detector_msgs__msg__BallDetectorParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(op3_ball_detector_msgs__msg__BallDetectorParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    op3_ball_detector_msgs__msg__BallDetectorParams * data =
      (op3_ball_detector_msgs__msg__BallDetectorParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!op3_ball_detector_msgs__msg__BallDetectorParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          op3_ball_detector_msgs__msg__BallDetectorParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!op3_ball_detector_msgs__msg__BallDetectorParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
