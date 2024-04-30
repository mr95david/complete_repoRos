// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from solver_untils:msg/SuppState.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__SUPP_STATE__BUILDER_HPP_
#define SOLVER_UNTILS__MSG__DETAIL__SUPP_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "solver_untils/msg/detail/supp_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace solver_untils
{

namespace msg
{

namespace builder
{

class Init_SuppState_currentml
{
public:
  explicit Init_SuppState_currentml(::solver_untils::msg::SuppState & msg)
  : msg_(msg)
  {}
  ::solver_untils::msg::SuppState currentml(::solver_untils::msg::SuppState::_currentml_type arg)
  {
    msg_.currentml = std::move(arg);
    return std::move(msg_);
  }

private:
  ::solver_untils::msg::SuppState msg_;
};

class Init_SuppState_currentmr
{
public:
  explicit Init_SuppState_currentmr(::solver_untils::msg::SuppState & msg)
  : msg_(msg)
  {}
  Init_SuppState_currentml currentmr(::solver_untils::msg::SuppState::_currentmr_type arg)
  {
    msg_.currentmr = std::move(arg);
    return Init_SuppState_currentml(msg_);
  }

private:
  ::solver_untils::msg::SuppState msg_;
};

class Init_SuppState_voltage
{
public:
  explicit Init_SuppState_voltage(::solver_untils::msg::SuppState & msg)
  : msg_(msg)
  {}
  Init_SuppState_currentmr voltage(::solver_untils::msg::SuppState::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_SuppState_currentmr(msg_);
  }

private:
  ::solver_untils::msg::SuppState msg_;
};

class Init_SuppState_data
{
public:
  Init_SuppState_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SuppState_voltage data(::solver_untils::msg::SuppState::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_SuppState_voltage(msg_);
  }

private:
  ::solver_untils::msg::SuppState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::solver_untils::msg::SuppState>()
{
  return solver_untils::msg::builder::Init_SuppState_data();
}

}  // namespace solver_untils

#endif  // SOLVER_UNTILS__MSG__DETAIL__SUPP_STATE__BUILDER_HPP_
