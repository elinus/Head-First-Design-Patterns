#include "CaffeineBeverage.h"

#include <iostream>

void CaffeineBeverage::prepareRecipe() {
  boilWater();
  brew();
  pourInCup();
  if (customerWantsCondiments()) {
    addCondiments();
  }
}

void CaffeineBeverage::boilWater() const {
  std::cout << "Boiling water" << std::endl;
}

void CaffeineBeverage::pourInCup() const {
  std::cout << "Pouring into cup" << std::endl;
}

bool CaffeineBeverage::customerWantsCondiments() {
  return true; // Default hook: always add condiments
}

std::string CaffeineBeverage::getUserInput(const std::string& prompt) const {
  std::cout << prompt;
  std::string answer;
  std::cin >> answer;
  return answer.empty() ? "no" : answer;
}

