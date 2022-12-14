#include <WeatherData.h>

void WeatherData::registerObserver(Observer *o) { observers.push_back(o); }

void WeatherData::removeObserver(Observer *o) {
  auto it = std::find(observers.begin(), observers.end(), o);
  if (it != observers.end()) {
    observers.erase(it);
  }
}

void WeatherData::notifyObservers() {
  for (auto observer : observers) {
    observer->update(temperature, humidity, pressure);
  }
}

void WeatherData::measurementsChanged() { notifyObservers(); }

void WeatherData::setMeasurements(float temp, float humid, float press) {
  this->temperature = temp;
  this->humidity = humid;
  this->pressure = press;
  measurementsChanged();
}
