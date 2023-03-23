cmake_minimum_required(VERSION 3.22)

project(raf_manager)

# source files
set(SRC_FILES 
    main.cpp
    student.cpp
    personal.cpp
    # database.cpp
)

# header files
set(HDR_FILES 
    student.h
    personal.h
    database.h
)

# create an executable and link the source and header files
add_executable(${PROJECT_NAME} ${SRC_FILES} ${HDR_FILES})