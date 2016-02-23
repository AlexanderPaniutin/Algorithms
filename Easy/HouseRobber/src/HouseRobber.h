#include <vector>

using namespace std;
class HouseRobber {
public:
    
    int rob(vector<int>& nums)
    {
        if (nums.size() == 0)
            return 0;
        
        // it should be at least 1 item
        int max = nums[0];
        if (nums.size() == 1)
            return max;
        
        if (nums[1] > max)
            max = nums[1];
            
        if (nums.size() == 2)
            return max;
        
        // here we know max for 1 and 2 houses
        vector<int> cachedRes;
        cachedRes.reserve(nums.size());
        
        cachedRes.push_back(nums[0]);
        cachedRes.push_back(max);
        
        int currValue = max;
        // for one by one house and see whats the max we can stole
        for (int i=2; i<nums.size(); ++i)
        {
            currValue = nums[i] + cachedRes[i-2];
            
            if (currValue > max)
                max = currValue;
            
            cachedRes.push_back(max);
        }
        
        return max;
    }
};
