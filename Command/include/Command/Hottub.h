#ifndef __HOTTUB_H__
#define __HOTTUB_H__

#include <iostream>
#include <string>

class Hottub {
public:
  Hottub();
  void on();
  void off();
  void bubblesOn();
  void bubblesOff();
  void jetsOn();
  void jetsOff();
  void setTemperture(int temp);
  void heat();
  void cool();

private:
  bool on_;
  int temperature;
};

#endif /* __HOTTUB_H__ */
