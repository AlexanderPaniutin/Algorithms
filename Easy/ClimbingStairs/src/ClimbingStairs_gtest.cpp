/*
 * GTests for: ClimbingStairs.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "ClimbingStairs.h"

TEST(ClimbingStairs, ZeroStairs)
{
    ClimbingStairs solution;

    EXPECT_EQ(0, solution.climbStairs(0));
}

TEST(ClimbingStairs, OneStair)
{
    ClimbingStairs solution;

    EXPECT_EQ(1, solution.climbStairs(1));
}

TEST(ClimbingStairs, TwoStairs)
{
    ClimbingStairs solution;

    EXPECT_EQ(2, solution.climbStairs(2));
}

TEST(ClimbingStairs, TreeStairs)
{
    ClimbingStairs solution;

    EXPECT_EQ(3, solution.climbStairs(3));
}
