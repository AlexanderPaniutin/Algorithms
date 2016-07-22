#include <gtest/gtest.h>
#include "merge_sort.h"

TEST(MergeSort, Empty)
{
    int arr[] = {};
    merge_sort<int>(arr, 0);
    EXPECT_EQ("", trace<int>(arr, 0));
}

TEST(MergeSort, Single)
{
    int arr[] = {1};
    merge_sort<int>(arr, 1);
    EXPECT_EQ("1", trace<int>(arr, 1));
}

TEST(MergeSort, TwoItemsSorted)
{
    int arr[] = {1, 2};
    merge_sort<int>(arr, 2);
    EXPECT_EQ("1,2", trace<int>(arr, 2));
}

TEST(MergeSort, TwoItemsUnsorted)
{
    int arr[] = {2, 1};
    merge_sort<int>(arr, 2);
    EXPECT_EQ("1,2", trace<int>(arr, 2));
}

TEST(MergeSort, Random1)
{
    int arr[] = {2, 5, 3, 1, 2, 9, 2};
    merge_sort<int>(arr, 7);
    EXPECT_EQ("1,2,2,2,3,5,9", trace<int>(arr,7));
}

TEST(MergeSort, Random2)
{
    int arr[] = {5, 13, 2, 8, 6, 7, 4, 10, 4, 3};
    merge_sort<int>(arr, 10);
    EXPECT_EQ("2,3,4,4,5,6,7,8,10,13", trace<int>(arr, 10));
}