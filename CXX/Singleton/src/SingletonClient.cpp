#include "Singleton.h"
#include <iostream>

int main(int argc, char *argv[]) {
  // Register a callback before first access
    Singleton::getInstance().setAccessCallback([](int count) {
        std::cout << "[callback] Access #" << count << "\n";
    });

  // Multiple accesses to demonstrate telemetry
  Singleton::getInstance().getName();
  Singleton::getInstance().getAccessCount();
  Singleton::getInstance().getName();

  // Final description
  std::cout << "\n" << Singleton::getInstance().getDescription() << "\n";

  // Raw telemetry
  const auto& telemetry_data = Singleton::getInstance().getTelemetry();
  std::cout << "\nRaw telemetry:\n";
  std::cout << "  Access count : " << telemetry_data.accessCount.load() << "\n";
  std::cout << "  Created at   : " << Singleton::getInstance().getCreatedAt() << "\n";
  std::cout << "  Last access  : " << Singleton::getInstance().getLastAccessedAt() << "\n";

  return 0;
}
