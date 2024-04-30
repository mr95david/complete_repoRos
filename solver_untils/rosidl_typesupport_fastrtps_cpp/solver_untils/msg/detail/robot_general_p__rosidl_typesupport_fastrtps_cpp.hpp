// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from solver_untils:msg/RobotGeneralP.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__ROBOT_GENERAL_P__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SOLVER_UNTILS__MSG__DETAIL__ROBOT_GENERAL_P__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "solver_untils/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "solver_untils/msg/detail/robot_general_p__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace solver_untils
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_solver_untils
cdr_serialize(
  const solver_untils::msg::RobotGeneralP & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_solver_untils
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  solver_untils::msg::RobotGeneralP & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_solver_untils
get_serialized_size(
  const solver_untils::msg::RobotGeneralP & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_solver_untils
max_serialized_size_RobotGeneralP(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace solver_untils

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_solver_untils
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, solver_untils, msg, RobotGeneralP)();

#ifdef __cplusplus
}
#endif

#endif  // SOLVER_UNTILS__MSG__DETAIL__ROBOT_GENERAL_P__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
