#include <DecoyDuck.h>
#include <FlyRocketPowered.h>
#include <MallardDuck.h>
#include <ModelDuck.h>
#include <RedheadDuck.h>
#include <RubberDuck.h>
#include <iostream>
#include <memory>

int main() {
  std::unique_ptr<Duck> duck = std::make_unique<MallardDuck>();
  duck->performFly();
  duck->performQuack();
  duck->display();
  duck->swim();

  std::cout << "\n";

  duck = std::make_unique<RedheadDuck>();
  duck->performFly();
  duck->performQuack();
  duck->display();
  duck->swim();

  std::cout << "\n";

  duck = std::make_unique<RubberDuck>();
  duck->performFly();
  duck->performQuack();
  duck->display();
  duck->swim();

  std::cout << "\n";

  duck = std::make_unique<DecoyDuck>();
  duck->performFly();
  duck->performQuack();
  duck->display();
  duck->swim();

  std::cout << "\n";

  duck = std::make_unique<ModelDuck>();
  duck->performFly();
  duck->setFlyBehaviour(std::make_unique<FlyRocketPowered>());
  duck->performFly();

  return 0;
}
