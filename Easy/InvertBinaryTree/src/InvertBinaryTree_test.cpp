/*
 * GTests for: InvertBinaryTree.h
 *     Author: Alex Paniutin
 *    Created: Feb 20, 2016
 *
 */

#include <gtest/gtest.h>
#include "InvertBinaryTree.h"

TEST(InvertBinaryTree, EmptyList)
{
    InvertBinaryTree solution;
    TreeNode *head = NULL;

    solution.invertTree(head);
    EXPECT_EQ(NULL, head);
}
