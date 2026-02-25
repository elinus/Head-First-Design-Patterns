#pragma once

class DisplayElement {
public:
  virtual ~DisplayElement() = default;
  virtual void display() const = 0;
};
