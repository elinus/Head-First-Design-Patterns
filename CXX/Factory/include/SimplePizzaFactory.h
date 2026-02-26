#pragma once

#include "Pizza.h"
#include <memory>
#include <string>

class SimplePizzaFactory {
public:
  static std::unique_ptr<Pizza> createPizza(const std::string& type);
};

