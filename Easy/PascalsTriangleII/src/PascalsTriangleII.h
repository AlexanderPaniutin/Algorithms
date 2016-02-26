#include <vector>

using namespace std;
class PascalsTriangleII {
public:
    vector<int> getRow(int rowIndex) {
        int rowRequested = rowIndex + 1;
        vector<int> vec(rowRequested);
        for (int rowNdx=0; rowNdx<rowRequested; ++rowNdx)
        {
            // build row started from the end
            if (rowNdx == 0)
                vec[0] = 1;
    
            int itemInRow = rowNdx + 1;
            for (int i=rowNdx; i>=0; --i)
            {
               // if its a first item
               if (i == 0)
                   vec[i] = 1;
               else
               {
                   vec[i] = vec[i-1] + vec[i];
               }
            }
        }
        return vec;
   
    }
};
