/*
 * GTests for: RomanToInt.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "RomanToInt.h"

TEST(RomanToInt, Empty)
{
    RomanToInt solution;

    EXPECT_EQ(0, solution.romanToInt(""));
}
