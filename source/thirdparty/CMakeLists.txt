project(Thirdparty)

function(GetSrcFiles local_path)
    # Get all files inside local path directory
    file(GLOB files "${local_path}/*")

    # Iterate trough every file to find source files
    foreach(file IN LISTS files)

        if(IS_DIRECTORY file)

            # Add source file to source files set
            GetSrcFiles(file)
            
        elseif(file MATCHES "\\.(c|cpp|m)$")

            # Add source file to source files set
            list(APPEND SRC_FILES file)

        endif()

    endforeach()

endfunction()

GetSrcFiles()