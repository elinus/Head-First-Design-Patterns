#pragma once

#include "DisplayElement.h"
#include "Observer.h"
#include "Subject.h"

#include <optional>

class ForecastDisplay : public Observer, public DisplayElement {
public:
  explicit ForecastDisplay(Subject& subject);
  ~ForecastDisplay() override;

  void update(const Measurement& m) override;
  void display() const override;

private:
  Subject&             subject_;
  float                currentPressure_ = 29.92f;
  std::optional<float> lastPressure_;
};
