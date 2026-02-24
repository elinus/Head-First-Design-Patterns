# Adapter/CMakeLists.txt

add_executable(Adapter
    src/MallardDuck.cpp
    src/WildTurkey.cpp
    src/TurkeyAdapter.cpp
    src/DuckTestDrive.cpp
)

target_include_directories(Adapter
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(Adapter PROPERTIES
        OUTPUT_NAME "Adapter.out"
)

message(STATUS "✅ Adapter target added.")
