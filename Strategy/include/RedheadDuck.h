#ifndef __REDHEAD_DUCK__
#define __REDHEAD_DUCK__

#include <Duck.h>
#include <FlyWithWings.h>
#include <Quack.h>
#include <iostream>

class RedheadDuck : public Duck {
public:
  RedheadDuck();
  void display() const override;
};

#endif
