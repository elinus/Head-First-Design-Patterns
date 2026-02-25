#include "CurrentConditionsDisplay.h"
#include <iostream>
#include <iomanip>

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject& subject)
    : subject_(subject) {
    subject_.registerObserver(this);
}

CurrentConditionsDisplay::~CurrentConditionsDisplay() {
    subject_.removeObserver(this);
}

void CurrentConditionsDisplay::update(const Measurement& m) {
    current_ = m;
    display();
}

void CurrentConditionsDisplay::display() const {
  std::cout << std::fixed << std::setprecision(2)
    << "[Current]  " << current_.temperature << "F  |  "
    << current_.humidity << "% humidity\n";
}
