cmake_minimum_required(VERSION 3.22)

project(raf_manager)

include_directories(${PROJECT_SOURCE_DIR})

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(personal)
add_subdirectory(student)

target_include_directories(${PROJECT_NAME}
    PUBLIC personal
    PUBLIC student
)

target_link_directories(${PROJECT_NAME} 
    PUBLIC personal
    PUBLIC student
)

target_link_libraries(${PROJECT_NAME} personal student)