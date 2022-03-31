#include <Singleton.h>
#include <iostream>
#include <memory>

int main(int argc, char *argv[]) {
  std::shared_ptr<Singleton> singletonObj = Singleton::getInstance();
  std::cout << singletonObj->getDescription() << std::endl;
  return 0;
}
