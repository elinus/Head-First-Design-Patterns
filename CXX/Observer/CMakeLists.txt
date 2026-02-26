# Observer/CMakeLists.txt

add_executable(Observer
    src/WeatherData.cpp
    src/CurrentConditionsDisplay.cpp
    src/StatisticsDisplay.cpp
    src/ForecastDisplay.cpp
    src/HeatIndexDisplay.cpp
    src/WeatherStation.cpp
)

target_include_directories(Observer
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(Observer PROPERTIES
        OUTPUT_NAME "Observer.out"
)

message(STATUS "✅ Observer target added.")