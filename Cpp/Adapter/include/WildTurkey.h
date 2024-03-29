#ifndef __WILD_TURKEY_H__
#define __WILD_TURKEY_H__

#include <Turkey.h>
#include <iostream>

class WildTurkey : public Turkey {
public:
  virtual ~WildTurkey() {}
  void gobble() override;
  void fly() override;
};

#endif
