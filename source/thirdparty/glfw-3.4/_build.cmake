
# Include includes
target_include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

# Add subdirectory to process
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/")

# Link GLFW library to the executable program
target_link_libraries(PolyEngineExe PRIVATE GLFW)