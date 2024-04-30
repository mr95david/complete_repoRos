// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from solver_untils:msg/ParmRob.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__PARM_ROB__STRUCT_HPP_
#define SOLVER_UNTILS__MSG__DETAIL__PARM_ROB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__solver_untils__msg__ParmRob __attribute__((deprecated))
#else
# define DEPRECATED__solver_untils__msg__ParmRob __declspec(deprecated)
#endif

namespace solver_untils
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ParmRob_
{
  using Type = ParmRob_<ContainerAllocator>;

  explicit ParmRob_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_mr = 0;
      this->speed_ml = 0;
      this->encoder_mr = 0ll;
      this->encoder_ml = 0ll;
    }
  }

  explicit ParmRob_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_mr = 0;
      this->speed_ml = 0;
      this->encoder_mr = 0ll;
      this->encoder_ml = 0ll;
    }
  }

  // field types and members
  using _speed_mr_type =
    int16_t;
  _speed_mr_type speed_mr;
  using _speed_ml_type =
    int16_t;
  _speed_ml_type speed_ml;
  using _encoder_mr_type =
    int64_t;
  _encoder_mr_type encoder_mr;
  using _encoder_ml_type =
    int64_t;
  _encoder_ml_type encoder_ml;

  // setters for named parameter idiom
  Type & set__speed_mr(
    const int16_t & _arg)
  {
    this->speed_mr = _arg;
    return *this;
  }
  Type & set__speed_ml(
    const int16_t & _arg)
  {
    this->speed_ml = _arg;
    return *this;
  }
  Type & set__encoder_mr(
    const int64_t & _arg)
  {
    this->encoder_mr = _arg;
    return *this;
  }
  Type & set__encoder_ml(
    const int64_t & _arg)
  {
    this->encoder_ml = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    solver_untils::msg::ParmRob_<ContainerAllocator> *;
  using ConstRawPtr =
    const solver_untils::msg::ParmRob_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<solver_untils::msg::ParmRob_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<solver_untils::msg::ParmRob_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      solver_untils::msg::ParmRob_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<solver_untils::msg::ParmRob_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      solver_untils::msg::ParmRob_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<solver_untils::msg::ParmRob_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<solver_untils::msg::ParmRob_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<solver_untils::msg::ParmRob_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__solver_untils__msg__ParmRob
    std::shared_ptr<solver_untils::msg::ParmRob_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__solver_untils__msg__ParmRob
    std::shared_ptr<solver_untils::msg::ParmRob_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParmRob_ & other) const
  {
    if (this->speed_mr != other.speed_mr) {
      return false;
    }
    if (this->speed_ml != other.speed_ml) {
      return false;
    }
    if (this->encoder_mr != other.encoder_mr) {
      return false;
    }
    if (this->encoder_ml != other.encoder_ml) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParmRob_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParmRob_

// alias to use template instance with default allocator
using ParmRob =
  solver_untils::msg::ParmRob_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace solver_untils

#endif  // SOLVER_UNTILS__MSG__DETAIL__PARM_ROB__STRUCT_HPP_
