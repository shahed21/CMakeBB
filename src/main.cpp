#include <stdio.h>
#include <adder.h>
#include <gtest/gtest.h>

TEST(AdderTests, AdderNETest)
{
    int a=10;
    int b=20;
    ASSERT_NE(6, add(a,b));
}

TEST(AdderTests, AdderEQTest)
{
    int a=10;
    int b=20;
    ASSERT_EQ(30, add(a,b));
}


int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}