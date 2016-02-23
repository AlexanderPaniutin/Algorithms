/*
 * GTests for: PlusOne.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "PlusOne.h"

TEST(PlusOne, Empty)
{
    PlusOne solution;
    vector<int> numbers;

    EXPECT_EQ(1, solution.plusOne(numbers).size());
    EXPECT_EQ(1, numbers[0]);
}
