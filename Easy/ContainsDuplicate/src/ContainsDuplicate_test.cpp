/*
 * GTests for: ContainsDuplicate.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "ContainsDuplicate.h"

TEST(ContainsDuplicate, EmptyList)
{
    ContainsDuplicate solution;
    std::vector<int> numbers;

    EXPECT_FALSE(solution.containsDuplicate(numbers));
}
