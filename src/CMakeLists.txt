cmake_minimum_required(VERSION 2.8)

add_library(pgnparse
	pgnparse.cpp
)

target_include_directories(pgnparse PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
