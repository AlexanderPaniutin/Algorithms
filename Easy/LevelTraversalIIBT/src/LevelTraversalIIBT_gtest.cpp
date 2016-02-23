/*
 * GTests for: LevelTraversalIIBT.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "LevelTraversalIIBT.h"

TEST(LevelTraversalIIBT, Empty)
{
    LevelTraversalIIBT solution;
    TreeNode *head = NULL;

    EXPECT_EQ(0, solution.levelOrderBottom(head).size());
}
