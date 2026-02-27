#pragma once

#include <string_view>

class State {
public:
  virtual ~State() = default;
  virtual void insertQuarter() = 0;
  virtual void ejectQuarter() = 0;
  virtual void turnCrank() = 0;
  virtual void dispense() = 0;
  virtual void refill() = 0;
  [[nodiscard]] virtual std::string_view toString() const = 0;
};
