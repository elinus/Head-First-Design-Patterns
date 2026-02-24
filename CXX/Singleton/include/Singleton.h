#ifndef SINGLETON_H
#define SINGLETON_H

#include <atomic>
#include <chrono>
#include <functional>
#include <string>

class Singleton {
public:
  struct Telemetry {
    std::atomic<int> accessCount{0};
    std::chrono::time_point<std::chrono::system_clock> createdAt;
    std::atomic<std::chrono::system_clock::time_point::rep> lastAccessedAt{0};
  };

  using AccessCallback = std::function<void(int accessCount)>;

  [[nodiscard]] static Singleton& getInstance();

  std::string getName() const;
  std::string getDescription() const;
  std::string getCreatedAt() const;
  std::string getLastAccessedAt() const;
  int getAccessCount() const;
  const Telemetry& getTelemetry() const;

  void setAccessCallback(AccessCallback cb);

  Singleton(const Singleton &) = delete;
  Singleton &operator=(const Singleton &) = delete;

#ifdef UNIT_TEST
  static void resetForTesting();
#endif

private:
  Singleton();

  std::string name_;
  Telemetry telemetry_;
  AccessCallback callback_;

  static std::string timePointToString(
      std::chrono::time_point<std::chrono::system_clock> tp);
};

#endif
