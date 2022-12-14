cmake_minimum_required(VERSION 3.10.2)

project(Decorator)

include_directories(include)

add_executable(
    ${PROJECT_NAME}.outt

    src/Espresso.cpp
    src/HouseBlend.cpp
    src/DarkRoast.cpp
    src/Decaf.cpp
    src/Mocha.cpp
    src/Whip.cpp
    src/Milk.cpp
    src/Soy.cpp
    src/StarbuzzCoffee.cpp
)

message("${PROJECT_NAME} done.")