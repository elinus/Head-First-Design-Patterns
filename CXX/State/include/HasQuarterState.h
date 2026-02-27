#pragma once

#include "State.h"

#include <string_view>

class GumballMachine;

class HasQuarterState : public State {
public:
  explicit HasQuarterState(GumballMachine& gumballMachine);

  void insertQuarter() override;
  void ejectQuarter()  override;
  void turnCrank()     override;
  void dispense()      override;
  void refill()        override;

  std::string_view toString() const override;

private:
  GumballMachine& gumballMachine_;
};
