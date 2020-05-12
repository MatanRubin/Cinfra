cmake_minimum_required(VERSION 2.8)
project(Cinfra)

string(ASCII 27 Esc)
set(ColorReset  "${Esc}[m")
set(Red         "${Esc}[31m")
set(Green       "${Esc}[32m")
set(Yellow      "${Esc}[33m")
set(Blue        "${Esc}[34m")
set(White       "${Esc}[37m")

# Force off-tree build
if (${CMAKE_CURRENT_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_BINARY_DIR})
    message(FATAL_ERROR
            "${Red}CMake generation is not allowed within the source dir!
            Remove the CMakeCache.txt file and try again from another folder, e.g.:
               rm CMakeCache.txt
               mkdir build
               cd build
               cmake ..
               make
               ${ColorReset}")
endif()

# . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .

# Automatically add current source and binary dirs to the include path
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Threads REQUIRED)


set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu99")

enable_testing()
add_subdirectory(src)

