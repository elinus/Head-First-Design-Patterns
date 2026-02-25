#include "ForecastDisplay.h"

#include <iostream>

ForecastDisplay::ForecastDisplay(Subject& subject)
    : subject_(subject) {
  subject_.registerObserver(this);
}

ForecastDisplay::~ForecastDisplay() {
  subject_.removeObserver(this);
}


void ForecastDisplay::update(const Measurement& m) {
  lastPressure_    = currentPressure_;
  currentPressure_ = m.pressure;
  display();
}

void ForecastDisplay::display() const {
  std::cout << "[Forecast] ";
  if (!lastPressure_) {
    std::cout << "Awaiting second reading.\n";
    return;
  }

  if (currentPressure_ > *lastPressure_)
    std::cout << "Improving weather on the way!\n";
  else if (currentPressure_ < *lastPressure_)
    std::cout << "Watch out for cooler, rainy weather.\n";
  else std::cout << "More of the same.\n";
}
