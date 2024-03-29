#include <Duck.h>
#include <MallardDuck.h>
#include <TurkeyAdapter.h>
#include <WildTurkey.h>
#include <iostream>

void testDuck(Duck *duck) {
  duck->quack();
  duck->fly();
}

int main() {
  auto *duck = new MallardDuck();
  auto *turkey = new WildTurkey();
  Duck *turkeyAdapter = new TurkeyAdapter(turkey);

  std::cout << "The Turkey says..." << std::endl;
  turkey->gobble();
  turkey->fly();

  std::cout << "The Duck says..." << std::endl;
  testDuck(duck);

  std::cout << "The TurkeyAdapter says..." << std::endl;
  testDuck(turkeyAdapter);
  return 0;
}
