#include "Pizza.h"
#include "PizzaStore.h"
#include "SimplePizzaFactory.h"
#include <iostream>
#include <memory>

int main() {
  auto factory = std::make_unique<SimplePizzaFactory>();
  const auto store(std::make_unique<PizzaStore>(std::move(factory)));

  std::unique_ptr<Pizza> pizza = store->orderPizza("cheese");
  std::cout << "We ordered a " << pizza->getName() << "\n";
  std::cout << pizza->toString() << "\n";

  pizza = store->orderPizza("veggie");
  std::cout << "We ordered a " << pizza->getName() << "\n";
  std::cout << pizza->toString() << "\n";

  return 0;
}
