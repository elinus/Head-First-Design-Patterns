#ifndef __SOY_H__
#define __SOY_H__

#include <CondimentDecorator.h>

class Soy : public CondimentDecorator {
public:
  Soy(std::unique_ptr<Beverage> beverage);
  std::string getDescription() const override;
  double cost() const override;
};

#endif
