cmake_minimum_required(VERSION 3.16.3)
project(CMakeBB C CXX)

add_executable(${PROJECT_NAME} src/main.cpp)

add_subdirectory(lib)

target_include_directories(${PROJECT_NAME} 
    PUBLIC lib/adder
    PUBLIC lib/googletest/googletest/include
)

target_link_directories(${PROJECT_NAME} 
    PRIVATE lib/adder
    PRIVATE lib
)

target_link_libraries(${PROJECT_NAME}
    adder
    gtest_main
)

