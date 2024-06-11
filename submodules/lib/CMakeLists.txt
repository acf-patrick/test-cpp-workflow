add_library(Library STATIC lib.cc)
target_include_directories(
    Library 
    PUBLIC 
    "./"
    "${CMAKE_SOURCE_DIR}/configured"
)