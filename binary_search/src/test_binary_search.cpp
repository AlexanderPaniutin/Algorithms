#include <gtest/gtest.h>
#include "binary_search.h"

TEST(BinarySearch, Empty)
{
    EXPECT_EQ(-1, binary_search<int>(NULL, 0, 1));
}

TEST(BinarySearch, SinglePresent)
{
    int arr[] = {1};
    EXPECT_EQ(0, binary_search<int>(arr, 1, 1));
}

TEST(BinarySearch, SingleMissing)
{
    int arr[] = {1};
    EXPECT_EQ(-1, binary_search<int>(arr, 1, 2));
}

TEST(BinarySearch, LessThanFirst)
{
    int arr[] = {1, 3, 4, 6, 7, 10, 22, 24, 26, 100};
    EXPECT_EQ(-1, binary_search<int>(arr, 10, 0));
}

TEST(BinarySearch, MoreThanLast)
{
    int arr[] = {1, 3, 4, 6, 7, 10, 22, 24, 26, 100};
    EXPECT_EQ(-1, binary_search<int>(arr, 10, 110));
}

TEST(BinarySearch, MissingInMiddle1)
{
    int arr[] = {1, 3, 4, 6, 7, 10, 22, 24, 26, 100};
    EXPECT_EQ(-1, binary_search<int>(arr, 10, 5));
}

TEST(BinarySearch, MissingInMiddle2)
{
    int arr[] = {1, 3, 4, 6, 7, 10, 22, 24, 26, 100};
    EXPECT_EQ(-1, binary_search<int>(arr, 10, 21));
}

TEST(BinarySearch, FirstInRandom)
{
    int arr[] = {1, 3, 4, 6, 7, 10, 22, 24, 26, 100};
    EXPECT_EQ(0, binary_search<int>(arr, 10, 1));
}

TEST(BinarySearch, LastInRandom)
{
    int arr[] = {1, 3, 4, 6, 7, 10, 22, 24, 26, 100};
    EXPECT_EQ(0, binary_search<int>(arr, 10, 1));
}

TEST(BinarySearch, MiddleInRandom1)
{
    int arr[] = {1, 3, 4, 6, 7, 10, 22, 24, 26, 100};
    EXPECT_EQ(5, binary_search<int>(arr, 10, 10));
}

TEST(BinarySearch, MiddleInRandom2)
{
    int arr[] = {1, 3, 4, 6, 7, 10, 22, 24, 26, 100};
    EXPECT_EQ(2, binary_search<int>(arr, 10, 4));
}

TEST(BinarySearch, MiddleInRandom3)
{
    int arr[] = {1, 3, 4, 6, 7, 10, 22, 24, 26, 100};
    EXPECT_EQ(7, binary_search<int>(arr, 10, 24));
}