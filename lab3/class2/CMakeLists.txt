cmake_minimum_required(VERSION 3.16)
project(kula)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(kula src/main.cpp src/kula.cpp)