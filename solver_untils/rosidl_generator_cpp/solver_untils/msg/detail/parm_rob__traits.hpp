// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from solver_untils:msg/ParmRob.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__PARM_ROB__TRAITS_HPP_
#define SOLVER_UNTILS__MSG__DETAIL__PARM_ROB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "solver_untils/msg/detail/parm_rob__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace solver_untils
{

namespace msg
{

inline void to_flow_style_yaml(
  const ParmRob & msg,
  std::ostream & out)
{
  out << "{";
  // member: speed_mr
  {
    out << "speed_mr: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_mr, out);
    out << ", ";
  }

  // member: speed_ml
  {
    out << "speed_ml: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_ml, out);
    out << ", ";
  }

  // member: encoder_mr
  {
    out << "encoder_mr: ";
    rosidl_generator_traits::value_to_yaml(msg.encoder_mr, out);
    out << ", ";
  }

  // member: encoder_ml
  {
    out << "encoder_ml: ";
    rosidl_generator_traits::value_to_yaml(msg.encoder_ml, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ParmRob & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed_mr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_mr: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_mr, out);
    out << "\n";
  }

  // member: speed_ml
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_ml: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_ml, out);
    out << "\n";
  }

  // member: encoder_mr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encoder_mr: ";
    rosidl_generator_traits::value_to_yaml(msg.encoder_mr, out);
    out << "\n";
  }

  // member: encoder_ml
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encoder_ml: ";
    rosidl_generator_traits::value_to_yaml(msg.encoder_ml, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ParmRob & msg, bool use_flow_style = false)
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
  const solver_untils::msg::ParmRob & msg,
  std::ostream & out, size_t indentation = 0)
{
  solver_untils::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use solver_untils::msg::to_yaml() instead")]]
inline std::string to_yaml(const solver_untils::msg::ParmRob & msg)
{
  return solver_untils::msg::to_yaml(msg);
}

template<>
inline const char * data_type<solver_untils::msg::ParmRob>()
{
  return "solver_untils::msg::ParmRob";
}

template<>
inline const char * name<solver_untils::msg::ParmRob>()
{
  return "solver_untils/msg/ParmRob";
}

template<>
struct has_fixed_size<solver_untils::msg::ParmRob>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<solver_untils::msg::ParmRob>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<solver_untils::msg::ParmRob>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SOLVER_UNTILS__MSG__DETAIL__PARM_ROB__TRAITS_HPP_
