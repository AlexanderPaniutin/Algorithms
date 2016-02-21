/*
 * GTests for: MajorityElement.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "MajorityElement.h"

TEST(MajorityElement, EmptyList)
{
    MajorityElement solution;
    vector<int> numbers;

    EXPECT_EQ(0, solution.majorityElement(numbers));
}
