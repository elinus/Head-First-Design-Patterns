#include "Singleton.h"
#include <ctime>
#include <sstream>

Singleton::Singleton()
    : name_("MySingleton")
{
    telemetry_.createdAt = std::chrono::system_clock::now();
    telemetry_.lastAccessedAt.store(
        telemetry_.createdAt.time_since_epoch().count(),
        std::memory_order_relaxed);
}

Singleton& Singleton::getInstance() {
    static Singleton instance;

    // increment access count
    const int count = instance.telemetry_.accessCount.fetch_add(
        1, std::memory_order_relaxed) + 1;

    // update last accessed time
    instance.telemetry_.lastAccessedAt.store(
        std::chrono::system_clock::now().time_since_epoch().count(),
        std::memory_order_relaxed);

    // fire callback if registered
    if (instance.callback_) {
        instance.callback_(count);
    }

    return instance;
}

std::string Singleton::getDescription() const {
    return "Singleton [" + name_ + "] | "
           "Access count: " + std::to_string(getAccessCount()) + " | "
           "Created: " + getCreatedAt() + " | "
           "Last accessed: " + getLastAccessedAt();
}

std::string Singleton::getName() const {
    return name_;
}

int Singleton::getAccessCount() const {
    return telemetry_.accessCount.load(std::memory_order_relaxed);
}

const Singleton::Telemetry& Singleton::getTelemetry() const {
    return telemetry_;
}

std::string Singleton::getCreatedAt() const {
    return timePointToString(telemetry_.createdAt);
}

std::string Singleton::getLastAccessedAt() const {
    auto rep = telemetry_.lastAccessedAt.load(std::memory_order_relaxed);
    auto tp = std::chrono::time_point<std::chrono::system_clock>(
        std::chrono::system_clock::duration(rep));
    return timePointToString(tp);
}

std::string Singleton::timePointToString(
    std::chrono::time_point<std::chrono::system_clock> tp)
{
    std::time_t t = std::chrono::system_clock::to_time_t(tp);
    std::string ts = std::ctime(&t);
    if (!ts.empty() && ts.back() == '\n') ts.pop_back();
    return ts;
}

void Singleton::setAccessCallback(AccessCallback cb) {
    callback_ = std::move(cb);
}

#ifdef UNIT_TEST
void Singleton::resetForTesting() {
    Singleton& s = getInstance();
    s.telemetry_.accessCount.store(0, std::memory_order_relaxed);
    s.telemetry_.createdAt = std::chrono::system_clock::now();
    s.telemetry_.lastAccessedAt.store(
        s.telemetry_.createdAt.time_since_epoch().count(),
        std::memory_order_relaxed);
    s.callback_ = nullptr;
}
#endif