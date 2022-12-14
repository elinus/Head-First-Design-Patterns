#ifndef __MODEL_DUCK__
#define __MODEL_DUCK__

#include <Duck.h>
#include <FlyNoWay.h>
#include <Quack.h>
#include <iostream>

class ModelDuck : public Duck {
public:
  ModelDuck();
  void display() const override;
};

#endif
