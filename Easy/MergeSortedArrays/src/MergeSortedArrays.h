#include <vector>

using namespace std;
class MergeSortedArrays {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        if (n == 0)
            return;
            
        int insNdx = m + n - 1;
        int ndx1 = m - 1;
        int ndx2 = n - 1;
        
        while (true)
        {
            if (nums2[ndx2] >= nums1[ndx1])
            {
                nums1[insNdx] = nums2[ndx2];
                --insNdx;
                --ndx2;
            }
            else
            {
                nums1[insNdx] = nums1[ndx1];
                --insNdx;
                --ndx1;
            }
            
            if (ndx1 < 0 || ndx2 < 0)
                break;
        }
        
        // add items from 2 if needed
        while (ndx2 >= 0)
        {
            nums1[insNdx] = nums2[ndx2];
            --insNdx;
            --ndx2;
        }
    }
};
