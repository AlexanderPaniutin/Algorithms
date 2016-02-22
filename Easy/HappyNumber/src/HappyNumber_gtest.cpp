/*
 * GTests for: HappyNumber.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "HappyNumber.h"

TEST(HappyNumber, Trivials)
{
    HappyNumber solution;

    EXPECT_FALSE(solution.isHappy(0));
}

TEST(HappyNumber, Random)
{
    HappyNumber solution;

    EXPECT_TRUE(solution.isHappy(19));
}
