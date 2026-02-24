#ifndef __WHIP_H__
#define __WHIP_H__

#include <CondimentDecorator.h>

class Whip : public CondimentDecorator {
public:
  Whip(std::unique_ptr<Beverage> beverage);
  std::string getDescription() const override;
  double cost() const override;
};

#endif
