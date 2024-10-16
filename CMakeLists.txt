
cmake_minimum_required(VERSION 3.16.3)
project(hello_world)

enable_testing()

set(HELLO_WORLD_PROJECT_ROOT ${CMAKE_CURRENT_SOURCE_DIR})
add_subdirectory(hello)
add_subdirectory(world)

add_executable(main ${HELLO_WORLD_PROJECT_ROOT}/main.cpp)

target_link_libraries(main PUBLIC hellolib)
target_link_libraries(main PUBLIC worldlib)

option(BUILD_TESTS "Build tests" OFF)
if(BUILD_TESTS)
    add_subdirectory(tests)
endif()