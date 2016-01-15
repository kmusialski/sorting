cmake_minimum_required(VERSION 3.3)
project(sorting)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp include/BSORT.h include/InsertionSort.h include/INSORT.h include SELSORT.cpp BSORT.cpp InsertionSort.cpp INSORT.cpp SELSORT.cpp)
add_executable(proba ${SOURCE_FILES})