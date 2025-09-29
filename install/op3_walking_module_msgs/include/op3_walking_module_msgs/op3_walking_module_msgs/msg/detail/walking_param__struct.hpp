// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_walking_module_msgs:msg/WalkingParam.idl
// generated code does not contain a copyright notice

#ifndef OP3_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__STRUCT_HPP_
#define OP3_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__op3_walking_module_msgs__msg__WalkingParam __attribute__((deprecated))
#else
# define DEPRECATED__op3_walking_module_msgs__msg__WalkingParam __declspec(deprecated)
#endif

namespace op3_walking_module_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WalkingParam_
{
  using Type = WalkingParam_<ContainerAllocator>;

  explicit WalkingParam_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->init_x_offset = 0.0f;
      this->init_y_offset = 0.0f;
      this->init_z_offset = 0.0f;
      this->init_roll_offset = 0.0f;
      this->init_pitch_offset = 0.0f;
      this->init_yaw_offset = 0.0f;
      this->period_time = 0.0f;
      this->dsp_ratio = 0.0f;
      this->step_fb_ratio = 0.0f;
      this->x_move_amplitude = 0.0f;
      this->y_move_amplitude = 0.0f;
      this->z_move_amplitude = 0.0f;
      this->angle_move_amplitude = 0.0f;
      this->move_aim_on = false;
      this->balance_enable = false;
      this->balance_hip_roll_gain = 0.0f;
      this->balance_knee_gain = 0.0f;
      this->balance_ankle_roll_gain = 0.0f;
      this->balance_ankle_pitch_gain = 0.0f;
      this->y_swap_amplitude = 0.0f;
      this->z_swap_amplitude = 0.0f;
      this->arm_swing_gain = 0.0f;
      this->pelvis_offset = 0.0f;
      this->hip_pitch_offset = 0.0f;
      this->p_gain = 0l;
      this->i_gain = 0l;
      this->d_gain = 0l;
    }
  }

  explicit WalkingParam_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->init_x_offset = 0.0f;
      this->init_y_offset = 0.0f;
      this->init_z_offset = 0.0f;
      this->init_roll_offset = 0.0f;
      this->init_pitch_offset = 0.0f;
      this->init_yaw_offset = 0.0f;
      this->period_time = 0.0f;
      this->dsp_ratio = 0.0f;
      this->step_fb_ratio = 0.0f;
      this->x_move_amplitude = 0.0f;
      this->y_move_amplitude = 0.0f;
      this->z_move_amplitude = 0.0f;
      this->angle_move_amplitude = 0.0f;
      this->move_aim_on = false;
      this->balance_enable = false;
      this->balance_hip_roll_gain = 0.0f;
      this->balance_knee_gain = 0.0f;
      this->balance_ankle_roll_gain = 0.0f;
      this->balance_ankle_pitch_gain = 0.0f;
      this->y_swap_amplitude = 0.0f;
      this->z_swap_amplitude = 0.0f;
      this->arm_swing_gain = 0.0f;
      this->pelvis_offset = 0.0f;
      this->hip_pitch_offset = 0.0f;
      this->p_gain = 0l;
      this->i_gain = 0l;
      this->d_gain = 0l;
    }
  }

  // field types and members
  using _init_x_offset_type =
    float;
  _init_x_offset_type init_x_offset;
  using _init_y_offset_type =
    float;
  _init_y_offset_type init_y_offset;
  using _init_z_offset_type =
    float;
  _init_z_offset_type init_z_offset;
  using _init_roll_offset_type =
    float;
  _init_roll_offset_type init_roll_offset;
  using _init_pitch_offset_type =
    float;
  _init_pitch_offset_type init_pitch_offset;
  using _init_yaw_offset_type =
    float;
  _init_yaw_offset_type init_yaw_offset;
  using _period_time_type =
    float;
  _period_time_type period_time;
  using _dsp_ratio_type =
    float;
  _dsp_ratio_type dsp_ratio;
  using _step_fb_ratio_type =
    float;
  _step_fb_ratio_type step_fb_ratio;
  using _x_move_amplitude_type =
    float;
  _x_move_amplitude_type x_move_amplitude;
  using _y_move_amplitude_type =
    float;
  _y_move_amplitude_type y_move_amplitude;
  using _z_move_amplitude_type =
    float;
  _z_move_amplitude_type z_move_amplitude;
  using _angle_move_amplitude_type =
    float;
  _angle_move_amplitude_type angle_move_amplitude;
  using _move_aim_on_type =
    bool;
  _move_aim_on_type move_aim_on;
  using _balance_enable_type =
    bool;
  _balance_enable_type balance_enable;
  using _balance_hip_roll_gain_type =
    float;
  _balance_hip_roll_gain_type balance_hip_roll_gain;
  using _balance_knee_gain_type =
    float;
  _balance_knee_gain_type balance_knee_gain;
  using _balance_ankle_roll_gain_type =
    float;
  _balance_ankle_roll_gain_type balance_ankle_roll_gain;
  using _balance_ankle_pitch_gain_type =
    float;
  _balance_ankle_pitch_gain_type balance_ankle_pitch_gain;
  using _y_swap_amplitude_type =
    float;
  _y_swap_amplitude_type y_swap_amplitude;
  using _z_swap_amplitude_type =
    float;
  _z_swap_amplitude_type z_swap_amplitude;
  using _arm_swing_gain_type =
    float;
  _arm_swing_gain_type arm_swing_gain;
  using _pelvis_offset_type =
    float;
  _pelvis_offset_type pelvis_offset;
  using _hip_pitch_offset_type =
    float;
  _hip_pitch_offset_type hip_pitch_offset;
  using _p_gain_type =
    int32_t;
  _p_gain_type p_gain;
  using _i_gain_type =
    int32_t;
  _i_gain_type i_gain;
  using _d_gain_type =
    int32_t;
  _d_gain_type d_gain;

  // setters for named parameter idiom
  Type & set__init_x_offset(
    const float & _arg)
  {
    this->init_x_offset = _arg;
    return *this;
  }
  Type & set__init_y_offset(
    const float & _arg)
  {
    this->init_y_offset = _arg;
    return *this;
  }
  Type & set__init_z_offset(
    const float & _arg)
  {
    this->init_z_offset = _arg;
    return *this;
  }
  Type & set__init_roll_offset(
    const float & _arg)
  {
    this->init_roll_offset = _arg;
    return *this;
  }
  Type & set__init_pitch_offset(
    const float & _arg)
  {
    this->init_pitch_offset = _arg;
    return *this;
  }
  Type & set__init_yaw_offset(
    const float & _arg)
  {
    this->init_yaw_offset = _arg;
    return *this;
  }
  Type & set__period_time(
    const float & _arg)
  {
    this->period_time = _arg;
    return *this;
  }
  Type & set__dsp_ratio(
    const float & _arg)
  {
    this->dsp_ratio = _arg;
    return *this;
  }
  Type & set__step_fb_ratio(
    const float & _arg)
  {
    this->step_fb_ratio = _arg;
    return *this;
  }
  Type & set__x_move_amplitude(
    const float & _arg)
  {
    this->x_move_amplitude = _arg;
    return *this;
  }
  Type & set__y_move_amplitude(
    const float & _arg)
  {
    this->y_move_amplitude = _arg;
    return *this;
  }
  Type & set__z_move_amplitude(
    const float & _arg)
  {
    this->z_move_amplitude = _arg;
    return *this;
  }
  Type & set__angle_move_amplitude(
    const float & _arg)
  {
    this->angle_move_amplitude = _arg;
    return *this;
  }
  Type & set__move_aim_on(
    const bool & _arg)
  {
    this->move_aim_on = _arg;
    return *this;
  }
  Type & set__balance_enable(
    const bool & _arg)
  {
    this->balance_enable = _arg;
    return *this;
  }
  Type & set__balance_hip_roll_gain(
    const float & _arg)
  {
    this->balance_hip_roll_gain = _arg;
    return *this;
  }
  Type & set__balance_knee_gain(
    const float & _arg)
  {
    this->balance_knee_gain = _arg;
    return *this;
  }
  Type & set__balance_ankle_roll_gain(
    const float & _arg)
  {
    this->balance_ankle_roll_gain = _arg;
    return *this;
  }
  Type & set__balance_ankle_pitch_gain(
    const float & _arg)
  {
    this->balance_ankle_pitch_gain = _arg;
    return *this;
  }
  Type & set__y_swap_amplitude(
    const float & _arg)
  {
    this->y_swap_amplitude = _arg;
    return *this;
  }
  Type & set__z_swap_amplitude(
    const float & _arg)
  {
    this->z_swap_amplitude = _arg;
    return *this;
  }
  Type & set__arm_swing_gain(
    const float & _arg)
  {
    this->arm_swing_gain = _arg;
    return *this;
  }
  Type & set__pelvis_offset(
    const float & _arg)
  {
    this->pelvis_offset = _arg;
    return *this;
  }
  Type & set__hip_pitch_offset(
    const float & _arg)
  {
    this->hip_pitch_offset = _arg;
    return *this;
  }
  Type & set__p_gain(
    const int32_t & _arg)
  {
    this->p_gain = _arg;
    return *this;
  }
  Type & set__i_gain(
    const int32_t & _arg)
  {
    this->i_gain = _arg;
    return *this;
  }
  Type & set__d_gain(
    const int32_t & _arg)
  {
    this->d_gain = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_walking_module_msgs::msg::WalkingParam_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_walking_module_msgs::msg::WalkingParam_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_walking_module_msgs::msg::WalkingParam_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_walking_module_msgs::msg::WalkingParam_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_walking_module_msgs::msg::WalkingParam_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_walking_module_msgs::msg::WalkingParam_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_walking_module_msgs::msg::WalkingParam_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_walking_module_msgs::msg::WalkingParam_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_walking_module_msgs::msg::WalkingParam_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_walking_module_msgs::msg::WalkingParam_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_walking_module_msgs__msg__WalkingParam
    std::shared_ptr<op3_walking_module_msgs::msg::WalkingParam_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_walking_module_msgs__msg__WalkingParam
    std::shared_ptr<op3_walking_module_msgs::msg::WalkingParam_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WalkingParam_ & other) const
  {
    if (this->init_x_offset != other.init_x_offset) {
      return false;
    }
    if (this->init_y_offset != other.init_y_offset) {
      return false;
    }
    if (this->init_z_offset != other.init_z_offset) {
      return false;
    }
    if (this->init_roll_offset != other.init_roll_offset) {
      return false;
    }
    if (this->init_pitch_offset != other.init_pitch_offset) {
      return false;
    }
    if (this->init_yaw_offset != other.init_yaw_offset) {
      return false;
    }
    if (this->period_time != other.period_time) {
      return false;
    }
    if (this->dsp_ratio != other.dsp_ratio) {
      return false;
    }
    if (this->step_fb_ratio != other.step_fb_ratio) {
      return false;
    }
    if (this->x_move_amplitude != other.x_move_amplitude) {
      return false;
    }
    if (this->y_move_amplitude != other.y_move_amplitude) {
      return false;
    }
    if (this->z_move_amplitude != other.z_move_amplitude) {
      return false;
    }
    if (this->angle_move_amplitude != other.angle_move_amplitude) {
      return false;
    }
    if (this->move_aim_on != other.move_aim_on) {
      return false;
    }
    if (this->balance_enable != other.balance_enable) {
      return false;
    }
    if (this->balance_hip_roll_gain != other.balance_hip_roll_gain) {
      return false;
    }
    if (this->balance_knee_gain != other.balance_knee_gain) {
      return false;
    }
    if (this->balance_ankle_roll_gain != other.balance_ankle_roll_gain) {
      return false;
    }
    if (this->balance_ankle_pitch_gain != other.balance_ankle_pitch_gain) {
      return false;
    }
    if (this->y_swap_amplitude != other.y_swap_amplitude) {
      return false;
    }
    if (this->z_swap_amplitude != other.z_swap_amplitude) {
      return false;
    }
    if (this->arm_swing_gain != other.arm_swing_gain) {
      return false;
    }
    if (this->pelvis_offset != other.pelvis_offset) {
      return false;
    }
    if (this->hip_pitch_offset != other.hip_pitch_offset) {
      return false;
    }
    if (this->p_gain != other.p_gain) {
      return false;
    }
    if (this->i_gain != other.i_gain) {
      return false;
    }
    if (this->d_gain != other.d_gain) {
      return false;
    }
    return true;
  }
  bool operator!=(const WalkingParam_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WalkingParam_

// alias to use template instance with default allocator
using WalkingParam =
  op3_walking_module_msgs::msg::WalkingParam_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace op3_walking_module_msgs

#endif  // OP3_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__STRUCT_HPP_
