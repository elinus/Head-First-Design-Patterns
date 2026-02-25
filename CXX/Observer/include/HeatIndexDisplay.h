#pragma once

#include "DisplayElement.h"
#include "Observer.h"
#include "Subject.h"

class HeatIndexDisplay : public Observer, public DisplayElement {
public:
  explicit HeatIndexDisplay(Subject& subject);
  ~HeatIndexDisplay() override;

  void update(const Measurement& m) override;
  void display() const override;

private:
  Subject& subject_;
  float    heatIndex_ = 0.0f;
};