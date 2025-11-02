#include <gtest/gtest.h>
#include "headers/Convert.hpp"

TEST(FullJustifyTest, ExampleCase)
{
    std::vector<std::string> words;
    words.push_back("The");
    words.push_back("quick");
    words.push_back("brown");
    words.push_back("fox");
    words.push_back("jumps");
    words.push_back("over");
    words.push_back("the");
    words.push_back("lazy");
    words.push_back("dog");

    std::vector<std::string> expected;
    expected.push_back("The  quick brown");
    expected.push_back("fox  jumps  over");
    expected.push_back("the lazy dog    ");

    std::vector<std::string> result = Algorithms::fullJustify(words, 16);

    for (size_t i = 0; i < expected.size(); ++i) {
        EXPECT_EQ(expected[i], result[i]);
    }
}

TEST(FullJustifyTest, EmptyInput)
{
    std::vector<std::string> words;
    std::vector<std::string> result = Algorithms::fullJustify(words, 10);
    EXPECT_TRUE(result.empty());
}

TEST(FullJustifyTest, SingleWord) 
{
    std::vector<std::string> words;
    words.push_back("Hello");

    std::vector<std::string> expected;
    expected.push_back("Hello     "); 

    std::vector<std::string> result = Algorithms::fullJustify(words, 10);
    ASSERT_EQ(1u, result.size());
    EXPECT_EQ(expected[0], result[0]);
}

TEST(FullJustifyTest, ExactFit)
{
    std::vector<std::string> words;
    words.push_back("abc");
    words.push_back("def");

    std::vector<std::string> expected;
    expected.push_back("abc def   ");

    std::vector<std::string> result = Algorithms::fullJustify(words, 10);
    EXPECT_EQ(expected[0], result[0]);
}

int
main(int argc, char **argv) 
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

