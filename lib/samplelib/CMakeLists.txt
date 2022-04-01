cmake_minimum_required(VERSION 3.16.3)

add_library(samplelib samplelib.cpp)
target_include_directories(samplelib
    PUBLIC "${PROJECT_BINARY_DIR}/src/"
)