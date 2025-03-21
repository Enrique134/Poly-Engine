#[[
    Iterates through every third party library directory, and implements them in two posible ways
    depending the condition that has been satisfied:
    - If it haves CMakeLists.txt            ::  
    - If it don't haves a CMakeLists.txt    ::  
]]

# Get all files
file(GLOB libraries RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*")

# Iterate trough every file
foreach(library IN LISTS libraries)

    # Check if the file is a library
    if(IS_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/${library}")

        # Look for a CMakeLists.txt file
        if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${library}/CMakeLists.txt")
            target_include_directories(PolyEngineLib PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/${library}/include")
            add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/${library}")

        else()

            file(GLOB src "${CMAKE_CURRENT_SOURCE_DIR}/${library}/src/*")
            add_library(${library} STATIC ${src})
            target_include_directories(${library} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/${library}/include")
            target_link_libraries(PolyEngineLib PRIVATE ${library})

        endif()
        
    endif()

endforeach()

target_link_libraries(PolyEngineLib PRIVATE glfw)