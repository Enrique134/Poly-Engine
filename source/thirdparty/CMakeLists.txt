# Define project
project(Thirdparty)

# Get all files
file(GLOB libraries "*")

# Iterate trough every file
foreach(library IN LISTS libraries)

    # Check if the file is a library
    if(IS_DIRECTORY library)

        # Run the inside .cmake script to build the library
        include("${library}/_build.cmake")

    endif()

endforeach()