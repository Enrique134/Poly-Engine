# set project
project(PolyEngine)

# include directories
include_directories("${CMAKE_SOURCE_DIR}/core")
include_directories("${CMAKE_SOURCE_DIR}/main")
include_directories("${CMAKE_SOURCE_DIR}/thirdparty")

# declare variables
set(SRC_FILES)

# add executable
add_executable(PolyEngineExe "${CMAKE_SOURCE_DIR}/main/main.cpp" ${SRC_FILES})