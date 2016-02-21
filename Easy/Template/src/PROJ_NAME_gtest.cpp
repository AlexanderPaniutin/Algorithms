/*
 * GTests for: PROJ_NAME.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "PROJ_NAME.h"

TEST(PROJ_NAME, Empty)
{
    PROJ_NAME solution;

    EXPECT_TRUE(solution);
    EXPECT_EQ(NULL, solution.);
}
