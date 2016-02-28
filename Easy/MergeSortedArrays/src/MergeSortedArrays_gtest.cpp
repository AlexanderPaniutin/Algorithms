/*
 * GTests for: MergeSortedArrays.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "MergeSortedArrays.h"

TEST(MergeSortedArrays, Empty)
{
    MergeSortedArrays solution;
    vector<int> nums1;
    vector<int> nums2;

    solution.merge(nums1, 0, nums2, 0);
    EXPECT_EQ(0, nums1.size());
}
