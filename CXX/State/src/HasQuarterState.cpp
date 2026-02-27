#include "HasQuarterState.h"
#include "GumballMachine.h"

#include <iostream>

HasQuarterState::HasQuarterState(GumballMachine& gumballMachine)
    : gumballMachine_(gumballMachine)
{}

void HasQuarterState::insertQuarter() {
  std::cout << "You can't insert another quarter\n";
}

void HasQuarterState::ejectQuarter() {
  std::cout << "Quarter returned\n";
  gumballMachine_.setState(gumballMachine_.getNoQuarterState());
}

void HasQuarterState::turnCrank() {
  std::cout << "You turned...\n";
  gumballMachine_.setState(gumballMachine_.getSoldState());
}

void HasQuarterState::dispense() {
  std::cout << "No gumball dispensed\n";
}

void HasQuarterState::refill() {}

std::string_view HasQuarterState::toString() const {
  return "waiting for turn of crank";
}
