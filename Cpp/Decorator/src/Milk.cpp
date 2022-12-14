#include <Milk.h>

Milk::Milk(std::unique_ptr<Beverage> beverage)
    : CondimentDecorator(std::move(beverage)) {}

std::string Milk::getDescription() const {
  return beverage->getDescription() + ", Milk";
}

double Milk::cost() const { return beverage->cost() + 0.10; }
