#include <map>
#include <vector>

using namespace std;
class ContainsDuplicate {
public:
    bool containsDuplicate(vector<int>& nums)
    {
        map<int, int> mNums;
        vector<int>::iterator it;
        for (it=nums.begin(); it!=nums.end(); ++it)
        {
            if (mNums.find(*it) != mNums.end())
                return true;
            else
                mNums[*it] = 1;
        }
        
        return false;
    }
};
