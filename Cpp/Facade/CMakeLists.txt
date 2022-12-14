cmake_minimum_required(VERSION 3.0)

project(Facade)

include_directories(include)

add_executable(
    ${PROJECT_NAME}.out

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

message("${PROJECT_NAME} done.")