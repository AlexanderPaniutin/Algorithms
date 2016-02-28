/*
 * GTests for: TwoLinkedListCrossing.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "TwoLinkedListCrossing.h"

TEST(TwoLinkedListCrossing, Empty)
{
    TwoLinkedListCrossing solution;
    ListNode *head1 = NULL;
    ListNode *head2 = NULL;

    EXPECT_EQ(NULL, solution.getIntersectionNode(head1, head2));
}
