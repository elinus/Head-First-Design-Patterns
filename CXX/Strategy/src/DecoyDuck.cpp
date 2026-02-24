#include <DecoyDuck.h>

DecoyDuck::DecoyDuck() {
  quackBehaviour = std::make_unique<MuteQuack>();
  flyBehaviour = std::make_unique<FlyNoWay>();
}

void DecoyDuck::display() const {
  std::cout << "I'm a decoy duck" << std::endl;
}
