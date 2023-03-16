cmake_minimum_required(VERSION 3.0)
project(personal)

add_library(student student.h student.cpp)
target_include_directories(personal PUBLIC include/)