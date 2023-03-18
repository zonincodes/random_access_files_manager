cmake_minimum_required(VERSION 3.22)

project(raf_manager)

include_directories(${PROJECT_SOURCE_DIR})


add_subdirectory(personal)
add_subdirectory(student)
add_subdirectory(database)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} personal student database)

