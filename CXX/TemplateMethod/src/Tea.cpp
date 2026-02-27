#include "Tea.h"

#include <iostream>

void Tea::brew() { std::cout << "Steeping the tea" << std::endl; }

void Tea::addCondiments() { std::cout << "Adding Lemon" << std::endl; }

bool Tea::customerWantsCondiments() {
  const auto answer = getUserInput("Would you like lemon with your tea (y/n)? ");
  return std::tolower(static_cast<unsigned char>(answer[0])) == 'y';
}
