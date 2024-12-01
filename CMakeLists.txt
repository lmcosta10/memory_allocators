cmake_minimum_required(VERSION 3.20)

project("Memory Allocators")

add_library(salloc src/salloc/salloc.c)

add_executable(main src/main.c)
target_link_libraries(main PRIVATE salloc)