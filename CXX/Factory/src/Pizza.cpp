#include "Pizza.h"

#include <iostream>
#include <sstream>

std::string Pizza::getName() { return name_; }

void Pizza::logAction(std::string_view action) const {
    std::cout << action << " " << name_ << "\n";
}

void Pizza::prepare() { logAction("Preparing"); }
void Pizza::bake()    { logAction("Baking");    }
void Pizza::cut()     { logAction("Cutting");   }
void Pizza::box()     { logAction("Boxing");    }

std::string Pizza::toString() const {
  std::ostringstream oss;
  oss << "---- " << name_ << " ----\n"
      << dough_ << "\n"
      << sauce_ << "\n";
  for (const auto& topping : toppings_) {
    oss << topping << "\n";
  }
  return oss.str();
}
