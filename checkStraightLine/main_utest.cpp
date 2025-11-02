#include <gtest/gtest.h>
#include <vector>
#include "headers/Convert.hpp"

TEST(CheckStraightLineTest, TwoPoints)
{
    std::vector<std::vector<int> > coords;
    coords.push_back(std::vector<int>());
    coords.push_back(std::vector<int>());

    coords[0].push_back(0); coords[0].push_back(0);
    coords[1].push_back(1); coords[1].push_back(1);

    EXPECT_TRUE(Algorithms::checkStraightLine<int>(coords));
}

TEST(CheckStraightLineTest, ThreePoints)
{
    std::vector<std::vector<int> > coords;
    coords.push_back(std::vector<int>());
    coords.push_back(std::vector<int>());
    coords.push_back(std::vector<int>());

    coords[0].push_back(0); coords[0].push_back(0);
    coords[1].push_back(1); coords[1].push_back(1);
    coords[2].push_back(2); coords[2].push_back(2);

    EXPECT_TRUE(Algorithms::checkStraightLine<int>(coords));
}

TEST(CheckStraightLineTest, HorizontalLine)
{
    std::vector<std::vector<int> > coords;
    coords.push_back(std::vector<int>());
    coords.push_back(std::vector<int>());
    coords.push_back(std::vector<int>());

    coords[0].push_back(0); coords[0].push_back(5);
    coords[1].push_back(1); coords[1].push_back(5);
    coords[2].push_back(2); coords[2].push_back(5);

    EXPECT_TRUE(Algorithms::checkStraightLine<int>(coords));
}

TEST(CheckStraightLineTest, VerticalLine)
{
    std::vector<std::vector<int> > coords;
    coords.push_back(std::vector<int>());
    coords.push_back(std::vector<int>());
    coords.push_back(std::vector<int>());

    coords[0].push_back(3); coords[0].push_back(0);
    coords[1].push_back(3); coords[1].push_back(1);
    coords[2].push_back(3); coords[2].push_back(2);

    EXPECT_TRUE(Algorithms::checkStraightLine<int>(coords));
}

int
main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
