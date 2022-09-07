cmake_minimum_required( VERSION 3.18 FATAL_ERROR )

project( pragma_once VERSION 0.0.0 )

add_executable( pragma_once )
target_sources( pragma_once PRIVATE child.c)
