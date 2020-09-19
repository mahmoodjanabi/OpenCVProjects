cmake_minimum_required(VERSION 3.17)
project(Binary_Thresholding)

set(CMAKE_CXX_STANDARD 14)

add_executable(Binary_Thresholding main.cpp)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS}) # Not needed for CMake >= 2.8.11
target_link_libraries(Binary_Thresholding ${OpenCV_LIBS})