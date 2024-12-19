# Define project
project(Thirdparty)

# Get all files
file(GLOB libraries RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*")

# Iterate trough every file
foreach(library IN LISTS libraries)

    # Check if the file is a library
    if(IS_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/${library}")

        # Check if the library has a CMakeLists.txt
        if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${library}/CMakeLists.txt")

            # Add the subdirectory
            add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/${library}")

        endif()

        target_include_directories(PolyEngineExe PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/${library}/include")

        # Run the inside .cmake script to build the library
        include("${library}/_build.cmake")

    endif()

endforeach()