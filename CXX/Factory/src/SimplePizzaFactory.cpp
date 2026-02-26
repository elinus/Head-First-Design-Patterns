#include "SimplePizzaFactory.h"
#include "Pizza.h"
#include "CheesePizza.h"
#include "PepperoniPizza.h"
#include "ClamPizza.h"
#include "VeggiePizza.h"

std::unique_ptr<Pizza> SimplePizzaFactory::createPizza(const std::string& type) {
  if (type == "cheese")     return std::make_unique<CheesePizza>();
  if (type == "pepperoni")  return std::make_unique<PepperoniPizza>();
  if (type == "clam")       return std::make_unique<ClamPizza>();
  if (type == "veggie")     return std::make_unique<VeggiePizza>();
  throw std::invalid_argument("Unknown pizza type: " + type);
}
