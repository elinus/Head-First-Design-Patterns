#ifndef __BEVERAGE_H__
#define __BEVERAGE_H__

#include <string>

class Beverage {
public:
  virtual ~Beverage() = default;
  virtual std::string getDescription() const = 0;
  virtual double cost() const = 0;
};

#endif
