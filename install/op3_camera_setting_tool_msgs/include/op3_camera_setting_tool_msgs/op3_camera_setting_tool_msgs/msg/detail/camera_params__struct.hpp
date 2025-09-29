// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_camera_setting_tool_msgs:msg/CameraParams.idl
// generated code does not contain a copyright notice

#ifndef OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__CAMERA_PARAMS__STRUCT_HPP_
#define OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__CAMERA_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__op3_camera_setting_tool_msgs__msg__CameraParams __attribute__((deprecated))
#else
# define DEPRECATED__op3_camera_setting_tool_msgs__msg__CameraParams __declspec(deprecated)
#endif

namespace op3_camera_setting_tool_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraParams_
{
  using Type = CameraParams_<ContainerAllocator>;

  explicit CameraParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brightness = 0ul;
      this->contrast = 0ul;
      this->saturation = 0ul;
      this->sharpness = 0ul;
      this->gain = 0ul;
      this->focus_automatic_continuous = false;
      this->focus_absolute = 0l;
      this->auto_exposure = 0ul;
      this->exposure_time_absolute = 0ul;
      this->white_balance_automatic = false;
      this->white_balance_temperature = 0ul;
    }
  }

  explicit CameraParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brightness = 0ul;
      this->contrast = 0ul;
      this->saturation = 0ul;
      this->sharpness = 0ul;
      this->gain = 0ul;
      this->focus_automatic_continuous = false;
      this->focus_absolute = 0l;
      this->auto_exposure = 0ul;
      this->exposure_time_absolute = 0ul;
      this->white_balance_automatic = false;
      this->white_balance_temperature = 0ul;
    }
  }

  // field types and members
  using _brightness_type =
    uint32_t;
  _brightness_type brightness;
  using _contrast_type =
    uint32_t;
  _contrast_type contrast;
  using _saturation_type =
    uint32_t;
  _saturation_type saturation;
  using _sharpness_type =
    uint32_t;
  _sharpness_type sharpness;
  using _gain_type =
    uint32_t;
  _gain_type gain;
  using _focus_automatic_continuous_type =
    bool;
  _focus_automatic_continuous_type focus_automatic_continuous;
  using _focus_absolute_type =
    int32_t;
  _focus_absolute_type focus_absolute;
  using _auto_exposure_type =
    uint32_t;
  _auto_exposure_type auto_exposure;
  using _exposure_time_absolute_type =
    uint32_t;
  _exposure_time_absolute_type exposure_time_absolute;
  using _white_balance_automatic_type =
    bool;
  _white_balance_automatic_type white_balance_automatic;
  using _white_balance_temperature_type =
    uint32_t;
  _white_balance_temperature_type white_balance_temperature;

  // setters for named parameter idiom
  Type & set__brightness(
    const uint32_t & _arg)
  {
    this->brightness = _arg;
    return *this;
  }
  Type & set__contrast(
    const uint32_t & _arg)
  {
    this->contrast = _arg;
    return *this;
  }
  Type & set__saturation(
    const uint32_t & _arg)
  {
    this->saturation = _arg;
    return *this;
  }
  Type & set__sharpness(
    const uint32_t & _arg)
  {
    this->sharpness = _arg;
    return *this;
  }
  Type & set__gain(
    const uint32_t & _arg)
  {
    this->gain = _arg;
    return *this;
  }
  Type & set__focus_automatic_continuous(
    const bool & _arg)
  {
    this->focus_automatic_continuous = _arg;
    return *this;
  }
  Type & set__focus_absolute(
    const int32_t & _arg)
  {
    this->focus_absolute = _arg;
    return *this;
  }
  Type & set__auto_exposure(
    const uint32_t & _arg)
  {
    this->auto_exposure = _arg;
    return *this;
  }
  Type & set__exposure_time_absolute(
    const uint32_t & _arg)
  {
    this->exposure_time_absolute = _arg;
    return *this;
  }
  Type & set__white_balance_automatic(
    const bool & _arg)
  {
    this->white_balance_automatic = _arg;
    return *this;
  }
  Type & set__white_balance_temperature(
    const uint32_t & _arg)
  {
    this->white_balance_temperature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_camera_setting_tool_msgs::msg::CameraParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_camera_setting_tool_msgs::msg::CameraParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_camera_setting_tool_msgs::msg::CameraParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_camera_setting_tool_msgs::msg::CameraParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_camera_setting_tool_msgs::msg::CameraParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_camera_setting_tool_msgs::msg::CameraParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_camera_setting_tool_msgs::msg::CameraParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_camera_setting_tool_msgs::msg::CameraParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_camera_setting_tool_msgs::msg::CameraParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_camera_setting_tool_msgs::msg::CameraParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_camera_setting_tool_msgs__msg__CameraParams
    std::shared_ptr<op3_camera_setting_tool_msgs::msg::CameraParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_camera_setting_tool_msgs__msg__CameraParams
    std::shared_ptr<op3_camera_setting_tool_msgs::msg::CameraParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraParams_ & other) const
  {
    if (this->brightness != other.brightness) {
      return false;
    }
    if (this->contrast != other.contrast) {
      return false;
    }
    if (this->saturation != other.saturation) {
      return false;
    }
    if (this->sharpness != other.sharpness) {
      return false;
    }
    if (this->gain != other.gain) {
      return false;
    }
    if (this->focus_automatic_continuous != other.focus_automatic_continuous) {
      return false;
    }
    if (this->focus_absolute != other.focus_absolute) {
      return false;
    }
    if (this->auto_exposure != other.auto_exposure) {
      return false;
    }
    if (this->exposure_time_absolute != other.exposure_time_absolute) {
      return false;
    }
    if (this->white_balance_automatic != other.white_balance_automatic) {
      return false;
    }
    if (this->white_balance_temperature != other.white_balance_temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraParams_

// alias to use template instance with default allocator
using CameraParams =
  op3_camera_setting_tool_msgs::msg::CameraParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace op3_camera_setting_tool_msgs

#endif  // OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__CAMERA_PARAMS__STRUCT_HPP_
