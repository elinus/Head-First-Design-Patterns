cmake_minimum_required(VERSION 3.10.2)

project(Adapter)

include_directories(include)

add_executable(
    ${PROJECT_NAME}.out

    src/MallardDuck.cpp
    src/WildTurkey.cpp
    src/TurkeyAdapter.cpp
    src/DuckTestDrive.cpp
)

message("${PROJECT_NAME} done.")