cmake_minimum_required(VERSION 3.16.3)
project(SampleLib C CXX)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

add_executable(${PROJECT_NAME} src/SampleLibTests.cpp)

add_subdirectory(lib)

target_include_directories(${PROJECT_NAME} 
    PUBLIC lib/samplelib
#    PUBLIC lib/googletest/googletest/include
)

target_link_directories(${PROJECT_NAME} 
    PRIVATE lib/samplelib
#    PRIVATE lib
)

target_link_libraries(${PROJECT_NAME}
    samplelib
    gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})