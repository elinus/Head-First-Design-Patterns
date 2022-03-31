cmake_minimum_required(VERSION 3.10.2)

project(TemplateMethod)

include_directories(include)

add_executable(
    ${PROJECT_NAME}.out

    src/CaffeineBeverage.cpp
    src/Coffee.cpp
    src/Tea.cpp
    src/BeverageTestDrive.cpp
)

message("${PROJECT_NAME} done.")