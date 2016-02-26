/*
 * GTests for: PalindromeNumber.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "PalindromeNumber.h"

TEST(PalindromeNumber, ZeroNumber)
{
    PalindromeNumber solution;

    EXPECT_TRUE(solution.isPalindrome(0));
}
