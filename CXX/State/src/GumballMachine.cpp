#include "GumballMachine.h"
#include "HasQuarterState.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"
#include "SoldState.h"
#include "State.h"

#include <iostream>

GumballMachine::GumballMachine(int numberGumballs)
    : soldOutState_(std::make_unique<SoldOutState>(*this))
    , noQuarterState_(std::make_unique<NoQuarterState>(*this))
    , hasQuarterState_(std::make_unique<HasQuarterState>(*this))
    , soldState_(std::make_unique<SoldState>(*this))
    , currentState_(numberGumballs > 0 ? *noQuarterState_ : *soldOutState_)
    , count_(numberGumballs)
{}

void GumballMachine::insertQuarter() const { currentState_.get().insertQuarter(); }

void GumballMachine::ejectQuarter() const { currentState_.get().ejectQuarter(); }

void GumballMachine::turnCrank() const
{
  currentState_.get().turnCrank();
  currentState_.get().dispense();
}

void GumballMachine::releaseBall() {
  std::cout << "A gumball comes rolling out the slot...\n";
  if (count_ > 0) {
    --count_;
  }
}

int GumballMachine::getCount() const { return count_; }

void GumballMachine::refill(const int count) {
  count_ += count;
  std::cout << "The gumball machine was just refilled; its new count is: "
            << count_ << "\n";
  currentState_.get().refill();
}

void GumballMachine::setState(State& newState) {
  currentState_ = newState;
}

State& GumballMachine::getState()           const { return currentState_.get(); }
State& GumballMachine::getSoldOutState()    const { return *soldOutState_;      }
State& GumballMachine::getNoQuarterState()  const { return *noQuarterState_;    }
State& GumballMachine::getHasQuarterState() const { return *hasQuarterState_;   }
State& GumballMachine::getSoldState()       const { return *soldState_;         }

std::ostream& operator<<(std::ostream& os, const GumballMachine& gm) {
  os << "\nMighty Gumball, Inc."
     << "\nC++ - enabled Standing Gumball Model #2019"
     << "\nInventory: " << gm.count_ << " gumball"
     << (gm.count_ != 1 ? "s" : "")
     << "\nMachine is " << gm.currentState_.get().toString()
     << "\n";
  return os;
}
