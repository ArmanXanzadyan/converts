#include "gtest/gtest.h"
#include "headers/Convert.hpp"

using namespace Algorithms;

TEST(ConvertTest, ComputeFastBasic)
{
    int input[] = {2, 0, 1};
    int expected[] = {1, 2, 0};
    int output[3];

    compute_fast(input, 3, output);

    for (int i = 0; i < 3; ++i) {
        EXPECT_EQ(output[i], expected[i]);
    }
}

TEST(ConvertTest, ComputeInplaceBasic)
{
    int input[] = {2, 0, 1};
    int expected[] = {1, 2, 0};

    compute_inplace(input, 3);

    for (int i = 0; i < 3; ++i) {
        EXPECT_EQ(input[i], expected[i]);
    }
}

TEST(ConvertTest, ComputeFastLarger)
{
    int input[] = {4, 0, 2, 1, 3};
    int expected[] = {3, 4, 2, 0, 1};
    int output[5];

    compute_fast(input, 5, output);

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(output[i], expected[i]);
    }
}

TEST(ConvertTest, ComputeInplaceLarger)
{
    int input[] = {4, 0, 2, 1, 3};
    int expected[] = {3, 4, 2, 0, 1};

    compute_inplace(input, 5);

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(input[i], expected[i]);
    }
}

int
main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
