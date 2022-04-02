#include <samplecombinatorics.h>
#include <gtest/gtest.h>
#include <config.h>

TEST(samplecombinatorics_tests_add, addTestNE)
{
    int a=10;
    int b=20;
    ASSERT_NE(6, samplecombinatorics_add(a,b));
}

TEST(samplecombinatorics_tests_add, addTestEQ)
{
    int a=10;
    int b=20;
    ASSERT_EQ(30, samplecombinatorics_add(a,b));
}


TEST(samplecombinatorics_tests_version, nameTest)
{
    ASSERT_STREQ(PROJECT_NAME, samplecombinatorics_getLibraryName());
}

TEST(samplecombinatorics_tests_version, verTest)
{
    ASSERT_STREQ(PROJECT_VER, samplecombinatorics_getLibraryVersion());
}

TEST(samplecombinatorics_tests_version, verMajorTest)
{
    ASSERT_STREQ(PROJECT_VER_MAJOR, samplecombinatorics_getLibraryVersionMajor());
}

TEST(samplecombinatorics_tests_version, verMinorTest)
{
    ASSERT_STREQ(PROJECT_VER_MINOR, samplecombinatorics_getLibraryVersionMinor());
}

TEST(samplecombinatorics_tests_version, verPatchTest)
{
    ASSERT_STREQ(PROJECT_VER_PATCH, samplecombinatorics_getLibraryVersionPatch());
}
