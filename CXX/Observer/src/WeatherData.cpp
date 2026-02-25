#include "WeatherData.h"

void WeatherData::registerObserver(Observer *o) { observers_.push_back(o); }

void WeatherData::removeObserver(Observer *o) {
  observers_.erase(
  std::remove(observers_.begin(), observers_.end(), o),
  observers_.end());

}

void WeatherData::notifyObservers() {
  const auto snapshot = observers_;
  for (Observer* o : snapshot) {
    o->update(current_);
  }
}

void WeatherData::setMeasurements(const Measurement& m) {
  current_ = m;
  notifyObservers();
}
