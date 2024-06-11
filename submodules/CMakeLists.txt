cmake_minimum_required(VERSION 3.22.0)

project(TestSubmodules VERSION 1.0.0 LANGUAGES C CXX)

set(LIBRARY_NAME "Library")

add_subdirectory(configure)
add_subdirectory(lib)
add_subdirectory(src)