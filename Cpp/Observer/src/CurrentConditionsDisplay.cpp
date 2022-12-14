#include <CurrentConditionsDisplay.h>

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject &weatherData)
    : weatherData(weatherData), temperature(0.0f), humidity(0.0f) {
  weatherData.registerObserver(this);
}

CurrentConditionsDisplay::~CurrentConditionsDisplay() {
  weatherData.removeObserver(this);
}

void CurrentConditionsDisplay::update(float temp, float humid, float press) {
  this->temperature = temp;
  this->humidity = humid;
  display();
}

void CurrentConditionsDisplay::display() const {
  std::cout << std::setprecision(2) << "Current conditions: " << temperature
            << "F degree and " << humidity << "\% humidity\n";
}
