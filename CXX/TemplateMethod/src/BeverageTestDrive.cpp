#include "Coffee.h"
#include "Tea.h"

#include <iostream>

int main() {
  const auto tea    = std::make_unique<Tea>();
  const auto coffee = std::make_unique<Coffee>();

  std::cout << "\nMaking tea...\n";
  tea->prepareRecipe();

  std::cout << "\nMaking Coffee...\n";
  coffee->prepareRecipe();

  return 0;
}
