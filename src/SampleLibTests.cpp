//#include <stdio.h>
#include <samplelib.h>
#include <gtest/gtest.h>
#include <config.h>

TEST(SampleLibTests, SampleLibNETest)
{
    int a=10;
    int b=20;
    ASSERT_NE(6, samplelib_add(a,b));
}

TEST(SampleLibTests, SampleLibEQTest)
{
    int a=10;
    int b=20;
    ASSERT_EQ(30, samplelib_add(a,b));
}


TEST(SampleLibVersionTests, SampleLibNameTest)
{
    ASSERT_STREQ(PROJECT_NAME, samplelib_getLibraryName());
}

TEST(SampleLibVersionTests, SampleLibVerTest)
{
    ASSERT_STREQ(PROJECT_VER, samplelib_getLibraryVersion());
}

TEST(SampleLibVersionTests, SampleLibVerMajorTest)
{
    ASSERT_STREQ(PROJECT_VER_MAJOR, samplelib_getLibraryVersionMajor());
}

TEST(SampleLibVersionTests, SampleLibVerMinorTest)
{
    ASSERT_STREQ(PROJECT_VER_MINOR, samplelib_getLibraryVersionMinor());
}

TEST(SampleLibVersionTests, SampleLibVerPatchTest)
{
    ASSERT_STREQ(PROJECT_VER_PATCH, samplelib_getLibraryVersionPatch());
}


// int main(int argc, char** argv) {
//     testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }