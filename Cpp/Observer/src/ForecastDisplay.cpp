#include <ForecastDisplay.h>

ForecastDisplay::ForecastDisplay(Subject &weatherData)
    : weatherData(weatherData), currentPressure(29.92f), lastPressure(0.0f) {
  weatherData.registerObserver(this);
}

ForecastDisplay::~ForecastDisplay() { weatherData.removeObserver(this); }

void ForecastDisplay::update(float temperature, float humidity,
                             float pressure) {
  lastPressure = currentPressure;
  currentPressure = pressure;
  display();
}

void ForecastDisplay::display() const {
  std::cout << "Forecast: ";
  if (currentPressure > lastPressure) {
    std::cout << "Improving weather on the way!\n";
  } else if (currentPressure == lastPressure) {
    std::cout << "More of the same\n";
  } else if (currentPressure < lastPressure) {
    std::cout << "Watchout for cooler, rainy weather\n";
  }
}
