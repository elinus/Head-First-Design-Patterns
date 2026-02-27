#pragma once

#include <string>

class CaffeineBeverage {
public:
  virtual ~CaffeineBeverage() = default;

  // Template method
  void prepareRecipe();

  // Primitive operations
  virtual void brew() = 0;
  virtual void addCondiments() = 0;

  void boilWater() const;
  void pourInCup() const;

  virtual bool customerWantsCondiments();

protected:
  [[nodiscard]] std::string getUserInput(const std::string& prompt) const;
};
