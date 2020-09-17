cmake_minimum_required(VERSION 3.17)
project(Face_Detection_in_Real_Time)

set(CMAKE_CXX_STANDARD 14)

add_executable(Face_Detection_in_Real_Time main.cpp)


find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS}) # Not needed for CMake >= 2.8.11
target_link_libraries(Face_Detection_in_Real_Time ${OpenCV_LIBS})