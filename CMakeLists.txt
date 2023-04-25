cmake_minimum_required(VERSION 3.22)

project(raf_manager)

# source files
include_directories((${PROJECT_SOURCE_DIR}))

add_subdirectory(src)
add_executable(main main.cpp)
target_link_libraries(main PUBLIC database)
target_link_libraries(main PUBLIC personal)
target_link_libraries(main PUBLIC student)
