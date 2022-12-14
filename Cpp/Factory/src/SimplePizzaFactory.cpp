#include <SimplePizzaFactory.h>

std::unique_ptr<Pizza> SimplePizzaFactory::createPizza(std::string type) {
  std::unique_ptr<Pizza> pizza;

  if (type == "cheese") {
    std::unique_ptr<CheesePizza> cheezePizza(new CheesePizza());
    pizza = std::move(cheezePizza);
  } else if (type == "pepperoni") {
    std::unique_ptr<PepperoniPizza> pepperoniPizza(new PepperoniPizza());
    pizza = std::move(pepperoniPizza);
  } else if (type == "clam") {
    std::unique_ptr<ClamPizza> clamPizza(new ClamPizza());
    pizza = std::move(clamPizza);
  } else if (type == "veggie") {
    std::unique_ptr<VeggiePizza> veggiePizza(new VeggiePizza());
    pizza = std::move(veggiePizza);
  }
  return std::move(pizza);
}
