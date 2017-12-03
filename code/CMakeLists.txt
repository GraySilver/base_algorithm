cmake_minimum_required(VERSION 3.6)
project(base_algorithm)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp algo/binarySearch.cpp algo/binarySearch.h)
add_executable(base_algorithm ${SOURCE_FILES})