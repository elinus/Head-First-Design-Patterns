#ifndef __QUACK_H__
#define __QUACK_H__

#include <QuackBehaviour.h>
#include <iostream>

class Quack : public QuackBehaviour {
public:
  void quack() const override;
};

#endif
