#include "Coffee.h"

#include <iostream>

void Coffee::brew() {
  std::cout << "Dripping Coffee through filter" << std::endl;
}

void Coffee::addCondiments() {
  std::cout << "Adding Sugar and Milk" << std::endl;
}

bool Coffee::customerWantsCondiments() {
  const auto answer = getUserInput("Would you like milk and sugar with your coffee (y/n)? ");
  return std::tolower(static_cast<unsigned char>(answer[0])) == 'y';
}
