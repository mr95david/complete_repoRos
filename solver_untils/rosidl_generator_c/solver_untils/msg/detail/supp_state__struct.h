// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from solver_untils:msg/SuppState.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__SUPP_STATE__STRUCT_H_
#define SOLVER_UNTILS__MSG__DETAIL__SUPP_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SuppState in the package solver_untils.
/**
  * Interfaz para publicar el estado de alimentacion de los motores #
  * Considera 3 valores flotantes, correspondientes a los valores de #
  * alimentacion del driver del robot #
 */
typedef struct solver_untils__msg__SuppState
{
  rosidl_runtime_c__String data;
  float voltage;
  float currentmr;
  float currentml;
} solver_untils__msg__SuppState;

// Struct for a sequence of solver_untils__msg__SuppState.
typedef struct solver_untils__msg__SuppState__Sequence
{
  solver_untils__msg__SuppState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} solver_untils__msg__SuppState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOLVER_UNTILS__MSG__DETAIL__SUPP_STATE__STRUCT_H_
