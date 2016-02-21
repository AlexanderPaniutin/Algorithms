/*
 * GTests for: ExcelColumnNumber.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "ExcelColumnNumber.h"

TEST(ExcelColumnNumber, Empty)
{
    ExcelColumnNumber solution;

    EXPECT_EQ(0, solution.titleToNumber(""));
}
