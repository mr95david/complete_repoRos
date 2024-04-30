// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from solver_untils:msg/SuppState.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__SUPP_STATE__STRUCT_HPP_
#define SOLVER_UNTILS__MSG__DETAIL__SUPP_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__solver_untils__msg__SuppState __attribute__((deprecated))
#else
# define DEPRECATED__solver_untils__msg__SuppState __declspec(deprecated)
#endif

namespace solver_untils
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SuppState_
{
  using Type = SuppState_<ContainerAllocator>;

  explicit SuppState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
      this->voltage = 0.0f;
      this->currentmr = 0.0f;
      this->currentml = 0.0f;
    }
  }

  explicit SuppState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
      this->voltage = 0.0f;
      this->currentmr = 0.0f;
      this->currentml = 0.0f;
    }
  }

  // field types and members
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_type data;
  using _voltage_type =
    float;
  _voltage_type voltage;
  using _currentmr_type =
    float;
  _currentmr_type currentmr;
  using _currentml_type =
    float;
  _currentml_type currentml;

  // setters for named parameter idiom
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__voltage(
    const float & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__currentmr(
    const float & _arg)
  {
    this->currentmr = _arg;
    return *this;
  }
  Type & set__currentml(
    const float & _arg)
  {
    this->currentml = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    solver_untils::msg::SuppState_<ContainerAllocator> *;
  using ConstRawPtr =
    const solver_untils::msg::SuppState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<solver_untils::msg::SuppState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<solver_untils::msg::SuppState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      solver_untils::msg::SuppState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<solver_untils::msg::SuppState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      solver_untils::msg::SuppState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<solver_untils::msg::SuppState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<solver_untils::msg::SuppState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<solver_untils::msg::SuppState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__solver_untils__msg__SuppState
    std::shared_ptr<solver_untils::msg::SuppState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__solver_untils__msg__SuppState
    std::shared_ptr<solver_untils::msg::SuppState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SuppState_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->currentmr != other.currentmr) {
      return false;
    }
    if (this->currentml != other.currentml) {
      return false;
    }
    return true;
  }
  bool operator!=(const SuppState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SuppState_

// alias to use template instance with default allocator
using SuppState =
  solver_untils::msg::SuppState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace solver_untils

#endif  // SOLVER_UNTILS__MSG__DETAIL__SUPP_STATE__STRUCT_HPP_
