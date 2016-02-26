/*
 * GTests for: FactorialTrailingZeroes.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "FactorialTrailingZeroes.h"

TEST(FactorialTrailingZeroes, Empty)
{
    FactorialTrailingZeroes solution;

    EXPECT_EQ(0, solution.trailingZeroes(0));
}
