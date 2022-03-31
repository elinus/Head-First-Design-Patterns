#include <Duck.h>

void Duck::swim() const {
  std::cout << "All ducks float, even decoys!" << std::endl;
}

void Duck::performFly() const { flyBehaviour->fly(); }

void Duck::performQuack() const { quackBehaviour->quack(); }

void Duck::setFlyBehaviour(std::unique_ptr<FlyBehaviour> fb) {
  flyBehaviour = std::move(fb);
}

void Duck::setQuackBehaviour(std::unique_ptr<QuackBehaviour> qb) {
  quackBehaviour = std::move(qb);
}
