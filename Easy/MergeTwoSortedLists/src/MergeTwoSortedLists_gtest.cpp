/*
 * GTests for: MergeTwoSortedLists.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "MergeTwoSortedLists.h"

TEST(MergeTwoSortedLists, EmptyLists)
{
    MergeTwoSortedLists solution;
    ListNode *head1 = NULL;
    ListNode *head2 = NULL;

    EXPECT_EQ(NULL, solution.mergeTwoLists(head1, head2));
}
