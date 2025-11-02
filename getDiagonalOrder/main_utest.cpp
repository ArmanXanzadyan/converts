#include "gtest/gtest.h"
#include "headers/Convert.hpp" 

TEST(DiagonalOrderTest, ExampleTest)
{
    std::vector<std::vector<int> > matrix = {
        {1, 2, 3, 4, 5},
        {6, 7},
        {8},
        {9, 10, 11},
        {12, 13, 14, 15, 16}
    };

    std::vector<int> expected = {1, 6, 2, 8, 7, 3, 9, 4, 12, 10, 5, 13, 11, 14, 15, 16};

    std::vector<int> result = Algorithms::getDiagonalOrder(matrix);

    for (size_t i = 0; i < expected.size(); ++i) {
        EXPECT_EQ(expected[i], result[i]) << "Mismatch at index " << i;
    }
}

int
main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

