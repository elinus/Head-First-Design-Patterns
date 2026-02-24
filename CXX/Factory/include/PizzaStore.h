#ifndef __PIZZA_STORE_H__
#define __PIZZA_STORE_H__

#include <Pizza.h>
#include <SimplePizzaFactory.h>
#include <memory>
#include <string>

class PizzaStore {
private:
  std::unique_ptr<SimplePizzaFactory> factory;

public:
  PizzaStore(std::unique_ptr<SimplePizzaFactory> simplePizzaFactory);
  std::unique_ptr<Pizza> orderPizza(std::string type);
};

#endif // !__PIZZA_STORE_H__
