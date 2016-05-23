/*
 * GTests for: BinaryTreePaths.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "BinaryTreePaths.h"

TEST(BinaryTreePaths, Empty)
{
    BinaryTreePaths solution;
    std::vector<std::string> paths = solution.binaryTreePaths(NULL);

    EXPECT_EQ(0, paths.size());
}

TEST(BinaryTreePaths, SingleItem)
{
    BinaryTreePaths solution;
    std::vector<std::string> paths = solution.binaryTreePaths(new TreeNode(1));

    EXPECT_EQ(1, paths.size());
    EXPECT_EQ("1", paths[0]);
}

TEST(BinaryTreePaths, CustomTree)
{
    BinaryTreePaths solution;

    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(6);

    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(7);

    root->left->left->right = new TreeNode(5);
    root->right->left->right = new TreeNode(8);

    /*
            1
        /      \
       2        6
     /  \     /
    3    4   7
     \        \
      5        8
    */
    std::vector<std::string> paths = solution.binaryTreePaths(root);
    
    EXPECT_EQ(3, paths.size());
    EXPECT_EQ("1->2->3->5", paths[0]);
    EXPECT_EQ("1->2->4", paths[1]);
    EXPECT_EQ("1->6->7->8", paths[2]);
}
