// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from solver_untils:msg/RobotGeneralP.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__ROBOT_GENERAL_P__STRUCT_HPP_
#define SOLVER_UNTILS__MSG__DETAIL__ROBOT_GENERAL_P__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__solver_untils__msg__RobotGeneralP __attribute__((deprecated))
#else
# define DEPRECATED__solver_untils__msg__RobotGeneralP __declspec(deprecated)
#endif

namespace solver_untils
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotGeneralP_
{
  using Type = RobotGeneralP_<ContainerAllocator>;

  explicit RobotGeneralP_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->statedata = "";
      this->version = 0;
      this->mode = 0;
      this->aceleration = 0;
      this->regulatorstate = "";
      this->voltage = 0.0f;
    }
  }

  explicit RobotGeneralP_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : statedata(_alloc),
    regulatorstate(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->statedata = "";
      this->version = 0;
      this->mode = 0;
      this->aceleration = 0;
      this->regulatorstate = "";
      this->voltage = 0.0f;
    }
  }

  // field types and members
  using _statedata_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _statedata_type statedata;
  using _version_type =
    int16_t;
  _version_type version;
  using _mode_type =
    int16_t;
  _mode_type mode;
  using _aceleration_type =
    int16_t;
  _aceleration_type aceleration;
  using _regulatorstate_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _regulatorstate_type regulatorstate;
  using _voltage_type =
    float;
  _voltage_type voltage;

  // setters for named parameter idiom
  Type & set__statedata(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->statedata = _arg;
    return *this;
  }
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
  Type & set__aceleration(
    const int16_t & _arg)
  {
    this->aceleration = _arg;
    return *this;
  }
  Type & set__regulatorstate(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->regulatorstate = _arg;
    return *this;
  }
  Type & set__voltage(
    const float & _arg)
  {
    this->voltage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    solver_untils::msg::RobotGeneralP_<ContainerAllocator> *;
  using ConstRawPtr =
    const solver_untils::msg::RobotGeneralP_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<solver_untils::msg::RobotGeneralP_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<solver_untils::msg::RobotGeneralP_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      solver_untils::msg::RobotGeneralP_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<solver_untils::msg::RobotGeneralP_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      solver_untils::msg::RobotGeneralP_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<solver_untils::msg::RobotGeneralP_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<solver_untils::msg::RobotGeneralP_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<solver_untils::msg::RobotGeneralP_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__solver_untils__msg__RobotGeneralP
    std::shared_ptr<solver_untils::msg::RobotGeneralP_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__solver_untils__msg__RobotGeneralP
    std::shared_ptr<solver_untils::msg::RobotGeneralP_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotGeneralP_ & other) const
  {
    if (this->statedata != other.statedata) {
      return false;
    }
    if (this->version != other.version) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->aceleration != other.aceleration) {
      return false;
    }
    if (this->regulatorstate != other.regulatorstate) {
      return false;
    }
    if (this->voltage != other.voltage) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotGeneralP_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotGeneralP_

// alias to use template instance with default allocator
using RobotGeneralP =
  solver_untils::msg::RobotGeneralP_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace solver_untils

#endif  // SOLVER_UNTILS__MSG__DETAIL__ROBOT_GENERAL_P__STRUCT_HPP_
