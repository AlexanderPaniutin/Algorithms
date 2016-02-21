/*
 * GTests for: LowestCommAncBST.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "LowestCommAncBST.h"

TEST(LowestCommAncBST, Empty)
{
    LowestCommAncBST solution;
    TreeNode *headTree = NULL;
    TreeNode *headP = NULL;
    TreeNode *headQ = NULL;

    EXPECT_EQ(NULL, solution.lowestCommonAncestor(headTree, headP, headQ));
}
