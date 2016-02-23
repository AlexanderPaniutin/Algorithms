#include <vector>

using namespace std;
class PascalsTriangle {
public:
    vector<vector<int> > generate(int numRows)
    {
        vector<vector<int> > triangle(numRows);
        
        for (int i=0; i<numRows; ++i)
        {
            triangle[i] = vector<int>(i+1);
            if (i==0)
            {
                triangle[i][0] = 1;
            }
            else
            {
                // build row with as much elements as row #
                for (int ndx=0; ndx<(i+1); ++ndx)
                {
                    // if first
                    if (ndx == 0)
                        triangle[i][ndx] = 1;
                    // if last
                    else if (ndx == i)
                        triangle[i][ndx] = 1;
                    else
                        triangle[i][ndx] = triangle[i-1][ndx-1] + triangle[i-1][ndx];
                }
            }
        }
        
        return triangle;
    }
};
