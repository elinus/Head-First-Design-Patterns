#ifndef __FLY_WITH_WINGS__
#define __FLY_WITH_WINGS__

#include <FlyBehaviour.h>
#include <iostream>

class FlyWithWings : public FlyBehaviour {
public:
  void fly() const override;
};

#endif
