# TemplateMethod/CMakeLists.txt

add_executable(TemplateMethod
    src/CaffeineBeverage.cpp
    src/Coffee.cpp
    src/Tea.cpp
    src/BeverageTestDrive.cpp
)

target_include_directories(TemplateMethod
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(TemplateMethod PROPERTIES
        OUTPUT_NAME "TemplateMethod.out"
)

message(STATUS "✅ TemplateMethod target added.")