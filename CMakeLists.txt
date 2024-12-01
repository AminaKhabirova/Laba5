cmake_minimum_required(VERSION 3.22)
project(Laba5)

set(CMAKE_CXX_STANDARD 20)

add_executable(Laba5 main.cpp)
add_executable(Laba5Task1 Task1/task1.cpp
        Task1/class_binary_int.cpp
        Task1/task1.h)
