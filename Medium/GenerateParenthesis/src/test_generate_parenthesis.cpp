#include <gtest/gtest.h>
#include "generate_parenthesis.h"

TEST(GetMax, General)
{
    EXPECT_EQ(0x0000000000000000, getMaxSupported(0));
    EXPECT_EQ(0x0000000000000003, getMaxSupported(1));
    EXPECT_EQ(0x000000000000000F, getMaxSupported(2));
    EXPECT_EQ(0x000000000000003F, getMaxSupported(3));
    EXPECT_EQ(0x00000000FFFFFFFF, getMaxSupported(16));
    EXPECT_EQ(0xFFFFFFFFFFFFFFFF, getMaxSupported(32));

    // overflow?
    EXPECT_EQ(0xFFFFFFFFFFFFFFFF, getMaxSupported(33));
}

TEST(IsValidParenthesis, TwoBits)
{
    // valid only ()
    // in bits    01
    for (int i=0; i<=0x03; ++i)
    {
        if (i == 0x01)
            EXPECT_TRUE(isValidParenthesis(i, 2));
        else
            EXPECT_FALSE(isValidParenthesis(i, 2));
    }
}

TEST(IsValidParenthesis, FourBits)
{
    // valid only (())    ()()
    // in bits    0011 3  0101 5
    for (int i=0; i<=0x0F; ++i)
    {
        if (i == 0x03 ||
            i == 0x05)
            EXPECT_TRUE(isValidParenthesis(i, 4));
        else
            EXPECT_FALSE(isValidParenthesis(i, 4));
    }
}

TEST(IsValidParenthesis, SixBits)
{
    // valid only ((()))    (()())    (())()    ()(())     ()()()
    // in bits    000111 7  001011 B  001101 D  010011 13  010101 15
    for (int i=0; i<=0x3F; ++i)
    {
        if (i == 0x07 ||
            i == 0x0B ||
            i == 0x0D ||
            i == 0x13 ||
            i == 0x15)
            EXPECT_TRUE(isValidParenthesis(i, 6));
        else
            EXPECT_FALSE(isValidParenthesis(i, 6));
    }
}

TEST(GenerateParenthesisStr, TwoBits)
{
    EXPECT_EQ("((", generateParenthesis(0x0, 2));
    EXPECT_EQ("()", generateParenthesis(0x1, 2));
    EXPECT_EQ(")(", generateParenthesis(0x2, 2));
    EXPECT_EQ("))", generateParenthesis(0x3, 2));
}

TEST(GenerateParenthesis, TwoBits)
{
    std::vector<std::string> data = generateParenthesis(1);
    EXPECT_EQ(1, data.size());
    EXPECT_EQ("()", data[0]);
}

TEST(GenerateParenthesis, FourBits)
{
    // valid only (())    ()()
    // in bits    0011 3  0101 5
    std::vector<std::string> data = generateParenthesis(2);
    EXPECT_EQ(2, data.size());
    EXPECT_EQ("(())", data[0]);
    EXPECT_EQ("()()", data[1]);
}

TEST(GenerateParenthesis, SixBits)
{
    // valid only ((()))    (()())    (())()    ()(())     ()()()
    // in bits    000111 7  001011 B  001101 D  010011 13  010101 15
    std::vector<std::string> data = generateParenthesis(3);
    EXPECT_EQ(5, data.size());
    EXPECT_EQ("((()))", data[0]);
    EXPECT_EQ("(()())", data[1]);
    EXPECT_EQ("(())()", data[2]);
    EXPECT_EQ("()(())", data[3]);
    EXPECT_EQ("()()()", data[4]);
}

TEST(GenerateParenthesis2, TwoBits)
{
    std::vector<std::string> data = generateParenthesis2(1);
    EXPECT_EQ(1, data.size());
    EXPECT_EQ("()", data[0]);
}

TEST(GenerateParenthesis2, FourBits)
{
    // valid only (())    ()()
    // in bits    0011 3  0101 5
    std::vector<std::string> data = generateParenthesis2(2);
    EXPECT_EQ(2, data.size());
    EXPECT_EQ("(())", data[0]);
    EXPECT_EQ("()()", data[1]);
}

TEST(GenerateParenthesis2, SixBits)
{
    // valid only ((()))    (()())    (())()    ()(())     ()()()
    // in bits    000111 7  001011 B  001101 D  010011 13  010101 15
    std::vector<std::string> data = generateParenthesis2(3);
    EXPECT_EQ(5, data.size());
    EXPECT_EQ("((()))", data[0]);
    EXPECT_EQ("(()())", data[1]);
    EXPECT_EQ("(())()", data[2]);
    EXPECT_EQ("()(())", data[3]);
    EXPECT_EQ("()()()", data[4]);
}