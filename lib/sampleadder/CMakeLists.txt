cmake_minimum_required(VERSION 3.16.3)

if(ENABLE_SAMPLE_BUILD)
    if(ENABLE_SAMPLE_ADDER_BUILD)
        add_library(sampleadder sampleadder.cpp)
        target_include_directories(sampleadder
            PUBLIC "${PROJECT_BINARY_DIR}/inc/"
        )
    endif()
endif()
