cmake_minimum_required(VERSION 3.10.2)

project(Strategy)

include_directories(include)

add_executable(
    ${PROJECT_NAME}.out

    src/FlyWithWings.cpp
    src/FlyNoWay.cpp
    src/FlyRocketPowered.cpp
    src/Quack.cpp
    src/MuteQuack.cpp
    src/Squeak.cpp
    src/Duck.cpp
    src/MallardDuck.cpp
    src/RedheadDuck.cpp
    src/RubberDuck.cpp
    src/DecoyDuck.cpp
    src/ModelDuck.cpp
    src/MiniDuckSimulator.cpp 
    
)

message("${PROJECT_NAME} done.")
