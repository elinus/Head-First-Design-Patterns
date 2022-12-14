cmake_minimum_required(VERSION 3.10.2)

project(Observer)

add_compile_options(
    #-Wall
    #-Werror # treat all warning as errors
    #-Wextra # reasonable and standard
    #-Wunused # warn on anything being unused
    #-Wpedantic # warn if non-standard C++ is used
    #-Wshadow # warn the user if a variable declaration shadows one form a parent context
    #-Wnon-virtual-dtor # warn the user if a class with virtual 
    # functions has a non-virtual destructor. This
    # helps catch hard to track down memory errors
    #-Wold-style-cast # warn for c-style casts
    #-Wcast-align # warn for potential performance problem casts
    #-Woverloaded-virtual # warn if you overload(not override) a virtual function
    #-Wconversion # warn on type consversions taht may loose data
    #-Wsign-conversion # warn on sign conversions
    #-Wnull-dereference # warn if a null dereference is detected
    #-Wdouble-promotion # warn of float is implicit promoted to double
    #-Wformat=2 # warn on security issues around functions that format output (i.e printf)
    )

include_directories(include)

add_executable(
    ${PROJECT_NAME}.out

    src/WeatherData.cpp
    src/CurrentConditionsDisplay.cpp
    src/StatisticsDisplay.cpp
    src/ForecastDisplay.cpp
    src/HeatIndexDisplay.cpp
    src/WeatherStation.cpp
)

message("${PROJECT_NAME} done.")
