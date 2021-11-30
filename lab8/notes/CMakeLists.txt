cmake_minimum_required(VERSION 3.16)
project(notes)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(notes src/main.cpp src/notes.cpp)