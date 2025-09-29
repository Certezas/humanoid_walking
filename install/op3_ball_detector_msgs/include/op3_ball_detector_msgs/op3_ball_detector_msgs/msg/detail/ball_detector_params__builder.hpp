// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_ball_detector_msgs:msg/BallDetectorParams.idl
// generated code does not contain a copyright notice

#ifndef OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__BALL_DETECTOR_PARAMS__BUILDER_HPP_
#define OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__BALL_DETECTOR_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_ball_detector_msgs/msg/detail/ball_detector_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_ball_detector_msgs
{

namespace msg
{

namespace builder
{

class Init_BallDetectorParams_ellipse_size
{
public:
  explicit Init_BallDetectorParams_ellipse_size(::op3_ball_detector_msgs::msg::BallDetectorParams & msg)
  : msg_(msg)
  {}
  ::op3_ball_detector_msgs::msg::BallDetectorParams ellipse_size(::op3_ball_detector_msgs::msg::BallDetectorParams::_ellipse_size_type arg)
  {
    msg_.ellipse_size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_ball_detector_msgs::msg::BallDetectorParams msg_;
};

class Init_BallDetectorParams_filter_v_max
{
public:
  explicit Init_BallDetectorParams_filter_v_max(::op3_ball_detector_msgs::msg::BallDetectorParams & msg)
  : msg_(msg)
  {}
  Init_BallDetectorParams_ellipse_size filter_v_max(::op3_ball_detector_msgs::msg::BallDetectorParams::_filter_v_max_type arg)
  {
    msg_.filter_v_max = std::move(arg);
    return Init_BallDetectorParams_ellipse_size(msg_);
  }

private:
  ::op3_ball_detector_msgs::msg::BallDetectorParams msg_;
};

class Init_BallDetectorParams_filter_v_min
{
public:
  explicit Init_BallDetectorParams_filter_v_min(::op3_ball_detector_msgs::msg::BallDetectorParams & msg)
  : msg_(msg)
  {}
  Init_BallDetectorParams_filter_v_max filter_v_min(::op3_ball_detector_msgs::msg::BallDetectorParams::_filter_v_min_type arg)
  {
    msg_.filter_v_min = std::move(arg);
    return Init_BallDetectorParams_filter_v_max(msg_);
  }

private:
  ::op3_ball_detector_msgs::msg::BallDetectorParams msg_;
};

class Init_BallDetectorParams_filter_s_max
{
public:
  explicit Init_BallDetectorParams_filter_s_max(::op3_ball_detector_msgs::msg::BallDetectorParams & msg)
  : msg_(msg)
  {}
  Init_BallDetectorParams_filter_v_min filter_s_max(::op3_ball_detector_msgs::msg::BallDetectorParams::_filter_s_max_type arg)
  {
    msg_.filter_s_max = std::move(arg);
    return Init_BallDetectorParams_filter_v_min(msg_);
  }

private:
  ::op3_ball_detector_msgs::msg::BallDetectorParams msg_;
};

class Init_BallDetectorParams_filter_s_min
{
public:
  explicit Init_BallDetectorParams_filter_s_min(::op3_ball_detector_msgs::msg::BallDetectorParams & msg)
  : msg_(msg)
  {}
  Init_BallDetectorParams_filter_s_max filter_s_min(::op3_ball_detector_msgs::msg::BallDetectorParams::_filter_s_min_type arg)
  {
    msg_.filter_s_min = std::move(arg);
    return Init_BallDetectorParams_filter_s_max(msg_);
  }

private:
  ::op3_ball_detector_msgs::msg::BallDetectorParams msg_;
};

class Init_BallDetectorParams_filter_h_max
{
public:
  explicit Init_BallDetectorParams_filter_h_max(::op3_ball_detector_msgs::msg::BallDetectorParams & msg)
  : msg_(msg)
  {}
  Init_BallDetectorParams_filter_s_min filter_h_max(::op3_ball_detector_msgs::msg::BallDetectorParams::_filter_h_max_type arg)
  {
    msg_.filter_h_max = std::move(arg);
    return Init_BallDetectorParams_filter_s_min(msg_);
  }

private:
  ::op3_ball_detector_msgs::msg::BallDetectorParams msg_;
};

class Init_BallDetectorParams_filter_h_min
{
public:
  explicit Init_BallDetectorParams_filter_h_min(::op3_ball_detector_msgs::msg::BallDetectorParams & msg)
  : msg_(msg)
  {}
  Init_BallDetectorParams_filter_h_max filter_h_min(::op3_ball_detector_msgs::msg::BallDetectorParams::_filter_h_min_type arg)
  {
    msg_.filter_h_min = std::move(arg);
    return Init_BallDetectorParams_filter_h_max(msg_);
  }

private:
  ::op3_ball_detector_msgs::msg::BallDetectorParams msg_;
};

class Init_BallDetectorParams_max_radius
{
public:
  explicit Init_BallDetectorParams_max_radius(::op3_ball_detector_msgs::msg::BallDetectorParams & msg)
  : msg_(msg)
  {}
  Init_BallDetectorParams_filter_h_min max_radius(::op3_ball_detector_msgs::msg::BallDetectorParams::_max_radius_type arg)
  {
    msg_.max_radius = std::move(arg);
    return Init_BallDetectorParams_filter_h_min(msg_);
  }

private:
  ::op3_ball_detector_msgs::msg::BallDetectorParams msg_;
};

class Init_BallDetectorParams_min_radius
{
public:
  explicit Init_BallDetectorParams_min_radius(::op3_ball_detector_msgs::msg::BallDetectorParams & msg)
  : msg_(msg)
  {}
  Init_BallDetectorParams_max_radius min_radius(::op3_ball_detector_msgs::msg::BallDetectorParams::_min_radius_type arg)
  {
    msg_.min_radius = std::move(arg);
    return Init_BallDetectorParams_max_radius(msg_);
  }

private:
  ::op3_ball_detector_msgs::msg::BallDetectorParams msg_;
};

class Init_BallDetectorParams_min_circle_dist
{
public:
  explicit Init_BallDetectorParams_min_circle_dist(::op3_ball_detector_msgs::msg::BallDetectorParams & msg)
  : msg_(msg)
  {}
  Init_BallDetectorParams_min_radius min_circle_dist(::op3_ball_detector_msgs::msg::BallDetectorParams::_min_circle_dist_type arg)
  {
    msg_.min_circle_dist = std::move(arg);
    return Init_BallDetectorParams_min_radius(msg_);
  }

private:
  ::op3_ball_detector_msgs::msg::BallDetectorParams msg_;
};

class Init_BallDetectorParams_hough_accum_th
{
public:
  explicit Init_BallDetectorParams_hough_accum_th(::op3_ball_detector_msgs::msg::BallDetectorParams & msg)
  : msg_(msg)
  {}
  Init_BallDetectorParams_min_circle_dist hough_accum_th(::op3_ball_detector_msgs::msg::BallDetectorParams::_hough_accum_th_type arg)
  {
    msg_.hough_accum_th = std::move(arg);
    return Init_BallDetectorParams_min_circle_dist(msg_);
  }

private:
  ::op3_ball_detector_msgs::msg::BallDetectorParams msg_;
};

class Init_BallDetectorParams_hough_accum_resolution
{
public:
  explicit Init_BallDetectorParams_hough_accum_resolution(::op3_ball_detector_msgs::msg::BallDetectorParams & msg)
  : msg_(msg)
  {}
  Init_BallDetectorParams_hough_accum_th hough_accum_resolution(::op3_ball_detector_msgs::msg::BallDetectorParams::_hough_accum_resolution_type arg)
  {
    msg_.hough_accum_resolution = std::move(arg);
    return Init_BallDetectorParams_hough_accum_th(msg_);
  }

private:
  ::op3_ball_detector_msgs::msg::BallDetectorParams msg_;
};

class Init_BallDetectorParams_canny_edge_th
{
public:
  explicit Init_BallDetectorParams_canny_edge_th(::op3_ball_detector_msgs::msg::BallDetectorParams & msg)
  : msg_(msg)
  {}
  Init_BallDetectorParams_hough_accum_resolution canny_edge_th(::op3_ball_detector_msgs::msg::BallDetectorParams::_canny_edge_th_type arg)
  {
    msg_.canny_edge_th = std::move(arg);
    return Init_BallDetectorParams_hough_accum_resolution(msg_);
  }

private:
  ::op3_ball_detector_msgs::msg::BallDetectorParams msg_;
};

class Init_BallDetectorParams_gaussian_blur_sigma
{
public:
  explicit Init_BallDetectorParams_gaussian_blur_sigma(::op3_ball_detector_msgs::msg::BallDetectorParams & msg)
  : msg_(msg)
  {}
  Init_BallDetectorParams_canny_edge_th gaussian_blur_sigma(::op3_ball_detector_msgs::msg::BallDetectorParams::_gaussian_blur_sigma_type arg)
  {
    msg_.gaussian_blur_sigma = std::move(arg);
    return Init_BallDetectorParams_canny_edge_th(msg_);
  }

private:
  ::op3_ball_detector_msgs::msg::BallDetectorParams msg_;
};

class Init_BallDetectorParams_gaussian_blur_size
{
public:
  Init_BallDetectorParams_gaussian_blur_size()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BallDetectorParams_gaussian_blur_sigma gaussian_blur_size(::op3_ball_detector_msgs::msg::BallDetectorParams::_gaussian_blur_size_type arg)
  {
    msg_.gaussian_blur_size = std::move(arg);
    return Init_BallDetectorParams_gaussian_blur_sigma(msg_);
  }

private:
  ::op3_ball_detector_msgs::msg::BallDetectorParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_ball_detector_msgs::msg::BallDetectorParams>()
{
  return op3_ball_detector_msgs::msg::builder::Init_BallDetectorParams_gaussian_blur_size();
}

}  // namespace op3_ball_detector_msgs

#endif  // OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__BALL_DETECTOR_PARAMS__BUILDER_HPP_
