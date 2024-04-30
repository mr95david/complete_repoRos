// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from solver_untils:msg/MotorOrder.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "solver_untils/msg/detail/motor_order__rosidl_typesupport_introspection_c.h"
#include "solver_untils/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "solver_untils/msg/detail/motor_order__functions.h"
#include "solver_untils/msg/detail/motor_order__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void solver_untils__msg__MotorOrder__rosidl_typesupport_introspection_c__MotorOrder_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  solver_untils__msg__MotorOrder__init(message_memory);
}

void solver_untils__msg__MotorOrder__rosidl_typesupport_introspection_c__MotorOrder_fini_function(void * message_memory)
{
  solver_untils__msg__MotorOrder__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember solver_untils__msg__MotorOrder__rosidl_typesupport_introspection_c__MotorOrder_message_member_array[2] = {
  {
    "m_value_1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(solver_untils__msg__MotorOrder, m_value_1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "m_value_2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(solver_untils__msg__MotorOrder, m_value_2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers solver_untils__msg__MotorOrder__rosidl_typesupport_introspection_c__MotorOrder_message_members = {
  "solver_untils__msg",  // message namespace
  "MotorOrder",  // message name
  2,  // number of fields
  sizeof(solver_untils__msg__MotorOrder),
  solver_untils__msg__MotorOrder__rosidl_typesupport_introspection_c__MotorOrder_message_member_array,  // message members
  solver_untils__msg__MotorOrder__rosidl_typesupport_introspection_c__MotorOrder_init_function,  // function to initialize message memory (memory has to be allocated)
  solver_untils__msg__MotorOrder__rosidl_typesupport_introspection_c__MotorOrder_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t solver_untils__msg__MotorOrder__rosidl_typesupport_introspection_c__MotorOrder_message_type_support_handle = {
  0,
  &solver_untils__msg__MotorOrder__rosidl_typesupport_introspection_c__MotorOrder_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_solver_untils
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, solver_untils, msg, MotorOrder)() {
  if (!solver_untils__msg__MotorOrder__rosidl_typesupport_introspection_c__MotorOrder_message_type_support_handle.typesupport_identifier) {
    solver_untils__msg__MotorOrder__rosidl_typesupport_introspection_c__MotorOrder_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &solver_untils__msg__MotorOrder__rosidl_typesupport_introspection_c__MotorOrder_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
