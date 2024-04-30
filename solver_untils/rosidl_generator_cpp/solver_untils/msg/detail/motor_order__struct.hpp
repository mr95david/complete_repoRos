// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from solver_untils:msg/MotorOrder.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__MOTOR_ORDER__STRUCT_HPP_
#define SOLVER_UNTILS__MSG__DETAIL__MOTOR_ORDER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__solver_untils__msg__MotorOrder __attribute__((deprecated))
#else
# define DEPRECATED__solver_untils__msg__MotorOrder __declspec(deprecated)
#endif

namespace solver_untils
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorOrder_
{
  using Type = MotorOrder_<ContainerAllocator>;

  explicit MotorOrder_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m_value_1 = 0;
      this->m_value_2 = 0;
    }
  }

  explicit MotorOrder_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m_value_1 = 0;
      this->m_value_2 = 0;
    }
  }

  // field types and members
  using _m_value_1_type =
    int16_t;
  _m_value_1_type m_value_1;
  using _m_value_2_type =
    int16_t;
  _m_value_2_type m_value_2;

  // setters for named parameter idiom
  Type & set__m_value_1(
    const int16_t & _arg)
  {
    this->m_value_1 = _arg;
    return *this;
  }
  Type & set__m_value_2(
    const int16_t & _arg)
  {
    this->m_value_2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    solver_untils::msg::MotorOrder_<ContainerAllocator> *;
  using ConstRawPtr =
    const solver_untils::msg::MotorOrder_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<solver_untils::msg::MotorOrder_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<solver_untils::msg::MotorOrder_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      solver_untils::msg::MotorOrder_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<solver_untils::msg::MotorOrder_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      solver_untils::msg::MotorOrder_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<solver_untils::msg::MotorOrder_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<solver_untils::msg::MotorOrder_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<solver_untils::msg::MotorOrder_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__solver_untils__msg__MotorOrder
    std::shared_ptr<solver_untils::msg::MotorOrder_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__solver_untils__msg__MotorOrder
    std::shared_ptr<solver_untils::msg::MotorOrder_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorOrder_ & other) const
  {
    if (this->m_value_1 != other.m_value_1) {
      return false;
    }
    if (this->m_value_2 != other.m_value_2) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorOrder_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorOrder_

// alias to use template instance with default allocator
using MotorOrder =
  solver_untils::msg::MotorOrder_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace solver_untils

#endif  // SOLVER_UNTILS__MSG__DETAIL__MOTOR_ORDER__STRUCT_HPP_
