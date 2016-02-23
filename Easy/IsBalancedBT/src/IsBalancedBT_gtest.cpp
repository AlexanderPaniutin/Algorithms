/*
 * GTests for: IsBalancedBT.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "IsBalancedBT.h"

TEST(IsBalancedBT, Empty)
{
    IsBalancedBT solution;
    TreeNode *head = NULL;

    int level = 0;
    EXPECT_TRUE(solution.checkIfBalanced(head, level));
}
