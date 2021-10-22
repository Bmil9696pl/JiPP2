cmake_minimum_required(VERSION 3.16)
project(allocation_basics)

set(CMAKE_CXX_STANDARD 20)

#include_directories(matrixLib)

add_executable(allocation_basics main.cpp)

#target_link_libraries(HelloWorld pthread)