cmake_minimum_required(VERSION 3.16.3)

add_library(sampleadder sampleadder.cpp)
target_include_directories(sampleadder
    PUBLIC "${PROJECT_BINARY_DIR}/inc/"
)