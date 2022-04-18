cmake_minimum_required( VERSION 3.16 FATAL_ERROR )

if( APPLE )
    message("Working on MacOS")
    set( CMAKE_CXX_COMPILER clang++ )
    set( CMAKE_C_COMPILER clang )
endif()


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project (rua VERSION 0.0.0)

add_executable( rua )
target_sources( rua 
    PRIVATE
        main.cpp
        rua.cpp )
