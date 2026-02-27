#pragma once

#include "State.h"
#include <string>
#include <memory>

class GumballMachine {
public:
  explicit GumballMachine(int numberGumballs);
  void insertQuarter() const;
  void ejectQuarter() const;
  void turnCrank() const;
  void releaseBall();
  [[nodiscard]] int getCount() const;
  void refill(int count);
  void setState(State& newState);
  [[nodiscard]] State& getState() const;
  [[nodiscard]] State& getSoldOutState() const;
  [[nodiscard]] State& getNoQuarterState() const;
  [[nodiscard]] State& getHasQuarterState() const;
  [[nodiscard]] State& getSoldState() const;
  [[nodiscard]] std::string toString() const;
  friend std::ostream& operator<<(std::ostream& os, const GumballMachine& gm);

private:
  // Owned states — lifetime tied to this machine
  std::unique_ptr<State> soldOutState_;
  std::unique_ptr<State> noQuarterState_;
  std::unique_ptr<State> hasQuarterState_;
  std::unique_ptr<State> soldState_;

  // Non-owning reference to whichever state is active
  std::reference_wrapper<State> currentState_;

  int count_;
};

std::ostream& operator<<(std::ostream& os, const GumballMachine& gm);
