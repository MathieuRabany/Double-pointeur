cmake_minimum_required(VERSION 3.14)
project(double_pointeur C)

set(CMAKE_C_STANDARD 99)

add_executable(double_pointeur main.c circ_list.c circ_list.h)