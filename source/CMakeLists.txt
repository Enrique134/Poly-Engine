cmake_minimum_required(VERSION 3.10)
project(PolyEngine)

# include directories
include_directories(${CMAKE_SOURCE_DIR}/thirdparty/includes)
include_directories(${CMAKE_SOURCE_DIR}/main)

# link directories
link_directories(${CMAKE_SOURCE_DIR}/thirdparty/libraries)

# Add executable
add_executable(${CMAKE_SOURCE_DIR}/main/main.cpp)