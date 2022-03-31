#ifndef __FLY_ROCKET_POWERED__
#define __FLY_ROCKET_POWERED__

#include <FlyBehaviour.h>
#include <iostream>

class FlyRocketPowered : public FlyBehaviour {
public:
  void fly() const override;
};

#endif
