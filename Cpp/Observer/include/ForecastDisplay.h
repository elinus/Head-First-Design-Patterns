#ifndef __FORECAST_DISPLAY_H__
#define __FORECAST_DISPLAY_H__

#include <DisplayElement.h>
#include <Observer.h>
#include <Subject.h>

#include <iostream>

class ForecastDisplay : public Observer, public DisplayElement {
public:
  explicit ForecastDisplay(Subject &weatherData);
  ~ForecastDisplay();
  void update(float temperature, float humidity, float pressure) override;
  void display() const override;

private:
  float currentPressure = 29.92f;
  float lastPressure;
  Subject &weatherData;
};

#endif
