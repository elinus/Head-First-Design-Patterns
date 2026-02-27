#pragma once

#include "CaffeineBeverage.h"

class Coffee : public CaffeineBeverage {
public:
  void brew() override;
  void addCondiments() override;
  bool customerWantsCondiments() override;

};

