#include <RedheadDuck.h>

RedheadDuck::RedheadDuck() {
  quackBehaviour = std::make_unique<Quack>();
  flyBehaviour = std::make_unique<FlyWithWings>();
}

void RedheadDuck::display() const {
  std::cout << "I'm a red head duck" << std::endl;
}
