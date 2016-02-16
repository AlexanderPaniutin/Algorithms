#include <iostream>

class Solution {
public:
    // to avoid recursion/loop - we can predefine all the combinations that possible could be having 2 digits
    // then having the acumulator we will go digit by digit and
    int addDigits(int num)
    {
        int arr[10][10] =
        {
          //   0  1  2  3  4  5  6  7  8  9
             { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, // 0
             { 1, 2, 3, 4, 5, 6, 7, 8, 9, 1}, // 1
             { 2, 3, 4, 5, 6, 7, 8, 9, 1, 2}, // 2
             { 3, 4, 5, 6, 7, 8, 9, 1, 2, 3}, // 3
             { 4, 5, 6, 7, 8, 9, 1, 2, 3, 4}, // 4
             { 5, 6, 7, 8, 9, 1, 2, 3, 4, 5}, // 5
             { 6, 7, 8, 9, 1, 2, 3, 4, 5, 6}, // 6
             { 7, 8, 9, 1, 2, 3, 4, 5, 6, 7}, // 7
             { 8, 9, 1, 2, 3, 4, 5, 6, 7, 8}, // 8
             { 9, 1, 2, 3, 4, 5, 6, 7, 8, 9}  // 9
        };
        
        int acum = 0;
        while (num > 0)
        {
            int x = num % 10;
            num = num / 10;
            acum = arr[acum][x];
        }
        
        return acum;
    }
};

int main(int argc, char* argv[])
{
    std::cout << "Hello World" << std::endl;
}
