cmake_minimum_required(VERSION 3.10.2)

project(Factory)

include_directories(include)

add_executable(
        ${PROJECT_NAME}.out
        
        src/Pizza.cpp
        src/CheesePizza.cpp
        src/ClamPizza.cpp
        src/PepperoniPizza.cpp
        src/VeggiePizza.cpp
        src/PizzaStore.cpp
        src/SimplePizzaFactory.cpp
        src/PizzaTestDrive.cpp
)

message("${PROJECT_NAME} done.")