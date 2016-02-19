/*
 *  solution_test.cpp
 *  Tests for solutions.cpp
 */

#include <gtest/gtest.h>
#include "MaxDepthBTree.h"

TEST(MaxDepthBTree, Empty)
{
    MaxDepthBTree solution;
    TreeNode *head = NULL;

    EXPECT_EQ(0,  solution.maxDepth(head));
}
