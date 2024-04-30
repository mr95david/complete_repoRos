// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from solver_untils:msg/MotorOrder.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__MOTOR_ORDER__TRAITS_HPP_
#define SOLVER_UNTILS__MSG__DETAIL__MOTOR_ORDER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "solver_untils/msg/detail/motor_order__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace solver_untils
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorOrder & msg,
  std::ostream & out)
{
  out << "{";
  // member: m_value_1
  {
    out << "m_value_1: ";
    rosidl_generator_traits::value_to_yaml(msg.m_value_1, out);
    out << ", ";
  }

  // member: m_value_2
  {
    out << "m_value_2: ";
    rosidl_generator_traits::value_to_yaml(msg.m_value_2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorOrder & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: m_value_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_value_1: ";
    rosidl_generator_traits::value_to_yaml(msg.m_value_1, out);
    out << "\n";
  }

  // member: m_value_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_value_2: ";
    rosidl_generator_traits::value_to_yaml(msg.m_value_2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorOrder & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace solver_untils

namespace rosidl_generator_traits
{

[[deprecated("use solver_untils::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const solver_untils::msg::MotorOrder & msg,
  std::ostream & out, size_t indentation = 0)
{
  solver_untils::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use solver_untils::msg::to_yaml() instead")]]
inline std::string to_yaml(const solver_untils::msg::MotorOrder & msg)
{
  return solver_untils::msg::to_yaml(msg);
}

template<>
inline const char * data_type<solver_untils::msg::MotorOrder>()
{
  return "solver_untils::msg::MotorOrder";
}

template<>
inline const char * name<solver_untils::msg::MotorOrder>()
{
  return "solver_untils/msg/MotorOrder";
}

template<>
struct has_fixed_size<solver_untils::msg::MotorOrder>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<solver_untils::msg::MotorOrder>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<solver_untils::msg::MotorOrder>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SOLVER_UNTILS__MSG__DETAIL__MOTOR_ORDER__TRAITS_HPP_
