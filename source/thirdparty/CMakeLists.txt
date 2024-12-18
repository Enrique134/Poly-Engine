project(Thirdparty)

file(GLOB files "*")

foreach(file IN LISTS files)
    if(PATH_TO_FILE MATCHES "\\.(c|cpp|)$")

    endif()
endforeach()

list(APPEND SRC_FILES)