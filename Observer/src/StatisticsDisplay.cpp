#include <StatisticsDisplay.h>

StatisticsDisplay::StatisticsDisplay(Subject &weatherData)
    : weatherData(weatherData), maxTemp(0.0f), minTemp(0.0f), tempSum(0),
      numReadings(0) {
  weatherData.registerObserver(this);
}

StatisticsDisplay::~StatisticsDisplay() { weatherData.removeObserver(this); }

void StatisticsDisplay::update(float temperature, float humidity,
                               float pressure) {
  tempSum += temperature;
  numReadings++;
  if (temperature > maxTemp) {
    maxTemp = temperature;
  }
  if (temperature < minTemp) {
    minTemp = temperature;
  }

  display();
}

void StatisticsDisplay::display() const {
  std::cout << std::setprecision(5)
            << "Avg/MAx/Min temperature = " << (tempSum / numReadings) << "/"
            << maxTemp << "/" << minTemp << "\n";
}
