/*
 * GTests for: PascalsTriangle.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "PascalsTriangle.h"

TEST(PascalsTriangle, Empty)
{
    PascalsTriangle solution;

    EXPECT_EQ(0, solution.generate(0).size());
}
