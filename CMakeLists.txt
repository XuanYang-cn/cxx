cmake_minimum_required( VERSION 3.16 FATAL_ERROR )

project( cxx VERSION 0.0.0 )

option( RANDOM_CXX "If build utils/random_cxx.cpp" ON )

if( RANDOM_CXX )
    add_executable( test_random )
    target_sources( test_random PRIVATE utils/random_cxx.cpp )
endif()
