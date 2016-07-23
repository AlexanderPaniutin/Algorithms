#include <gtest/gtest.h>
#include "insertion_sort.h"

TEST(SelectionSort, Empty)
{
    int arr[] = {};
    insertion_sort<int>(arr, 0);
    EXPECT_EQ("", trace<int>(arr, 0));
}

TEST(SelectionSort, Single)
{
    int arr[] = {1};
    insertion_sort<int>(arr, 1);
    EXPECT_EQ("1", trace<int>(arr, 1));
}

TEST(SelectionSort, TwoItemsSorted)
{
    int arr[] = {1, 2};
    insertion_sort<int>(arr, 2);
    EXPECT_EQ("1,2", trace<int>(arr, 2));
}

TEST(SelectionSort, TwoItemsUnsorted)
{
    int arr[] = {2, 1};
    insertion_sort<int>(arr, 2);
    EXPECT_EQ("1,2", trace<int>(arr, 2));
}

TEST(SelectionSort, Random1)
{
    int arr[] = {2, 5, 3, 1, 2, 9, 2};
    insertion_sort<int>(arr, 7);
    EXPECT_EQ("1,2,2,2,3,5,9", trace<int>(arr,7));
}

TEST(SelectionSort, Random2)
{
    int arr[] = {5, 13, 2, 8, 6, 7, 4, 10, 4, 3};
    insertion_sort<int>(arr, 10);
    EXPECT_EQ("2,3,4,4,5,6,7,8,10,13", trace<int>(arr, 10));
}