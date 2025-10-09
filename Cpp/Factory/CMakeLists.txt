# Factory/CMakeLists.txt

add_executable(Factory
        src/Pizza.cpp
        src/CheesePizza.cpp
        src/ClamPizza.cpp
        src/PepperoniPizza.cpp
        src/VeggiePizza.cpp
        src/PizzaStore.cpp
        src/SimplePizzaFactory.cpp
        src/PizzaTestDrive.cpp
)

target_include_directories(Factory
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(Factory PROPERTIES
        OUTPUT_NAME "Factory.out"
)

message(STATUS "✅ Factory target added.")