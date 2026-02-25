#pragma once

#include "Measurement.h"
#include "Subject.h"

#include <vector>

class WeatherData : public Subject {
public:
  void registerObserver(Observer* o) override;
  void removeObserver(Observer* o)   override;
  void notifyObservers()             override;

  void setMeasurements(const Measurement& m);

  [[nodiscard]] float getTemperature() const { return current_.temperature; }
  [[nodiscard]] float getHumidity()    const { return current_.humidity; }
  [[nodiscard]] float getPressure()    const { return current_.pressure; }

private:
  std::vector<Observer*> observers_;
  Measurement            current_;
};

