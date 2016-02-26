/*
 * GTests for: PathSum.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "PathSum.h"

TEST(PathSum, Empty)
{
    PathSum solution;
    TreeNode *head = NULL;

    EXPECT_FALSE(solution.hasPathSum(head, 0));
}
