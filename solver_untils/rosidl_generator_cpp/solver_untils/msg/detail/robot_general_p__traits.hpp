// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from solver_untils:msg/RobotGeneralP.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__ROBOT_GENERAL_P__TRAITS_HPP_
#define SOLVER_UNTILS__MSG__DETAIL__ROBOT_GENERAL_P__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "solver_untils/msg/detail/robot_general_p__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace solver_untils
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotGeneralP & msg,
  std::ostream & out)
{
  out << "{";
  // member: statedata
  {
    out << "statedata: ";
    rosidl_generator_traits::value_to_yaml(msg.statedata, out);
    out << ", ";
  }

  // member: version
  {
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: aceleration
  {
    out << "aceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.aceleration, out);
    out << ", ";
  }

  // member: regulatorstate
  {
    out << "regulatorstate: ";
    rosidl_generator_traits::value_to_yaml(msg.regulatorstate, out);
    out << ", ";
  }

  // member: voltage
  {
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotGeneralP & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: statedata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "statedata: ";
    rosidl_generator_traits::value_to_yaml(msg.statedata, out);
    out << "\n";
  }

  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: aceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.aceleration, out);
    out << "\n";
  }

  // member: regulatorstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "regulatorstate: ";
    rosidl_generator_traits::value_to_yaml(msg.regulatorstate, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotGeneralP & msg, bool use_flow_style = false)
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
  const solver_untils::msg::RobotGeneralP & msg,
  std::ostream & out, size_t indentation = 0)
{
  solver_untils::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use solver_untils::msg::to_yaml() instead")]]
inline std::string to_yaml(const solver_untils::msg::RobotGeneralP & msg)
{
  return solver_untils::msg::to_yaml(msg);
}

template<>
inline const char * data_type<solver_untils::msg::RobotGeneralP>()
{
  return "solver_untils::msg::RobotGeneralP";
}

template<>
inline const char * name<solver_untils::msg::RobotGeneralP>()
{
  return "solver_untils/msg/RobotGeneralP";
}

template<>
struct has_fixed_size<solver_untils::msg::RobotGeneralP>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<solver_untils::msg::RobotGeneralP>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<solver_untils::msg::RobotGeneralP>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SOLVER_UNTILS__MSG__DETAIL__ROBOT_GENERAL_P__TRAITS_HPP_
