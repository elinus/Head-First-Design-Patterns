#pragma once

#include "Measurement.h"

class Observer {
public:
  virtual ~Observer() = default;
  virtual void update(const Measurement& m) = 0;
};
