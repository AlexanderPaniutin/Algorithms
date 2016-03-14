/*
 * GTests for: ZigZagConversion.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "ZigZagConversion.h"

TEST(ZigZagConversion, Empty)
{
    ZigZagConversion solution;

    EXPECT_EQ("", solution.convert("", 0));
}
