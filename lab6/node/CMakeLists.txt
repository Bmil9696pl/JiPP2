cmake_minimum_required(VERSION 3.16)
project(node)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(node src/main.cpp src/node.cpp)