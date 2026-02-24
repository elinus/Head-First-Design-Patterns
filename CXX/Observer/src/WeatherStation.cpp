#include <CurrentConditionsDisplay.h>
#include <ForecastDisplay.h>
#include <HeatIndexDisplay.h>
#include <StatisticsDisplay.h>
#include <WeatherData.h>

int main(int argc, char *argv[]) {
  WeatherData weatherData;
  CurrentConditionsDisplay currentDisplay(weatherData);
  StatisticsDisplay statsDisplay(weatherData);
  ForecastDisplay forcastDisplay(weatherData);
  HeatIndexDisplay heatIndex(weatherData);

  weatherData.setMeasurements(80, 65, 30.4f);
  weatherData.setMeasurements(82, 70, 29.2f);
  weatherData.setMeasurements(78, 90, 29.2f);

  return 0;
}
