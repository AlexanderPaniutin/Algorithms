/*
 * GTests for: MinDepthBT.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "MinDepthBT.h"

TEST(MinDepthBT, Empty)
{
    MinDepthBT solution;
    TreeNode *head = NULL;

    EXPECT_EQ(0, solution.minDepth(head));
}
