cmake_minimum_required(VERSION 3.16)
project(samochod)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(samochod src/main.cpp src/samochod.cpp)