#pragma once

#include "DisplayElement.h"
#include "Observer.h"
#include "Subject.h"
#include "Measurement.h"

#include <string>
#include <string_view>

class CurrentConditionsDisplay : public Observer, public DisplayElement {
public:
  explicit CurrentConditionsDisplay(Subject& subject);
  ~CurrentConditionsDisplay() override;

  // Observer interface
  void update(const Measurement& m) override;

  // DisplayElement interface
  void display() const override;

private:
  Subject&    subject_;
  Measurement current_;
};
