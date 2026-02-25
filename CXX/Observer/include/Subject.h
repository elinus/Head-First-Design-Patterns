#pragma once

#include "Observer.h"

class Subject {
public:
  virtual ~Subject() = default;
  virtual void registerObserver(Observer* o) = 0;
  virtual void removeObserver(Observer* o) = 0;
  virtual void notifyObservers() = 0;
};
