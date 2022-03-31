cmake_minimum_required(VERSION 3.10.2)

project(State)

include_directories(include)

add_executable(
    ${PROJECT_NAME}.out

    src/GumballMachine.cpp
    src/GumballMachineTestDrive.cpp
    src/HasQuarterState.cpp
    src/NoQuarterState.cpp
    src/SoldOutState.cpp
    src/SoldState.cpp    
)

message("${PROJECT_NAME} done.")
