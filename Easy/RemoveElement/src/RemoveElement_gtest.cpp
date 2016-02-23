/*
 * GTests for: RemoveElement.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "RemoveElement.h"

TEST(RemoveElement, Empty)
{
    RemoveElement solution;
    vector<int> numbers;

    EXPECT_EQ(0, solution.removeElement(numbers, 0));
}
