#include <vector>
#include <map>

using namespace std;
class MajorityElement {
public:
    int majorityElement(vector<int>& nums)
    {
        map<int, int> frequency;
        int maxFreq = 0;
        int maxVal = 0;
        int curr = 0;
        for (int i=0; i<nums.size(); ++i)
        {
            curr = nums[i];
            frequency[curr] +=1;
            
            if (frequency[curr] > maxFreq)
            {
                maxFreq = frequency[curr];
                maxVal = curr;
            }
        }
        
        return maxVal;
    }
};
