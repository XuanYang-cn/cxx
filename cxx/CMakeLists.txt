cmake_minimum_required( VERSION 3.18 FATAL_ERROR )

project( cxx VERSION 0.0.0 )

option (YX "option YX" OFF)

if (YX)
    add_compile_options("-DYX")
endif()


add_executable( yx )
target_sources( yx PRIVATE test_compile_options.cpp )
