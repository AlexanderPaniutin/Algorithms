/*
 * GTests for: HouseRobber.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "HouseRobber.h"

TEST(HouseRobber, Empty)
{
    HouseRobber solution;
    vector<int> numbers;

    EXPECT_EQ(0, solution.rob(numbers));
}
