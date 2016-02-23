/*
 * GTests for: RemoveDuplicatesInSortedArray.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "RemoveDuplicatesInSortedArray.h"

TEST(RemoveDuplicatesInSortedArray, Empty)
{
    RemoveDuplicatesInSortedArray solution;
    vector<int> numbers;

    EXPECT_EQ(0, solution.removeDuplicates(numbers));
}
