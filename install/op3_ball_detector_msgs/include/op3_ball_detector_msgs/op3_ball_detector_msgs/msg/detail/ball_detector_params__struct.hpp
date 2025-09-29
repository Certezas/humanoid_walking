// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_ball_detector_msgs:msg/BallDetectorParams.idl
// generated code does not contain a copyright notice

#ifndef OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__BALL_DETECTOR_PARAMS__STRUCT_HPP_
#define OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__BALL_DETECTOR_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__op3_ball_detector_msgs__msg__BallDetectorParams __attribute__((deprecated))
#else
# define DEPRECATED__op3_ball_detector_msgs__msg__BallDetectorParams __declspec(deprecated)
#endif

namespace op3_ball_detector_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BallDetectorParams_
{
  using Type = BallDetectorParams_<ContainerAllocator>;

  explicit BallDetectorParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gaussian_blur_size = 0ul;
      this->gaussian_blur_sigma = 0.0f;
      this->canny_edge_th = 0.0f;
      this->hough_accum_resolution = 0.0f;
      this->hough_accum_th = 0.0f;
      this->min_circle_dist = 0.0f;
      this->min_radius = 0ul;
      this->max_radius = 0ul;
      this->filter_h_min = 0ul;
      this->filter_h_max = 0ul;
      this->filter_s_min = 0ul;
      this->filter_s_max = 0ul;
      this->filter_v_min = 0ul;
      this->filter_v_max = 0ul;
      this->ellipse_size = 0ul;
    }
  }

  explicit BallDetectorParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gaussian_blur_size = 0ul;
      this->gaussian_blur_sigma = 0.0f;
      this->canny_edge_th = 0.0f;
      this->hough_accum_resolution = 0.0f;
      this->hough_accum_th = 0.0f;
      this->min_circle_dist = 0.0f;
      this->min_radius = 0ul;
      this->max_radius = 0ul;
      this->filter_h_min = 0ul;
      this->filter_h_max = 0ul;
      this->filter_s_min = 0ul;
      this->filter_s_max = 0ul;
      this->filter_v_min = 0ul;
      this->filter_v_max = 0ul;
      this->ellipse_size = 0ul;
    }
  }

  // field types and members
  using _gaussian_blur_size_type =
    uint32_t;
  _gaussian_blur_size_type gaussian_blur_size;
  using _gaussian_blur_sigma_type =
    float;
  _gaussian_blur_sigma_type gaussian_blur_sigma;
  using _canny_edge_th_type =
    float;
  _canny_edge_th_type canny_edge_th;
  using _hough_accum_resolution_type =
    float;
  _hough_accum_resolution_type hough_accum_resolution;
  using _hough_accum_th_type =
    float;
  _hough_accum_th_type hough_accum_th;
  using _min_circle_dist_type =
    float;
  _min_circle_dist_type min_circle_dist;
  using _min_radius_type =
    uint32_t;
  _min_radius_type min_radius;
  using _max_radius_type =
    uint32_t;
  _max_radius_type max_radius;
  using _filter_h_min_type =
    uint32_t;
  _filter_h_min_type filter_h_min;
  using _filter_h_max_type =
    uint32_t;
  _filter_h_max_type filter_h_max;
  using _filter_s_min_type =
    uint32_t;
  _filter_s_min_type filter_s_min;
  using _filter_s_max_type =
    uint32_t;
  _filter_s_max_type filter_s_max;
  using _filter_v_min_type =
    uint32_t;
  _filter_v_min_type filter_v_min;
  using _filter_v_max_type =
    uint32_t;
  _filter_v_max_type filter_v_max;
  using _ellipse_size_type =
    uint32_t;
  _ellipse_size_type ellipse_size;

  // setters for named parameter idiom
  Type & set__gaussian_blur_size(
    const uint32_t & _arg)
  {
    this->gaussian_blur_size = _arg;
    return *this;
  }
  Type & set__gaussian_blur_sigma(
    const float & _arg)
  {
    this->gaussian_blur_sigma = _arg;
    return *this;
  }
  Type & set__canny_edge_th(
    const float & _arg)
  {
    this->canny_edge_th = _arg;
    return *this;
  }
  Type & set__hough_accum_resolution(
    const float & _arg)
  {
    this->hough_accum_resolution = _arg;
    return *this;
  }
  Type & set__hough_accum_th(
    const float & _arg)
  {
    this->hough_accum_th = _arg;
    return *this;
  }
  Type & set__min_circle_dist(
    const float & _arg)
  {
    this->min_circle_dist = _arg;
    return *this;
  }
  Type & set__min_radius(
    const uint32_t & _arg)
  {
    this->min_radius = _arg;
    return *this;
  }
  Type & set__max_radius(
    const uint32_t & _arg)
  {
    this->max_radius = _arg;
    return *this;
  }
  Type & set__filter_h_min(
    const uint32_t & _arg)
  {
    this->filter_h_min = _arg;
    return *this;
  }
  Type & set__filter_h_max(
    const uint32_t & _arg)
  {
    this->filter_h_max = _arg;
    return *this;
  }
  Type & set__filter_s_min(
    const uint32_t & _arg)
  {
    this->filter_s_min = _arg;
    return *this;
  }
  Type & set__filter_s_max(
    const uint32_t & _arg)
  {
    this->filter_s_max = _arg;
    return *this;
  }
  Type & set__filter_v_min(
    const uint32_t & _arg)
  {
    this->filter_v_min = _arg;
    return *this;
  }
  Type & set__filter_v_max(
    const uint32_t & _arg)
  {
    this->filter_v_max = _arg;
    return *this;
  }
  Type & set__ellipse_size(
    const uint32_t & _arg)
  {
    this->ellipse_size = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_ball_detector_msgs::msg::BallDetectorParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_ball_detector_msgs::msg::BallDetectorParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_ball_detector_msgs::msg::BallDetectorParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_ball_detector_msgs::msg::BallDetectorParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_ball_detector_msgs::msg::BallDetectorParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_ball_detector_msgs::msg::BallDetectorParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_ball_detector_msgs::msg::BallDetectorParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_ball_detector_msgs::msg::BallDetectorParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_ball_detector_msgs::msg::BallDetectorParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_ball_detector_msgs::msg::BallDetectorParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_ball_detector_msgs__msg__BallDetectorParams
    std::shared_ptr<op3_ball_detector_msgs::msg::BallDetectorParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_ball_detector_msgs__msg__BallDetectorParams
    std::shared_ptr<op3_ball_detector_msgs::msg::BallDetectorParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BallDetectorParams_ & other) const
  {
    if (this->gaussian_blur_size != other.gaussian_blur_size) {
      return false;
    }
    if (this->gaussian_blur_sigma != other.gaussian_blur_sigma) {
      return false;
    }
    if (this->canny_edge_th != other.canny_edge_th) {
      return false;
    }
    if (this->hough_accum_resolution != other.hough_accum_resolution) {
      return false;
    }
    if (this->hough_accum_th != other.hough_accum_th) {
      return false;
    }
    if (this->min_circle_dist != other.min_circle_dist) {
      return false;
    }
    if (this->min_radius != other.min_radius) {
      return false;
    }
    if (this->max_radius != other.max_radius) {
      return false;
    }
    if (this->filter_h_min != other.filter_h_min) {
      return false;
    }
    if (this->filter_h_max != other.filter_h_max) {
      return false;
    }
    if (this->filter_s_min != other.filter_s_min) {
      return false;
    }
    if (this->filter_s_max != other.filter_s_max) {
      return false;
    }
    if (this->filter_v_min != other.filter_v_min) {
      return false;
    }
    if (this->filter_v_max != other.filter_v_max) {
      return false;
    }
    if (this->ellipse_size != other.ellipse_size) {
      return false;
    }
    return true;
  }
  bool operator!=(const BallDetectorParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BallDetectorParams_

// alias to use template instance with default allocator
using BallDetectorParams =
  op3_ball_detector_msgs::msg::BallDetectorParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace op3_ball_detector_msgs

#endif  // OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__BALL_DETECTOR_PARAMS__STRUCT_HPP_
