/*
 * GTests for: PascalsTriangleII.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "PascalsTriangleII.h"

TEST(PascalsTriangleII, ZeroRow)
{
    PascalsTriangleII solution;

    EXPECT_EQ(1, solution.getRow(0).size());
    EXPECT_EQ(1, solution.getRow(0)[0]);
}
