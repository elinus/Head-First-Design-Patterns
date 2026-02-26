#pragma once

#include <string>
#include <vector>

class Pizza {
public:
  virtual ~Pizza() = default;
  virtual std::string getName();
  virtual void prepare();
  virtual void bake();
  virtual void cut();
  virtual void box();
  [[nodiscard]] std::string toString() const;

protected:
  std::string name_;
  std::string dough_;
  std::string sauce_;
  std::vector<std::string> toppings_;

  void logAction(std::string_view action) const;
};
