#ifndef __SIMPLE_PIZZA_FACTORY_H__
#define __SIMPLE_PIZZA_FACTORY_H__

#include <CheesePizza.h>
#include <ClamPizza.h>
#include <PepperoniPizza.h>
#include <Pizza.h>
#include <VeggiePizza.h>
#include <memory>
#include <string>

class SimplePizzaFactory {
public:
  std::unique_ptr<Pizza> createPizza(std::string type);
};

#endif // !__SIMPLE_PIZZA_FACTORY_H__
