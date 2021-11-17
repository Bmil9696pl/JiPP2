cmake_minimum_required(VERSION 3.16)
project(triangle)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(triangle src/main.cpp src/triangle.cpp)