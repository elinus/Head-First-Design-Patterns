cmake_minimum_required(VERSION 3.0)

project(Command)

include_directories(include)

add_executable(
            ${PROJECT_NAME}.out

            src/NoCommand.cpp
            src/Light.cpp	
            src/LightOnCommand.cpp	
            src/LightOffCommand.cpp
            src/Stereo.cpp	
            src/StereoOffCommand.cpp	
            src/StereoOnWithCDCommand.cpp
            src/LivingroomLightOnCommand.cpp	
            src/LivingroomLightOffCommand.cpp
            src/CeilingFan.cpp	
            src/CeilingFanOnCommand.cpp	
            src/CeilingFanOffCommand.cpp
            src/GarageDoor.cpp
            src/GarageDoorDownCommand.cpp
            src/GarageDoorUpCommand.cpp
            src/Hottub.cpp	
            src/HottubOnCommand.cpp	
            src/HottubOffCommand.cpp
#src/SimpleRemoteControl.cpp	
            src/RemoteControl.cpp	
#src/RemoteControlTest.cpp
            src/RemoteLoader.cpp
)

