#ifndef __HOUSE_BLEND_H__
#define __HOUSE_BLEND_H__

#include <Beverage.h>

class HouseBlend : public Beverage {
public:
  std::string getDescription() const override;
  double cost() const override;
};

#endif
