# Minium version required
cmake_minimum_required(VERSION 3.4...3.28 FATAL_ERROR)

# Define project
project(PolyEngine)

# include directories
include_directories(core)
include_directories(main)

# add library
add_library(PolyEngineExe "main/main.cpp")

# add subdirectories
add_subdirectory(thirdparty)