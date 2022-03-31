#include <Pizza.h>
#include <PizzaStore.h>
#include <SimplePizzaFactory.h>
#include <memory>

int main(int argc, char *argv[]) {
  std::unique_ptr<SimplePizzaFactory> factory(new SimplePizzaFactory());
  std::unique_ptr<PizzaStore> store(new PizzaStore(std::move(factory)));

  std::unique_ptr<Pizza> pizza = store->orderPizza("cheese");
  std::cout << "We ordered a " << pizza->getName() << "\n";
  std::cout << pizza->toString() << "\n";

  pizza = store->orderPizza("veggie");
  std::cout << "We ordered a " << pizza->getName() << "\n";
  std::cout << pizza->toString() << "\n";

  return 0;
}
