cmake_minimum_required(VERSION 3.22)

project(raf_manager)

# source files
include_directories((${PROJECT_SOURCE_DIR}))

add_executable(${PROJECT_NAME} main.cpp database.h)
add_library(personal personal.h personal.cpp)
add_library(student student.h student.cpp)

# target_link_libraries(${PROJECT_NAME} PUBLIC database personal student)
target_link_libraries(${PROJECT_NAME} PRIVATE personal)
target_link_libraries(${PROJECT_NAME} PRIVATE student)
