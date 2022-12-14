#ifndef __RUBBER_DUCK__
#define __RUBBER_DUCK__

#include <Duck.h>
#include <FlyNoWay.h>
#include <Squeak.h>
#include <iostream>

class RubberDuck : public Duck {
public:
  RubberDuck();
  void display() const override;
};

#endif
