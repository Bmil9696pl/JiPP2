cmake_minimum_required(VERSION 3.16)
project(fkward)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(fkwadr src/main.cpp src/kwadr.cpp)