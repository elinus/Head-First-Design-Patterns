#include <ClamPizza.h>

ClamPizza::ClamPizza() {
  name_ = "Clam Pizza";
  dough_ = "Thin crust";
  sauce_ = "White garlic sauce";
  toppings_.emplace_back("Clams");
  toppings_.emplace_back("Grated parmesan cheese");
}
