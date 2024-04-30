// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from solver_untils:msg/MotorOrder.idl
// generated code does not contain a copyright notice
#include "solver_untils/msg/detail/motor_order__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
solver_untils__msg__MotorOrder__init(solver_untils__msg__MotorOrder * msg)
{
  if (!msg) {
    return false;
  }
  // m_value_1
  // m_value_2
  return true;
}

void
solver_untils__msg__MotorOrder__fini(solver_untils__msg__MotorOrder * msg)
{
  if (!msg) {
    return;
  }
  // m_value_1
  // m_value_2
}

bool
solver_untils__msg__MotorOrder__are_equal(const solver_untils__msg__MotorOrder * lhs, const solver_untils__msg__MotorOrder * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // m_value_1
  if (lhs->m_value_1 != rhs->m_value_1) {
    return false;
  }
  // m_value_2
  if (lhs->m_value_2 != rhs->m_value_2) {
    return false;
  }
  return true;
}

bool
solver_untils__msg__MotorOrder__copy(
  const solver_untils__msg__MotorOrder * input,
  solver_untils__msg__MotorOrder * output)
{
  if (!input || !output) {
    return false;
  }
  // m_value_1
  output->m_value_1 = input->m_value_1;
  // m_value_2
  output->m_value_2 = input->m_value_2;
  return true;
}

solver_untils__msg__MotorOrder *
solver_untils__msg__MotorOrder__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  solver_untils__msg__MotorOrder * msg = (solver_untils__msg__MotorOrder *)allocator.allocate(sizeof(solver_untils__msg__MotorOrder), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(solver_untils__msg__MotorOrder));
  bool success = solver_untils__msg__MotorOrder__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
solver_untils__msg__MotorOrder__destroy(solver_untils__msg__MotorOrder * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    solver_untils__msg__MotorOrder__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
solver_untils__msg__MotorOrder__Sequence__init(solver_untils__msg__MotorOrder__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  solver_untils__msg__MotorOrder * data = NULL;

  if (size) {
    data = (solver_untils__msg__MotorOrder *)allocator.zero_allocate(size, sizeof(solver_untils__msg__MotorOrder), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = solver_untils__msg__MotorOrder__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        solver_untils__msg__MotorOrder__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
solver_untils__msg__MotorOrder__Sequence__fini(solver_untils__msg__MotorOrder__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      solver_untils__msg__MotorOrder__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

solver_untils__msg__MotorOrder__Sequence *
solver_untils__msg__MotorOrder__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  solver_untils__msg__MotorOrder__Sequence * array = (solver_untils__msg__MotorOrder__Sequence *)allocator.allocate(sizeof(solver_untils__msg__MotorOrder__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = solver_untils__msg__MotorOrder__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
solver_untils__msg__MotorOrder__Sequence__destroy(solver_untils__msg__MotorOrder__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    solver_untils__msg__MotorOrder__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
solver_untils__msg__MotorOrder__Sequence__are_equal(const solver_untils__msg__MotorOrder__Sequence * lhs, const solver_untils__msg__MotorOrder__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!solver_untils__msg__MotorOrder__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
solver_untils__msg__MotorOrder__Sequence__copy(
  const solver_untils__msg__MotorOrder__Sequence * input,
  solver_untils__msg__MotorOrder__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(solver_untils__msg__MotorOrder);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    solver_untils__msg__MotorOrder * data =
      (solver_untils__msg__MotorOrder *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!solver_untils__msg__MotorOrder__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          solver_untils__msg__MotorOrder__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!solver_untils__msg__MotorOrder__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
