#ifndef __MOCHA_H__
#define __MOCHA_H__

#include <CondimentDecorator.h>

class Mocha : public CondimentDecorator {
public:
  Mocha(std::unique_ptr<Beverage> beverage);
  std::string getDescription() const override;
  double cost() const override;
};

#endif
