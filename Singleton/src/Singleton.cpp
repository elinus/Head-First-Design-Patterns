#include <Singleton.h>

std::mutex Singleton::singletonMutex;
std::shared_ptr<Singleton> Singleton::instance;

std::shared_ptr<Singleton> Singleton::getInstance() {
  if (instance == nullptr) {
    std::lock_guard<std::mutex> lk(singletonMutex);
    if (instance == nullptr) {
      instance.reset(new Singleton());
    }
  }
  return instance;
}

std::string Singleton::getDescription() {
  return std::string("I'm a thread safe Singleton!");
}
