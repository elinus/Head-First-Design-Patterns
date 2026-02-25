#include "CurrentConditionsDisplay.h"
#include "ForecastDisplay.h"
#include "HeatIndexDisplay.h"
#include "StatisticsDisplay.h"
#include "WeatherData.h"

#include <iostream>

int main() {
  WeatherData weatherData;

  CurrentConditionsDisplay currentDisplay(weatherData);
  StatisticsDisplay        statsDisplay(weatherData);
  ForecastDisplay          forecastDisplay(weatherData);
  HeatIndexDisplay         heatIndexDisplay(weatherData);

  std::cout << "=== Weather Station ===\n\n";

  weatherData.setMeasurements({80.0f, 65.0f, 30.4f});
  std::cout << "\n";

  weatherData.setMeasurements({82.0f, 70.0f, 29.2f});
  std::cout << "\n";

  weatherData.setMeasurements({78.0f, 90.0f, 29.2f});
  std::cout << "\n";

  return 0;
}