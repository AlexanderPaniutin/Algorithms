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

TEST(MaxDepthBTree, OnlyRoot)
{
    MaxDepthBTree solution;
    TreeNode *head = new TreeNode(1);

    EXPECT_EQ(1,  solution.maxDepth(head));
}

TEST(MaxDepthBTree, OneLeftChild)
{
    MaxDepthBTree solution;
    TreeNode *head = new TreeNode(1);
    head->left = new TreeNode(2);

    EXPECT_EQ(2,  solution.maxDepth(head));
}

TEST(MaxDepthBTree, OneRightChild)
{
    MaxDepthBTree solution;
    TreeNode *head = new TreeNode(1);
    head->right = new TreeNode(3);

    EXPECT_EQ(2,  solution.maxDepth(head));
}

TEST(MaxDepthBTree, OneLeftOneRight)
{
    MaxDepthBTree solution;
    TreeNode *head = new TreeNode(1);
    head->left = new TreeNode(2);
    head->right = new TreeNode(3);

    EXPECT_EQ(2,  solution.maxDepth(head));
}

TEST(MaxDepthBTree, DeepLeftBranch)
{
    MaxDepthBTree solution;
    TreeNode *head = new TreeNode(1);
    head->left = new TreeNode(2);
    head->left->left = new TreeNode(4);
    head->left->left->left = new TreeNode(5);
    head->left->left->left->left = new TreeNode(6);

    EXPECT_EQ(5,  solution.maxDepth(head));
}

TEST(MaxDepthBTree, DeepRightBranch)
{
    MaxDepthBTree solution;
    TreeNode *head = new TreeNode(1);
    head->right = new TreeNode(2);
    head->right->right = new TreeNode(4);
    head->right->right->right = new TreeNode(5);
    head->right->right->right->right = new TreeNode(6);

    EXPECT_EQ(5,  solution.maxDepth(head));
}
