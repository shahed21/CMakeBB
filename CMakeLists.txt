cmake_minimum_required(VERSION 3.16.3)
project(SampleExeWithLib 
    VERSION 0.1.0
    LANGUAGES C CXX)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

configure_file(
    inc/config.h.in 
    inc/config.h
)


include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

add_executable(${PROJECT_NAME} tests/sampleadder_tests.cpp)

add_subdirectory(lib)

target_include_directories(${PROJECT_NAME} 
    PUBLIC "${PROJECT_BINARY_DIR}/inc/"
    PUBLIC lib/sampleadder/
)

target_link_directories(${PROJECT_NAME} 
    PRIVATE lib/sampleadder
)

target_link_libraries(${PROJECT_NAME}
    sampleadder
    gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})