/*
 * GTests for: ValidAnagram.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "ValidAnagram.h"

TEST(ValidAnagram, Empty)
{
    ValidAnagram solution;

    EXPECT_TRUE(solution.isAnagram("", ""));
}
