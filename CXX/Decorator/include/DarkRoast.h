#ifndef __DARK_ROAST_H__
#define __DARK_ROAST_H__

#include <Beverage.h>

class DarkRoast : public Beverage {
public:
  std::string getDescription() const override;
  double cost() const override;
};

#endif
