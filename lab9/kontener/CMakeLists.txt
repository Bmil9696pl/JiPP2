cmake_minimum_required(VERSION 3.16)
project(kontener)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(kontener src/main.cpp src/kontener.cpp)