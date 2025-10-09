# Strategy/CMakeLists.txt

add_executable(Strategy
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

target_include_directories(Strategy
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(Strategy PROPERTIES
        OUTPUT_NAME "Strategy.out"
)

message(STATUS "✅ Strategy target added.")