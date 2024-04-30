// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from solver_untils:msg/SoftParm.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__SOFT_PARM__BUILDER_HPP_
#define SOLVER_UNTILS__MSG__DETAIL__SOFT_PARM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "solver_untils/msg/detail/soft_parm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace solver_untils
{

namespace msg
{

namespace builder
{

class Init_SoftParm_acceleration
{
public:
  explicit Init_SoftParm_acceleration(::solver_untils::msg::SoftParm & msg)
  : msg_(msg)
  {}
  ::solver_untils::msg::SoftParm acceleration(::solver_untils::msg::SoftParm::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::solver_untils::msg::SoftParm msg_;
};

class Init_SoftParm_mode
{
public:
  explicit Init_SoftParm_mode(::solver_untils::msg::SoftParm & msg)
  : msg_(msg)
  {}
  Init_SoftParm_acceleration mode(::solver_untils::msg::SoftParm::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_SoftParm_acceleration(msg_);
  }

private:
  ::solver_untils::msg::SoftParm msg_;
};

class Init_SoftParm_version
{
public:
  Init_SoftParm_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SoftParm_mode version(::solver_untils::msg::SoftParm::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_SoftParm_mode(msg_);
  }

private:
  ::solver_untils::msg::SoftParm msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::solver_untils::msg::SoftParm>()
{
  return solver_untils::msg::builder::Init_SoftParm_version();
}

}  // namespace solver_untils

#endif  // SOLVER_UNTILS__MSG__DETAIL__SOFT_PARM__BUILDER_HPP_
