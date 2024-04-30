// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from solver_untils:msg/RobotGeneralP.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__ROBOT_GENERAL_P__BUILDER_HPP_
#define SOLVER_UNTILS__MSG__DETAIL__ROBOT_GENERAL_P__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "solver_untils/msg/detail/robot_general_p__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace solver_untils
{

namespace msg
{

namespace builder
{

class Init_RobotGeneralP_voltage
{
public:
  explicit Init_RobotGeneralP_voltage(::solver_untils::msg::RobotGeneralP & msg)
  : msg_(msg)
  {}
  ::solver_untils::msg::RobotGeneralP voltage(::solver_untils::msg::RobotGeneralP::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::solver_untils::msg::RobotGeneralP msg_;
};

class Init_RobotGeneralP_regulatorstate
{
public:
  explicit Init_RobotGeneralP_regulatorstate(::solver_untils::msg::RobotGeneralP & msg)
  : msg_(msg)
  {}
  Init_RobotGeneralP_voltage regulatorstate(::solver_untils::msg::RobotGeneralP::_regulatorstate_type arg)
  {
    msg_.regulatorstate = std::move(arg);
    return Init_RobotGeneralP_voltage(msg_);
  }

private:
  ::solver_untils::msg::RobotGeneralP msg_;
};

class Init_RobotGeneralP_aceleration
{
public:
  explicit Init_RobotGeneralP_aceleration(::solver_untils::msg::RobotGeneralP & msg)
  : msg_(msg)
  {}
  Init_RobotGeneralP_regulatorstate aceleration(::solver_untils::msg::RobotGeneralP::_aceleration_type arg)
  {
    msg_.aceleration = std::move(arg);
    return Init_RobotGeneralP_regulatorstate(msg_);
  }

private:
  ::solver_untils::msg::RobotGeneralP msg_;
};

class Init_RobotGeneralP_mode
{
public:
  explicit Init_RobotGeneralP_mode(::solver_untils::msg::RobotGeneralP & msg)
  : msg_(msg)
  {}
  Init_RobotGeneralP_aceleration mode(::solver_untils::msg::RobotGeneralP::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_RobotGeneralP_aceleration(msg_);
  }

private:
  ::solver_untils::msg::RobotGeneralP msg_;
};

class Init_RobotGeneralP_version
{
public:
  explicit Init_RobotGeneralP_version(::solver_untils::msg::RobotGeneralP & msg)
  : msg_(msg)
  {}
  Init_RobotGeneralP_mode version(::solver_untils::msg::RobotGeneralP::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_RobotGeneralP_mode(msg_);
  }

private:
  ::solver_untils::msg::RobotGeneralP msg_;
};

class Init_RobotGeneralP_statedata
{
public:
  Init_RobotGeneralP_statedata()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotGeneralP_version statedata(::solver_untils::msg::RobotGeneralP::_statedata_type arg)
  {
    msg_.statedata = std::move(arg);
    return Init_RobotGeneralP_version(msg_);
  }

private:
  ::solver_untils::msg::RobotGeneralP msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::solver_untils::msg::RobotGeneralP>()
{
  return solver_untils::msg::builder::Init_RobotGeneralP_statedata();
}

}  // namespace solver_untils

#endif  // SOLVER_UNTILS__MSG__DETAIL__ROBOT_GENERAL_P__BUILDER_HPP_
