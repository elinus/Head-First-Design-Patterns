#include "GumballMachine.h"

#include <iostream>

int main() {
  GumballMachine gumballMachine(2);

  std::cout << gumballMachine;

  gumballMachine.insertQuarter();
  gumballMachine.turnCrank();

  std::cout << gumballMachine;

  gumballMachine.insertQuarter();
  gumballMachine.turnCrank();
  gumballMachine.insertQuarter();
  gumballMachine.turnCrank();
  gumballMachine.refill(5);
  gumballMachine.insertQuarter();
  gumballMachine.turnCrank();

  std::cout << gumballMachine;

  return 0;
}