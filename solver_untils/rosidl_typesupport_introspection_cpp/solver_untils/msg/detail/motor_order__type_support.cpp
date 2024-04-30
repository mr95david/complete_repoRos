// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from solver_untils:msg/MotorOrder.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "solver_untils/msg/detail/motor_order__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace solver_untils
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotorOrder_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) solver_untils::msg::MotorOrder(_init);
}

void MotorOrder_fini_function(void * message_memory)
{
  auto typed_message = static_cast<solver_untils::msg::MotorOrder *>(message_memory);
  typed_message->~MotorOrder();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorOrder_message_member_array[2] = {
  {
    "m_value_1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(solver_untils::msg::MotorOrder, m_value_1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "m_value_2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(solver_untils::msg::MotorOrder, m_value_2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorOrder_message_members = {
  "solver_untils::msg",  // message namespace
  "MotorOrder",  // message name
  2,  // number of fields
  sizeof(solver_untils::msg::MotorOrder),
  MotorOrder_message_member_array,  // message members
  MotorOrder_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorOrder_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorOrder_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorOrder_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace solver_untils


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<solver_untils::msg::MotorOrder>()
{
  return &::solver_untils::msg::rosidl_typesupport_introspection_cpp::MotorOrder_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, solver_untils, msg, MotorOrder)() {
  return &::solver_untils::msg::rosidl_typesupport_introspection_cpp::MotorOrder_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
