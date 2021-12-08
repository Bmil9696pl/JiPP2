cmake_minimum_required(VERSION 3.16)
project(odtwarzacz)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(odtwarzacz src/main.cpp src/odtwarzacz.cpp)