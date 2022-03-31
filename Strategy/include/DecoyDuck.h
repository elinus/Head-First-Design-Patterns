#ifndef __DECOY_DUCK__
#define __DECOY_DUCK__

#include <Duck.h>
#include <FlyNoWay.h>
#include <MuteQuack.h>
#include <iostream>

class DecoyDuck : public Duck {
public:
  DecoyDuck();
  void display() const override;
};

#endif
