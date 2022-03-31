#ifndef __SINGLETON_H__
#define __SINGLETON_H__

#include <memory>
#include <mutex>
#include <string>

class Singleton {
public:
  static std::shared_ptr<Singleton> getInstance();
  std::string getDescription();
  ~Singleton() = default;
  Singleton(const Singleton &) = delete;
  Singleton &operator=(const Singleton &) = delete;

private:
  Singleton() = default;
  static std::shared_ptr<Singleton> instance;
  static std::mutex singletonMutex;
};

#endif
