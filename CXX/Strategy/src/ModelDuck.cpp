#include <ModelDuck.h>

ModelDuck::ModelDuck() {
  quackBehaviour = std::make_unique<Quack>();
  flyBehaviour = std::make_unique<FlyNoWay>();
}

void ModelDuck::display() const {
  std::cout << "I'm a model duck" << std::endl;
}
