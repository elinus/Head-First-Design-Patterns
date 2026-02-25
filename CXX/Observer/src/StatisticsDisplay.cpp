#include "StatisticsDisplay.h"

#include <iomanip>
#include <iostream>

StatisticsDisplay::StatisticsDisplay(Subject& subject)
    : subject_(subject) {
  subject_.registerObserver(this);
}

StatisticsDisplay::~StatisticsDisplay() {
  subject_.removeObserver(this);
}

void StatisticsDisplay::update(const Measurement& m) {
  const float t = m.temperature;

  tempSum_ += t;
  ++numReadings_;

  if (!maxTemp_ || t > *maxTemp_) maxTemp_ = t;
  if (!minTemp_ || t < *minTemp_) minTemp_ = t;

  display();
}

void StatisticsDisplay::display() const {
  if (numReadings_ == 0) {
    std::cout << "[Statistics] No readings yet.\n";
    return;
  }
  std::cout << std::fixed << std::setprecision(2)
            << "[Statistics] Avg/Max/Min = "
            << (tempSum_ / numReadings_) << " / "
            << *maxTemp_ << " / "
            << *minTemp_ << " F\n";
}

