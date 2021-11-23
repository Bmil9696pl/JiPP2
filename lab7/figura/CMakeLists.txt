cmake_minimum_required(VERSION 3.16)
project(figura)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(figura src/main.cpp src/figura.cpp)