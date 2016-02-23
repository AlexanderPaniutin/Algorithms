#include <vector>

using namespace std;
class RemoveElement {
public:
    int removeElement(vector<int>& nums, int val)
    {

        int newSize = nums.size();

        for (int i=0; i<nums.size(); ++i)
        {
            if (nums[i] == val)
            {
                // find the item to replace it
                int j = i+1;
                bool found = false;
                while (j<nums.size())
                {
                    if (nums[j] != val)
                    {
                        found = true;
                        break;
                    }
                    ++j;
                }
            
                // if not found - we moved all
                if (!found)
                    return i;

                // swap
                int tmp = nums[j];
                nums[j] = nums[i];
                nums[i] = tmp;
            }
        }
  
        // if we are here - we didnt remove anything.
        return nums.size();
    }

};
