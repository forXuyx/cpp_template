
cmake_minimum_required(VERSION 3.16.3)
project(test)

add_subdirectory(${HELLO_WORLD_PROJECT_ROOT}/thirdpackage/googletest googletest)

add_executable(test_hello ${CMAKE_CURRENT_SOURCE_DIR}/test_hello.cpp)
target_include_directories(test_hello PUBLIC ${HELLO_WORLD_PROJECT_ROOT}/thirdpackage/googletest/googletest/include)
target_include_directories(test_hello PUBLIC ${HELLO_WORLD_PROJECT_ROOT})
target_link_libraries(test_hello PUBLIC hellolib gtest gtest_main)

add_test(NAME test_hello
         COMMAND test_hello)