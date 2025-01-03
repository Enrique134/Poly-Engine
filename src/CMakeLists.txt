# Minium version required
cmake_minimum_required(VERSION 3.4...3.28 FATAL_ERROR)

# Define project
project(PolyEngine)

# add library
add_library(PolyEngineLib "main/main.cpp")

# include directories
target_include_directories(PolyEngineLib PRIVATE core)
target_include_directories(PolyEngineLib PRIVATE main)

# add subdirectories
add_subdirectory(thirdparty)