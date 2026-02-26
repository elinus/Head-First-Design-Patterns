#include <VeggiePizza.h>

VeggiePizza::VeggiePizza() {
  name_ = "Veggie Pizza";
  dough_ = "Crust";
  sauce_ = "Marinara sauce";
  toppings_.emplace_back("Shredded mozzarella");
  toppings_.emplace_back("Grated parmesan");
  toppings_.emplace_back("Diced onion");
  toppings_.emplace_back("Sliced mushrooms");
  toppings_.emplace_back("Sliced red pepper");
  toppings_.emplace_back("Sliced black olives");
}
