cmake_minimum_required (VERSION 2.8)

add_executable(example1 example1.cpp)
target_link_libraries(example1 LINK_PUBLIC pgnparse)
