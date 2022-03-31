#ifndef __ESPRESSO_H__
#define __ESPRESSO_H__

#include <Beverage.h>

class Espresso : public Beverage {
public:
  std::string getDescription() const override;
  double cost() const override;
};

#endif
