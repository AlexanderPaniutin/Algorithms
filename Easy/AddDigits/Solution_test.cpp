/*
 *  solution_test.cpp
 *  Tests for solutions.cpp
 */

#include <gtest/gtest.h>
#include "Solution.h"

TEST(Solution, Main)
{
    Solution solution;
    EXPECT_EQ(0,  solution.addDigits(0));
    EXPECT_EQ(1,  solution.addDigits(10));
    EXPECT_EQ(1,  solution.addDigits(1));
    EXPECT_EQ(1,  solution.addDigits(1000000));
    
    // 123456789 => 45
    // 45 => 9
    EXPECT_EQ(9,  solution.addDigits(123456789));
}
