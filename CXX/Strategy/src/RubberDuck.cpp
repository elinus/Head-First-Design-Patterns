#include <RubberDuck.h>

RubberDuck::RubberDuck() {
  quackBehaviour = std::make_unique<Squeak>();
  flyBehaviour = std::make_unique<FlyNoWay>();
}

void RubberDuck::display() const {
  std::cout << "I'm a rubber duck" << std::endl;
}
