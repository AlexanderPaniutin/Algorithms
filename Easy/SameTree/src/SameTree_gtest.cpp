/*
 * GTests for: SameTree.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "SameTree.h"

TEST(SameTree, TwoEmpty)
{
    SameTree solution;
    TreeNode *head1 = NULL;
    TreeNode *head2 = NULL;

    EXPECT_TRUE(solution.isSameTree(head1, head2));
}
