#ifndef __CONDIMENT_DECORATOR_H__
#define __CONDIMENT_DECORATOR_H__

#include <Beverage.h>
#include <memory>

class CondimentDecorator : public Beverage {
public:
  std::unique_ptr<Beverage> beverage;
  CondimentDecorator(std::unique_ptr<Beverage> beverage)
      : beverage(std::move(beverage)) {}
};

#endif
