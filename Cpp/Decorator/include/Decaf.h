#ifndef __DECAF_H__
#define __DECAF_H__

#include <Beverage.h>

class Decaf : public Beverage {
public:
  std::string getDescription() const override;
  double cost() const override;
};

#endif
