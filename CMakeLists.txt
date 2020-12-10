cmake_minimum_required(VERSION 3.0)
project (test)
set (CMAKE_CXX_STANDARD 11)


add_subdirectory(dlmalloc)
add_executable(${PROJECT_NAME} main.c)
target_compile_definitions(${PROJECT_NAME} PRIVATE ONLY_MSPACES=1)
target_link_libraries(${PROJECT_NAME} dlmalloc)

add_executable(test1 test_async.cpp)
target_link_libraries(test1 pthread)
