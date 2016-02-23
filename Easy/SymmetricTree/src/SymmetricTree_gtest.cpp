/*
 * GTests for: SymmetricTree.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "SymmetricTree.h"

TEST(SymmetricTree, Empty)
{
    SymmetricTree solution;
    TreeNode *head = NULL;

    EXPECT_TRUE(solution.isSymmetric(head));
}
