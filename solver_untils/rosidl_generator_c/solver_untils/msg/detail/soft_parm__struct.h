// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from solver_untils:msg/SoftParm.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__SOFT_PARM__STRUCT_H_
#define SOLVER_UNTILS__MSG__DETAIL__SOFT_PARM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SoftParm in the package solver_untils.
/**
  * Interfaz que visualiza los valores y configuraciones actuales del software #
  * del drive, en el momento en que se esta utilizando. #
 */
typedef struct solver_untils__msg__SoftParm
{
  int16_t version;
  int16_t mode;
  int16_t acceleration;
} solver_untils__msg__SoftParm;

// Struct for a sequence of solver_untils__msg__SoftParm.
typedef struct solver_untils__msg__SoftParm__Sequence
{
  solver_untils__msg__SoftParm * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} solver_untils__msg__SoftParm__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOLVER_UNTILS__MSG__DETAIL__SOFT_PARM__STRUCT_H_
