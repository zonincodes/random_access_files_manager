add_library(student student.cpp)
target_link_libraries(student PUBLIC personal)
target_include_directories(student PUBLIC include)
