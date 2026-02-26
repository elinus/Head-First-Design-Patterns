#include <PepperoniPizza.h>

PepperoniPizza::PepperoniPizza() {
  name_ = "Pepperoni Pizza";
  dough_ = "Crust";
  sauce_ = "Marinara sauce";
  toppings_.emplace_back("Sliced Pepperoni");
  toppings_.emplace_back("Sliced Onion");
  toppings_.emplace_back("Grated parmesan cheese");
}
