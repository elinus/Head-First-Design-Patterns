#include <PizzaStore.h>

PizzaStore::PizzaStore(std::unique_ptr<SimplePizzaFactory> factory) {
  this->factory_ = std::move(factory);
}

std::unique_ptr<Pizza> PizzaStore::orderPizza(std::string type) {
  std::unique_ptr<Pizza> pizza = factory_->createPizza(type);

  pizza->prepare();
  pizza->bake();
  pizza->cut();
  pizza->box();

  return pizza;
}
