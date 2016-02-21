/*
 * GTests for: DeleteNodeInLinkedList.h
 *     Author: Alex Paniutin
 *    Created: Feb 20, 2016
 *
 */

#include <gtest/gtest.h>
#include "DeleteNodeInLinkedList.h"

TEST(DeleteNodeInLinkedList, EmptyList)
{
    DeleteNodeInLinkedList solution;
    ListNode *head = NULL;

    solution.deleteNode(head);
    EXPECT_EQ(NULL, head);
}
