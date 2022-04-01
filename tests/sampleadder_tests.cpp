#include <sampleadder.h>
#include <gtest/gtest.h>
#include <config.h>

TEST(sampleadder_tests_add, addTestNE)
{
    int a=10;
    int b=20;
    ASSERT_NE(6, sampleadder_add(a,b));
}

TEST(sampleadder_tests_add, addTestEQ)
{
    int a=10;
    int b=20;
    ASSERT_EQ(30, sampleadder_add(a,b));
}


TEST(sampleadder_tests_version, nameTest)
{
    ASSERT_STREQ(PROJECT_NAME, sampleadder_getLibraryName());
}

TEST(sampleadder_tests_version, verTest)
{
    ASSERT_STREQ(PROJECT_VER, sampleadder_getLibraryVersion());
}

TEST(sampleadder_tests_version, verMajorTest)
{
    ASSERT_STREQ(PROJECT_VER_MAJOR, sampleadder_getLibraryVersionMajor());
}

TEST(sampleadder_tests_version, verMinorTest)
{
    ASSERT_STREQ(PROJECT_VER_MINOR, sampleadder_getLibraryVersionMinor());
}

TEST(sampleadder_tests_version, verPatchTest)
{
    ASSERT_STREQ(PROJECT_VER_PATCH, sampleadder_getLibraryVersionPatch());
}
