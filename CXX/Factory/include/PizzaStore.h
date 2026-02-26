#pragma once

#include "Pizza.h"
#include "SimplePizzaFactory.h"
#include <memory>
#include <string>

class PizzaStore {
public:
  explicit PizzaStore(std::unique_ptr<SimplePizzaFactory> simplePizzaFactory);
  std::unique_ptr<Pizza> orderPizza(std::string type);
private:
  std::unique_ptr<SimplePizzaFactory> factory_;
};

