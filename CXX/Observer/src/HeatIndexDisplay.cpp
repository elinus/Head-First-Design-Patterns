#include "HeatIndexDisplay.h"

#include <iomanip>
#include <iostream>

namespace {
  float computeHeatIndex(float t, float rh) {
    return (16.923f
        + (0.185212f    * t)
        + (5.37941f     * rh)
        - (0.100254f    * t  * rh)
        + (0.00941695f  * t  * t)
        + (0.00728898f  * rh * rh)
        + (0.000345372f * t  * t  * rh)
        - (0.000814971f * t  * rh * rh)
        + (0.0000102102f* t  * t  * rh * rh)
        - (0.000038646f * t  * t  * t)
        + (0.0000291583f* rh * rh * rh)
        + (0.00000142721f*t  * t  * t  * rh)
        + (0.000000197483f*t * rh * rh * rh)
        - (0.0000000218429f*t* t  * t  * rh * rh)
        + (0.000000000843296f*t*t * rh * rh * rh)
        - (0.0000000000481975f*t*t*t * rh * rh * rh));
  }
}

HeatIndexDisplay::HeatIndexDisplay(Subject& subject)
    : subject_(subject) {
  subject_.registerObserver(this);
}

HeatIndexDisplay::~HeatIndexDisplay() {
  subject_.removeObserver(this);
}

void HeatIndexDisplay::update(const Measurement& m) {
  heatIndex_ = computeHeatIndex(m.temperature, m.humidity);
  display();
}

void HeatIndexDisplay::display() const {
  std::cout << std::fixed << std::setprecision(2)
            << "[Heat Index] " << heatIndex_ << " F\n";
}
