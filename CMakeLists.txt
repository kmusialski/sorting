cmake_minimum_required(VERSION 3.3)
project(sorting)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Algorithm.cpp Algorithm.h BubbleSort.cpp BubbleSort.h SelectionSort.cpp SelectionSort.h InsertionSort.cpp InsertionSort.h Collector.cpp Collector.h)
add_executable(sorting ${SOURCE_FILES})