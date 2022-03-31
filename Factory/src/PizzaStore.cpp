#include <PizzaStore.h>

PizzaStore::PizzaStore(std::unique_ptr<SimplePizzaFactory> factory) {
  this->factory = std::move(factory);
}

std::unique_ptr<Pizza> PizzaStore::orderPizza(std::string type) {
  std::unique_ptr<Pizza> pizza;

  pizza = factory->createPizza(type);

  pizza->prepare();
  pizza->bake();
  pizza->cut();
  pizza->box();

  return std::move(pizza);
}
