# Include includes
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

target_sources(PolyEngineExe PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/src/glad.c")