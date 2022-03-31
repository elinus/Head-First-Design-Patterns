#ifndef __CURRENT_CONDITIONS_DISPLAY_H__
#define __CURRENT_CONDITIONS_DISPLAY_H__

#include <DisplayElement.h>
#include <Observer.h>
#include <Subject.h>

#include <iomanip>
#include <iostream>

class CurrentConditionsDisplay : public Observer, public DisplayElement {
public:
  explicit CurrentConditionsDisplay(Subject &weatherData);
  ~CurrentConditionsDisplay();
  void update(float temperature, float humidity, float pressure) override;
  void display() const override;

private:
  float temperature;
  float humidity;
  Subject &weatherData;
};

#endif
