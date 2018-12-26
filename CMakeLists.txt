cmake_minimum_required (VERSION 2.6)
project (RadiologyNeuralNetwork)
set(CMAKE_BINARY_DIR ./build)
set(CMAKE_CXX_FLAGS "-g -Wall")

include_directories(src)
add_subdirectory(src)
