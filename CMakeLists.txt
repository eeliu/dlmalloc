cmake_minimum_required(VERSION 3.0)
project (dlmalloc C)

add_library (${PROJECT_NAME} malloc-2.8.4.c main.c)
target_compile_definitions(${PROJECT_NAME} PUBLIC ONLY_MSPACES)