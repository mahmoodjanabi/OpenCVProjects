cmake_minimum_required(VERSION 3.17)
project(Real_Time_Image_Thresholding)

set(CMAKE_CXX_STANDARD 14)

add_executable(Real_Time_Image_Thresholding main.cpp)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS}) # Not needed for CMake >= 2.8.11
target_link_libraries(Real_Time_Image_Thresholding ${OpenCV_LIBS})