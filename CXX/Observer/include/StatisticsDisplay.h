#pragma once

#include "DisplayElement.h"
#include "Observer.h"
#include "Subject.h"

#include <optional>

class StatisticsDisplay : public Observer, public DisplayElement {
public:
  explicit StatisticsDisplay(Subject& subject);
  ~StatisticsDisplay() override;

  void update(const Measurement& m) override;
  void display() const override;

private:
  Subject& subject_;
  std::optional<float> maxTemp_;
  std::optional<float> minTemp_;
  float                tempSum_     = 0.0f;
  int                  numReadings_ = 0;
};

