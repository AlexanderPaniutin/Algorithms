/*
 * GTests for: ReverseLinkedList.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "ReverseLinkedList.h"

TEST(ReverseLinkedList, EmptyList)
{
    ReverseLinkedList solution;
    ListNode *head = NULL;

    EXPECT_EQ(NULL, solution.reverseList(head));
}
