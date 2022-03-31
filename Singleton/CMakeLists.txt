cmake_minimum_required(VERSION 3.10.2)

project(Singleton)

include_directories(include)

add_executable(
    ${PROJECT_NAME}.out
            
    src/Singleton.cpp
    src/SingletonClient.cpp
)

message("${PROJECT_NAME} done.")