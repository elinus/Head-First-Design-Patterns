#include <Beverage.h>
#include <DarkRoast.h>
#include <Espresso.h>
#include <HouseBlend.h>
#include <Mocha.h>
#include <Soy.h>
#include <Whip.h>

#include <iostream>
#include <memory>

int main(int argc, char *argv[]) {
  Espresso beverage1;
  std::cout << beverage1.getDescription() << " $" << beverage1.cost()
            << std::endl;

  std::unique_ptr<Beverage> beverage2 = std::make_unique<DarkRoast>();
  beverage2 = std::make_unique<Mocha>(std::move(beverage2));
  beverage2 = std::make_unique<Mocha>(std::move(beverage2));
  beverage2 = std::make_unique<Whip>(std::move(beverage2));
  std::cout << beverage2->getDescription() << " $" << beverage2->cost()
            << std::endl;

  std::unique_ptr<Beverage> beverage3 = std::make_unique<HouseBlend>();
  beverage3 = std::make_unique<Soy>(std::move(beverage3));
  beverage3 = std::make_unique<Mocha>(std::move(beverage3));
  beverage3 = std::make_unique<Whip>(std::move(beverage3));
  std::cout << beverage3->getDescription() << " $" << beverage3->cost()
            << std::endl;
  return 0;
}
