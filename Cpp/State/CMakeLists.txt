# State/CMakeLists.txt

add_executable(State
    src/GumballMachine.cpp
    src/GumballMachineTestDrive.cpp
    src/HasQuarterState.cpp
    src/NoQuarterState.cpp
    src/SoldOutState.cpp
    src/SoldState.cpp    
)

target_include_directories(State
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(State PROPERTIES
        OUTPUT_NAME "State.out"
)

message(STATUS "✅ State target added.")
