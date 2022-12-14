#ifndef __WEATHER_DATA_H__
#define __WEATHER_DATA_H__

#include <Subject.h>
#include <algorithm>
#include <vector>

class WeatherData : public Subject {
public:
  WeatherData() = default;
  virtual ~WeatherData() = default;
  void registerObserver(Observer *o) override;
  void removeObserver(Observer *o) override;
  void notifyObservers() override;
  void measurementsChanged();
  void setMeasurements(float temperature, float humidity, float pressure);
  float getTemperature() { return temperature; }
  float getHumidity() { return humidity; }
  float getPressure() { return pressure; }

private:
  std::vector<Observer *> observers;
  float temperature;
  float humidity;
  float pressure;
};

#endif
