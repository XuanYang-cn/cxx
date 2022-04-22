cmake_minimum_required( VERSION 3.16 FATAL_ERROR )

if( APPLE )
    message("===== Working on MacOS =====")
    set( CMAKE_CXX_COMPILER clang++ )
    set( CMAKE_C_COMPILER clang )
endif()


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


project (rua VERSION 0.0.0)


add_library( employee OBJECT Employee.cpp)
add_library( database OBJECT Database.cpp)
add_executable( main $<TARGET_OBJECTS:employee>
                     $<TARGET_OBJECTS:database>
                     main.cpp )

add_executable( test_employee
    $<TARGET_OBJECTS:employee>
    EmployeeTest.cpp )

add_executable( test_database 
    $<TARGET_OBJECTS:employee>
    $<TARGET_OBJECTS:database>
    DatabaseTest.cpp )

set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR})
message("Installing targets on ${CMAKE_INSTALL_PREFIX}")
install(TARGETS main test_employee test_database)
