#include <vector>

using namespace std;
class PlusOne {
public:
    
    vector<int> plusOne(vector<int>& digits) {

        bool overflow = true;
        
        int lastDigitNdx = digits.size() - 1;
        for (int i=lastDigitNdx; i>=0; --i)
        {
            if (digits[i] != 9)
            {
                overflow = false;
                ++(digits[i]);
                break;
            }
            else
            {
                digits[i] = 0;
            }

        }
        
        if (overflow)
            digits.insert(digits.begin(), 1);
        
        return digits;
        
    }
};
