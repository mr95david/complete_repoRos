// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from solver_untils:msg/SuppState.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__SUPP_STATE__TRAITS_HPP_
#define SOLVER_UNTILS__MSG__DETAIL__SUPP_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "solver_untils/msg/detail/supp_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace solver_untils
{

namespace msg
{

inline void to_flow_style_yaml(
  const SuppState & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << ", ";
  }

  // member: voltage
  {
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << ", ";
  }

  // member: currentmr
  {
    out << "currentmr: ";
    rosidl_generator_traits::value_to_yaml(msg.currentmr, out);
    out << ", ";
  }

  // member: currentml
  {
    out << "currentml: ";
    rosidl_generator_traits::value_to_yaml(msg.currentml, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SuppState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }

  // member: voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << "\n";
  }

  // member: currentmr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "currentmr: ";
    rosidl_generator_traits::value_to_yaml(msg.currentmr, out);
    out << "\n";
  }

  // member: currentml
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "currentml: ";
    rosidl_generator_traits::value_to_yaml(msg.currentml, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SuppState & msg, bool use_flow_style = false)
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
  const solver_untils::msg::SuppState & msg,
  std::ostream & out, size_t indentation = 0)
{
  solver_untils::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use solver_untils::msg::to_yaml() instead")]]
inline std::string to_yaml(const solver_untils::msg::SuppState & msg)
{
  return solver_untils::msg::to_yaml(msg);
}

template<>
inline const char * data_type<solver_untils::msg::SuppState>()
{
  return "solver_untils::msg::SuppState";
}

template<>
inline const char * name<solver_untils::msg::SuppState>()
{
  return "solver_untils/msg/SuppState";
}

template<>
struct has_fixed_size<solver_untils::msg::SuppState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<solver_untils::msg::SuppState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<solver_untils::msg::SuppState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SOLVER_UNTILS__MSG__DETAIL__SUPP_STATE__TRAITS_HPP_
