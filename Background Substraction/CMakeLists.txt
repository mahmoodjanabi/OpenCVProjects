cmake_minimum_required(VERSION 3.17)
project(Background_Substraction)

set(CMAKE_CXX_STANDARD 14)

add_executable(Background_Substraction main.cpp)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS}) # Not needed for CMake >= 2.8.11
target_link_libraries(Background_Substraction ${OpenCV_LIBS})