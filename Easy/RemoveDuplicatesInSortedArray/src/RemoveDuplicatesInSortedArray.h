#include <vector>

using namespace std;
class RemoveDuplicatesInSortedArray {
public:
    int removeDuplicates(vector<int>& nums)
    {
        if (nums.empty())
            return 0;
            
        vector<int> newNums;
        vector<int>::iterator it = nums.begin();
        while (it != nums.end())
        {
            if (newNums.empty() || *it != newNums.back())
            {
                newNums.push_back(*it);
            }
            ++it;
        }
        
        nums = newNums;
        
        return nums.size();
    }
};
