/*
 * GTests for: LevelTraversalBT.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "LevelTraversalBT.h"

TEST(LevelTraversalBT, Empty)
{
    LevelTraversalBT solution;
    TreeNode *head = NULL;

    EXPECT_EQ(0, solution.levelOrder(head).size());
}
