#include <stdio.h>
#include <adder.h>
#include <gtest/gtest.h>

TEST(TestSuiteSample, TestSample)
{
    ASSERT_EQ(6, 1+5);
}

int main(int argc, char** argv) {
    int a=10;
    int b=20;
    printf("a+b=%d\n", add(a,b));

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}