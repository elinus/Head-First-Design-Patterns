# Command/CMakeLists.txt

add_executable(Decorator
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

target_include_directories(Decorator
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(Decorator PROPERTIES
        OUTPUT_NAME "Decorator.out"
)

message(STATUS "✅ Decorator target added.")