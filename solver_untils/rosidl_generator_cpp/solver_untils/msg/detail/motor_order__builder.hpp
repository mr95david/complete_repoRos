// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from solver_untils:msg/MotorOrder.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__MOTOR_ORDER__BUILDER_HPP_
#define SOLVER_UNTILS__MSG__DETAIL__MOTOR_ORDER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "solver_untils/msg/detail/motor_order__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace solver_untils
{

namespace msg
{

namespace builder
{

class Init_MotorOrder_m_value_2
{
public:
  explicit Init_MotorOrder_m_value_2(::solver_untils::msg::MotorOrder & msg)
  : msg_(msg)
  {}
  ::solver_untils::msg::MotorOrder m_value_2(::solver_untils::msg::MotorOrder::_m_value_2_type arg)
  {
    msg_.m_value_2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::solver_untils::msg::MotorOrder msg_;
};

class Init_MotorOrder_m_value_1
{
public:
  Init_MotorOrder_m_value_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorOrder_m_value_2 m_value_1(::solver_untils::msg::MotorOrder::_m_value_1_type arg)
  {
    msg_.m_value_1 = std::move(arg);
    return Init_MotorOrder_m_value_2(msg_);
  }

private:
  ::solver_untils::msg::MotorOrder msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::solver_untils::msg::MotorOrder>()
{
  return solver_untils::msg::builder::Init_MotorOrder_m_value_1();
}

}  // namespace solver_untils

#endif  // SOLVER_UNTILS__MSG__DETAIL__MOTOR_ORDER__BUILDER_HPP_
