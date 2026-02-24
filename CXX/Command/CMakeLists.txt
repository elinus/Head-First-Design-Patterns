# Command/CMakeLists.txt

add_executable(Command
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

target_include_directories(Command
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(Command PROPERTIES
        OUTPUT_NAME "Command.out"
)

message(STATUS "✅ Command target added.")