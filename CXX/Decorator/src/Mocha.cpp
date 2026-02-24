#include <Mocha.h>

Mocha::Mocha(std::unique_ptr<Beverage> beverage)
    : CondimentDecorator(std::move(beverage)) {}

std::string Mocha::getDescription() const {
  return beverage->getDescription() + ", Mocha";
}

double Mocha::cost() const { return beverage->cost() + 0.20; }
