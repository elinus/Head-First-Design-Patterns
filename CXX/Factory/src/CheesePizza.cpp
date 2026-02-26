#include <CheesePizza.h>

CheesePizza::CheesePizza() {
  name_ = "Cheese Pizza";
  dough_ = "Regular Crust";
  sauce_ = "Marinara Pizza Sauce";
  toppings_.emplace_back("Fresh Mozzarella");
  toppings_.emplace_back("Parmesan");
}
