cmake_minimum_required(VERSION 3.16.3)
project(CMakeBB C)

add_executable(${PROJECT_NAME} src/main.c)

add_subdirectory(lib)

target_include_directories(${PROJECT_NAME} 
    PUBLIC lib/adder
)

target_link_directories(${PROJECT_NAME} 
    PRIVATE lib/adder
)

target_link_libraries(${PROJECT_NAME}
    adder
)