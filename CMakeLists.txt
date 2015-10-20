cmake_minimum_required(VERSION 3.3)
project(Approximate_Pi)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp approx_pi.cpp approx_pi.h random.h)
add_executable(Approximate_Pi ${SOURCE_FILES})