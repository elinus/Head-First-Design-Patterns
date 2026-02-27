#include "NoQuarterState.h"
#include "GumballMachine.h"

#include <iostream>

NoQuarterState::NoQuarterState(GumballMachine& gumballMachine)
    : gumballMachine_(gumballMachine)
{}

void NoQuarterState::insertQuarter() {
  std::cout << "You inserted a quarter\n";
  gumballMachine_.setState(gumballMachine_.getHasQuarterState());
}

void NoQuarterState::ejectQuarter() {
  std::cout << "You haven't inserted a quarter\n";
}

void NoQuarterState::turnCrank() {
  std::cout << "You turned, but there's no quarter\n";
}

void NoQuarterState::dispense() {
  std::cout << "You need to pay first\n";
}

void NoQuarterState::refill() {}

std::string_view NoQuarterState::toString() const {
  return "waiting for quarter";
}
