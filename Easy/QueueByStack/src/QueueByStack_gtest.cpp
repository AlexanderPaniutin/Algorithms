/*
 * GTests for: QueueByStack.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "QueueByStack.h"

TEST(QueueByStack, Empty)
{
    Queue solution;
    solution.push(1);
    solution.pop();

    EXPECT_TRUE(solution.empty());
}
