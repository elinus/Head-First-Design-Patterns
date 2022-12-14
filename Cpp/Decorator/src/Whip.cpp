#include <Whip.h>

Whip::Whip(std::unique_ptr<Beverage> beverage)
    : CondimentDecorator(std::move(beverage)) {}

std::string Whip::getDescription() const {
  return beverage->getDescription() + ", Whip";
}

double Whip::cost() const { return beverage->cost() + 0.10; }
