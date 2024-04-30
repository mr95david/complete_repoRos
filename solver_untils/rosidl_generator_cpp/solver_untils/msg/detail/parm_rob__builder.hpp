// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from solver_untils:msg/ParmRob.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__PARM_ROB__BUILDER_HPP_
#define SOLVER_UNTILS__MSG__DETAIL__PARM_ROB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "solver_untils/msg/detail/parm_rob__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace solver_untils
{

namespace msg
{

namespace builder
{

class Init_ParmRob_encoder_ml
{
public:
  explicit Init_ParmRob_encoder_ml(::solver_untils::msg::ParmRob & msg)
  : msg_(msg)
  {}
  ::solver_untils::msg::ParmRob encoder_ml(::solver_untils::msg::ParmRob::_encoder_ml_type arg)
  {
    msg_.encoder_ml = std::move(arg);
    return std::move(msg_);
  }

private:
  ::solver_untils::msg::ParmRob msg_;
};

class Init_ParmRob_encoder_mr
{
public:
  explicit Init_ParmRob_encoder_mr(::solver_untils::msg::ParmRob & msg)
  : msg_(msg)
  {}
  Init_ParmRob_encoder_ml encoder_mr(::solver_untils::msg::ParmRob::_encoder_mr_type arg)
  {
    msg_.encoder_mr = std::move(arg);
    return Init_ParmRob_encoder_ml(msg_);
  }

private:
  ::solver_untils::msg::ParmRob msg_;
};

class Init_ParmRob_speed_ml
{
public:
  explicit Init_ParmRob_speed_ml(::solver_untils::msg::ParmRob & msg)
  : msg_(msg)
  {}
  Init_ParmRob_encoder_mr speed_ml(::solver_untils::msg::ParmRob::_speed_ml_type arg)
  {
    msg_.speed_ml = std::move(arg);
    return Init_ParmRob_encoder_mr(msg_);
  }

private:
  ::solver_untils::msg::ParmRob msg_;
};

class Init_ParmRob_speed_mr
{
public:
  Init_ParmRob_speed_mr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParmRob_speed_ml speed_mr(::solver_untils::msg::ParmRob::_speed_mr_type arg)
  {
    msg_.speed_mr = std::move(arg);
    return Init_ParmRob_speed_ml(msg_);
  }

private:
  ::solver_untils::msg::ParmRob msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::solver_untils::msg::ParmRob>()
{
  return solver_untils::msg::builder::Init_ParmRob_speed_mr();
}

}  // namespace solver_untils

#endif  // SOLVER_UNTILS__MSG__DETAIL__PARM_ROB__BUILDER_HPP_
