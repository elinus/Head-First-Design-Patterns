# Singleton/CMakeLists.txt

add_executable(Singleton
    src/Singleton.cpp
    src/SingletonClient.cpp
)

target_include_directories(Singleton
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(Singleton PROPERTIES
        OUTPUT_NAME "Singleton.out"
)

message(STATUS "✅ Singleton target added.")
