#include <math.h>

class PalindromeNumber {
public:
    int countDigitsAmount(int x)
    {
        int cnt = 0;
        while (x > 0)
        {
            x = x/10;
            ++cnt;
        }
        
        return cnt;
    }
    
    bool checkSideDigits(int x, int digitsAmount)
    {
        if (digitsAmount < 2)
            return true;
        
        int first = x / pow(10, digitsAmount-1);
        int last = x % 10;
        
        if (first != last)
            return false;
        else
        {
            // get a new number
            // remove the first digit
            int newx = x % (int) (pow(10, digitsAmount-1));
            // remove the last digit
            newx = newx / 10;
            
            return checkSideDigits(newx, digitsAmount-2);
        }
    }
    
    bool isPalindrome(int x)
    {
        if (x<0)
            return false;
        
        int digitsAmount = countDigitsAmount(x);
        
        return checkSideDigits(x, digitsAmount);
    }
};
