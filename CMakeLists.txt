cmake_minimum_required(VERSION 3.25)
project(calculateShapes C)

set(CMAKE_C_STANDARD 11)

add_executable(calculateShapes main.c circle.h triangle.h)
