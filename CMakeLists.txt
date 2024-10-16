
cmake_minimum_required(VERSION 3.16.3)
project(hello_world)

add_executable(main main.cpp hello/hello.cpp world/world.cpp)

target_include_directories(main PUBLIC hello world)