#ifndef __DISPLAY_ELEMENT_H__
#define __DISPLAY_ELEMENT_H__

#include <iostream>

class DisplayElement {
public:
  virtual ~DisplayElement() = default;
  virtual void display() const = 0;
};

#endif
