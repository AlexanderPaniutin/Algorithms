#include <vector>

using namespace std;
class HappyNumber {
public:
    vector<int> tried;
    
    bool checkIfUsed(int n)
    {
        if (find(tried.begin(), tried.end(), n) == tried.end())
        {
            tried.push_back(n);
            return false;
        }
        else
            return true;
            
    }
    
    bool isHappy(int n)
    {
        if (n == 1)
            return true;
            
        int newNumber = 0;
        while (n > 0)
        {
            int expon = n%10;
            newNumber += expon*expon;
            n /= 10;
        }
        
        // in case of overflow
        if (newNumber < 0)
            return false;
        
        // in case of loop
        if (checkIfUsed(newNumber))
            return false;
        
        return isHappy(newNumber);
    }
    
};
