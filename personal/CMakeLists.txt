cmake_minimum_required(VERSION 3.0)
project(personal)

add_library(personal personal.h personal.cpp)
target_include_directories(personal PUBLIC include/)