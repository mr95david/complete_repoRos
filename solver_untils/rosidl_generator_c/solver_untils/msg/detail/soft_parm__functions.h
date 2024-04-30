// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from solver_untils:msg/SoftParm.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__SOFT_PARM__FUNCTIONS_H_
#define SOLVER_UNTILS__MSG__DETAIL__SOFT_PARM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "solver_untils/msg/rosidl_generator_c__visibility_control.h"

#include "solver_untils/msg/detail/soft_parm__struct.h"

/// Initialize msg/SoftParm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * solver_untils__msg__SoftParm
 * )) before or use
 * solver_untils__msg__SoftParm__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
bool
solver_untils__msg__SoftParm__init(solver_untils__msg__SoftParm * msg);

/// Finalize msg/SoftParm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
void
solver_untils__msg__SoftParm__fini(solver_untils__msg__SoftParm * msg);

/// Create msg/SoftParm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * solver_untils__msg__SoftParm__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
solver_untils__msg__SoftParm *
solver_untils__msg__SoftParm__create();

/// Destroy msg/SoftParm message.
/**
 * It calls
 * solver_untils__msg__SoftParm__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
void
solver_untils__msg__SoftParm__destroy(solver_untils__msg__SoftParm * msg);

/// Check for msg/SoftParm message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
bool
solver_untils__msg__SoftParm__are_equal(const solver_untils__msg__SoftParm * lhs, const solver_untils__msg__SoftParm * rhs);

/// Copy a msg/SoftParm message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
bool
solver_untils__msg__SoftParm__copy(
  const solver_untils__msg__SoftParm * input,
  solver_untils__msg__SoftParm * output);

/// Initialize array of msg/SoftParm messages.
/**
 * It allocates the memory for the number of elements and calls
 * solver_untils__msg__SoftParm__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
bool
solver_untils__msg__SoftParm__Sequence__init(solver_untils__msg__SoftParm__Sequence * array, size_t size);

/// Finalize array of msg/SoftParm messages.
/**
 * It calls
 * solver_untils__msg__SoftParm__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
void
solver_untils__msg__SoftParm__Sequence__fini(solver_untils__msg__SoftParm__Sequence * array);

/// Create array of msg/SoftParm messages.
/**
 * It allocates the memory for the array and calls
 * solver_untils__msg__SoftParm__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
solver_untils__msg__SoftParm__Sequence *
solver_untils__msg__SoftParm__Sequence__create(size_t size);

/// Destroy array of msg/SoftParm messages.
/**
 * It calls
 * solver_untils__msg__SoftParm__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
void
solver_untils__msg__SoftParm__Sequence__destroy(solver_untils__msg__SoftParm__Sequence * array);

/// Check for msg/SoftParm message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
bool
solver_untils__msg__SoftParm__Sequence__are_equal(const solver_untils__msg__SoftParm__Sequence * lhs, const solver_untils__msg__SoftParm__Sequence * rhs);

/// Copy an array of msg/SoftParm messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
bool
solver_untils__msg__SoftParm__Sequence__copy(
  const solver_untils__msg__SoftParm__Sequence * input,
  solver_untils__msg__SoftParm__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SOLVER_UNTILS__MSG__DETAIL__SOFT_PARM__FUNCTIONS_H_
