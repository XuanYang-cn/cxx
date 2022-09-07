cmake_minimum_required( VERSION 3.18 FATAL_ERROR )

project( pragma_omp VERSION 0.0.0 )

set(CMAKE_C_FLAGS "-fopenmp")
add_executable( pragma_omp )
target_sources( pragma_omp PRIVATE main.c)
target_link_libraries(pragma_omp )
