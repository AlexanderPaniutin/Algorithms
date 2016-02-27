/*
 * GTests for: StackByQueue.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "StackByQueue.h"

TEST(StackByQueue, Push2Items)
{
    StackByQueue solution;
    solution.push(1);
    solution.push(2);

    EXPECT_EQ(2, solution.top());
}
