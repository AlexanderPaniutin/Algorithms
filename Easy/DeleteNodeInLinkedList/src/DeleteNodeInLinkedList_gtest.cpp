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

// as per requirement - we should not remove the tail
TEST(DeleteNodeInLinkedList, RemoveTheOnlyItem)
{
    DeleteNodeInLinkedList solution;
    ListNode *head = new ListNode(1);

    solution.deleteNode(head);
    EXPECT_EQ(1, head->val);
    EXPECT_EQ(NULL, head->next);
}

TEST(DeleteNodeInLinkedList, RemoveHead)
{
    DeleteNodeInLinkedList solution;
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);

    solution.deleteNode(head);
    EXPECT_EQ(2, head->val);
    EXPECT_EQ(NULL, head->next);
}

// as per requirement - we should not remove the tail
TEST(DeleteNodeInLinkedList, RemoveTail)
{
    DeleteNodeInLinkedList solution;
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);

    solution.deleteNode(head->next);
    EXPECT_EQ(1, head->val);
    EXPECT_EQ(2, head->next->val);
    EXPECT_EQ(NULL, head->next->next);
}

TEST(DeleteNodeInLinkedList, RemoveMiddle)
{
    DeleteNodeInLinkedList solution;
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);

    solution.deleteNode(head->next);
    EXPECT_EQ(1, head->val);
    EXPECT_EQ(3, head->next->val);
    EXPECT_EQ(NULL, head->next->next);
}
