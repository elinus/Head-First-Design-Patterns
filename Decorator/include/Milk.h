#ifndef __MILK_H__
#define __MILK_H__

#include <CondimentDecorator.h>

class Milk : public CondimentDecorator {
public:
  Milk(std::unique_ptr<Beverage> beverage);
  std::string getDescription() const override;
  double cost() const override;
};

#endif
