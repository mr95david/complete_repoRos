// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from solver_untils:msg/MotorOrder.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__MOTOR_ORDER__STRUCT_H_
#define SOLVER_UNTILS__MSG__DETAIL__MOTOR_ORDER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorOrder in the package solver_untils.
/**
  * Mensaje para enviar un valor entero como orden de velocidad a los motores.
 */
typedef struct solver_untils__msg__MotorOrder
{
  int16_t m_value_1;
  int16_t m_value_2;
} solver_untils__msg__MotorOrder;

// Struct for a sequence of solver_untils__msg__MotorOrder.
typedef struct solver_untils__msg__MotorOrder__Sequence
{
  solver_untils__msg__MotorOrder * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} solver_untils__msg__MotorOrder__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOLVER_UNTILS__MSG__DETAIL__MOTOR_ORDER__STRUCT_H_
