# Facade/CMakeLists.txt

add_executable(Facade
    src/Amplifier.cpp	
    src/CdPlayer.cpp	
    src/DvdPlayer.cpp	
    src/PopcornPopper.cpp	
    src/Projector.cpp	
    src/Screen.cpp	
    src/TheaterLights.cpp	
    src/Tuner.cpp
    src/HomeTheaterFacade.cpp
    src/HomeTheaterTestDrive.cpp
)

target_include_directories(Facade
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(Facade PROPERTIES
        OUTPUT_NAME "Facade.out"
)

message(STATUS "✅ Facade target added.")