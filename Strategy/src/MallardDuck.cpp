#include <MallardDuck.h>

MallardDuck::MallardDuck() {
  quackBehaviour = std::make_unique<Quack>();
  flyBehaviour = std::make_unique<FlyWithWings>();
}

void MallardDuck::display() const {
  std::cout << "I'm a real Mallard duck" << std::endl;
}
