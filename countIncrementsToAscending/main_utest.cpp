#include "gtest/gtest.h"
#include "headers/Convert.hpp"

using namespace Algorithms;

TEST(ConvertIncrementsTest, AlreadyAscending)
{
    int input[] = {1, 2, 3, 4, 5};
    EXPECT_EQ(countIncrementsToAscending(input, 5), 0);
}

TEST(ConvertIncrementsTest, SimpleCase)
{
    int input[] = {2, 1, 7};
    // ++in[1], ++in[1] => 2 increments needed
    EXPECT_EQ(countIncrementsToAscending(input, 3), 2);
}

TEST(ConvertIncrementsTest, AllEqual)
{
    int input[] = {5, 5, 5};
    // second element: needs 1 increment (to 6)
    // third element: needs 2 increments (to 7)
    // total = 3
    EXPECT_EQ(countIncrementsToAscending(input, 3), 3);
}

TEST(ConvertIncrementsTest, DecreasingArray)
{
    int input[] = {5, 4, 3, 2};
    // 4->6 (+2), 3->7 (+4), 2->8 (+6), total = 12
    EXPECT_EQ(countIncrementsToAscending(input, 4), 12);
}

TEST(ConvertIncrementsTest, SingleElement)
{
    int input[] = {42};
    EXPECT_EQ(countIncrementsToAscending(input, 1), 0);
}

int
main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
