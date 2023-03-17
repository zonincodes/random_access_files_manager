cmake_minimum_required(VERSION 3.0)
project(database)

add_library(database database.h database.cpp)
target_include_directories(database PUBLIC include/)