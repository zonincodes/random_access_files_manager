add_library(database database.cpp)
target_link_libraries(database PUBLIC personal student)
target_include_directories(database PUBLIC include)
# target_link_libraries(database PRIVATE student)