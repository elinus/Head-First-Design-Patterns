#ifndef __SUBJECT_H__
#define __SUBJECT_H__

#include <Observer.h>
#include <iostream>

class Subject {
public:
  virtual ~Subject() = default;
  virtual void registerObserver(Observer *o) = 0;
  virtual void removeObserver(Observer *o) = 0;
  virtual void notifyObservers() = 0;
};

#endif
