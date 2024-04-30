// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from solver_untils:msg/SoftParm.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__SOFT_PARM__STRUCT_HPP_
#define SOLVER_UNTILS__MSG__DETAIL__SOFT_PARM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__solver_untils__msg__SoftParm __attribute__((deprecated))
#else
# define DEPRECATED__solver_untils__msg__SoftParm __declspec(deprecated)
#endif

namespace solver_untils
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SoftParm_
{
  using Type = SoftParm_<ContainerAllocator>;

  explicit SoftParm_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version = 0;
      this->mode = 0;
      this->acceleration = 0;
    }
  }

  explicit SoftParm_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version = 0;
      this->mode = 0;
      this->acceleration = 0;
    }
  }

  // field types and members
  using _version_type =
    int16_t;
  _version_type version;
  using _mode_type =
    int16_t;
  _mode_type mode;
  using _acceleration_type =
    int16_t;
  _acceleration_type acceleration;

  // setters for named parameter idiom
  Type & set__version(
    const int16_t & _arg)
  {
    this->version = _arg;
    return *this;
  }
  Type & set__mode(
    const int16_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__acceleration(
    const int16_t & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    solver_untils::msg::SoftParm_<ContainerAllocator> *;
  using ConstRawPtr =
    const solver_untils::msg::SoftParm_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<solver_untils::msg::SoftParm_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<solver_untils::msg::SoftParm_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      solver_untils::msg::SoftParm_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<solver_untils::msg::SoftParm_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      solver_untils::msg::SoftParm_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<solver_untils::msg::SoftParm_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<solver_untils::msg::SoftParm_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<solver_untils::msg::SoftParm_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__solver_untils__msg__SoftParm
    std::shared_ptr<solver_untils::msg::SoftParm_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__solver_untils__msg__SoftParm
    std::shared_ptr<solver_untils::msg::SoftParm_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SoftParm_ & other) const
  {
    if (this->version != other.version) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const SoftParm_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SoftParm_

// alias to use template instance with default allocator
using SoftParm =
  solver_untils::msg::SoftParm_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace solver_untils

#endif  // SOLVER_UNTILS__MSG__DETAIL__SOFT_PARM__STRUCT_HPP_
