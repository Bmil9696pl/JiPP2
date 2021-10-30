cmake_minimum_required(VERSION 3.16)
project(prostopadl)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(prostopadl src/main.cpp src/prostopadloscian.cpp)