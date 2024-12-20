# Minium version required
cmake_minimum_required(VERSION 3.4...3.28 FATAL_ERROR)

# Define project
project(PolyEngine)

# add executable
add_executable(PolyEngineExe "${CMAKE_SOURCE_DIR}/main.cpp")

# include directories
include_directories("${CMAKE_SOURCE_DIR}/core")
include_directories("${CMAKE_SOURCE_DIR}/main")

# add subdirectories
add_subdirectory("${CMAKE_SOURCE_DIR}/thirdparty")