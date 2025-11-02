#include <gtest/gtest.h>
#include "headers/Convert.hpp"
#include <vector>

TEST(ProjectionAreaTest, ExampleCase)
{
    std::vector<std::vector<int> > grid;
    grid.push_back(std::vector<int>());
    grid[0].push_back(0);
    grid[0].push_back(1);

    grid.push_back(std::vector<int>());
    grid[1].push_back(1);
    grid[1].push_back(2);

    std::vector<int> result = Algorithms::projectionArea<int>(grid);

    EXPECT_EQ(result[0], 1200);  
    EXPECT_EQ(result[1], 192);   
    EXPECT_EQ(result[2], 192);   
}

TEST(ProjectionAreaTest, EmptyGrid)
{
    std::vector<std::vector<int> > grid;
    std::vector<int> result = Algorithms::projectionArea<int>(grid);

    EXPECT_EQ(result[0], 0);
    EXPECT_EQ(result[1], 0);
    EXPECT_EQ(result[2], 0);
}

TEST(ProjectionAreaTest, SingleBuilding)
{
    std::vector<std::vector<int> > grid(1, std::vector<int>(1, 3));
    std::vector<int> result = Algorithms::projectionArea<int>(grid);

    EXPECT_EQ(result[0], 400); 
    EXPECT_EQ(result[1], 192); 
    EXPECT_EQ(result[2], 192); 
}

int
main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

