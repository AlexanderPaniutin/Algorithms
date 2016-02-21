/*
 * GTests for: RemoveDuplicatesFromSortedList.h
 *     Author: Alex Paniutin
 *    Created: Feb 21, 2016
 *
 */

#include <gtest/gtest.h>
#include "RemoveDuplicatesFromSortedList.h"

TEST(RemoveDuplicatesFromSortedList, Empty)
{
    RemoveDuplicatesFromSortedList solution;
    ListNode *head = NULL;

    EXPECT_EQ(NULL, solution.deleteDuplicates(head));
}
