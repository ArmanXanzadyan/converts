#include <gtest/gtest.h>
#include "headers/Convert.hpp"

using namespace Algorithms;

TEST(ConvertTest, SortByStrengthBasic)
{
    std::vector<std::vector<char> > matrix;
    matrix.push_back(std::vector<char>(3, 'F'));   // 3 "F"
    matrix.push_back(std::vector<char>(3, 'N'));   // 0 "F"
    matrix.push_back(std::vector<char>(3, 'F'));   // 3 "F"

    std::vector<std::string> countries;
    countries.push_back("Armenia");
    countries.push_back("Georgia");
    countries.push_back("Iran");

    std::vector<std::string> result = sortCountriesByStrength(matrix, countries);

    EXPECT_EQ("Armenia", result[0]);
    EXPECT_EQ("Iran", result[1]);
    EXPECT_EQ("Georgia", result[2]);
}

TEST(ConvertTest, StableSortCheck)
{
    std::vector<std::vector<char> > matrix;
    matrix.push_back(std::vector<char>(2, 'F'));   // 2
    matrix.push_back(std::vector<char>(2, 'F'));   // 2
    matrix.push_back(std::vector<char>(2, 'N'));   // 0

    std::vector<std::string> countries;
    countries.push_back("USA");
    countries.push_back("UK");
    countries.push_back("France");

    std::vector<std::string> result = sortCountriesByStrength(matrix, countries);

    EXPECT_EQ("USA", result[0]);
    EXPECT_EQ("UK", result[1]);
    EXPECT_EQ("France", result[2]);
}

TEST(ConvertTest, EmptyMatrix)
{
    std::vector<std::vector<char> > matrix;
    std::vector<std::string> countries;

    std::vector<std::string> result = sortCountriesByStrength(matrix, countries);

    EXPECT_TRUE(result.empty());
}

int
main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

