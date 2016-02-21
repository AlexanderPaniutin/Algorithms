/*
 * GTests for: NumberOf1Bits.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "NumberOf1Bits.h"

TEST(NumberOf1Bits, Empty)
{
    NumberOf1Bits solution;

    EXPECT_EQ(0, solution.hammingWeight(0));
}
