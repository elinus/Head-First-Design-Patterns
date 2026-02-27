#pragma once

#include "CaffeineBeverage.h"
#include <string>

class Tea : public CaffeineBeverage {
public:
  void brew() override;
  void addCondiments() override;
  bool customerWantsCondiments() override;
};
