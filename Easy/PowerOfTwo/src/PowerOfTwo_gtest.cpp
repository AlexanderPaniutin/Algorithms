/*
 * GTests for: PowerOfTwo.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "PowerOfTwo.h"

TEST(PowerOfTwo, Empty)
{
    PowerOfTwo solution;

    EXPECT_FALSE(solution.isPowerOfTwo(0));
    EXPECT_TRUE(solution.isPowerOfTwo(1));
}
