#include <string>

using namespace std;
class ZigZagConversion {
public:
    void buildNewMrx(int *mrx, int len, int rows)
    {
        int mrxNdx = 0;
        int step = rows*2 - 2;
        for (int rowNdx=0; rowNdx<rows; ++rowNdx)
        {
            int newNdx = 0;
            int stepNdx = 0;
            
            // build each row while new ndx < len
            while (true)
            {
                // special counting for first and last row
                if (rowNdx == 0 || rowNdx == (rows-1))
                {
                    newNdx = rowNdx + step*stepNdx;
                    
                    if (newNdx < len)
                        mrx[mrxNdx++] = newNdx;
                    else
                        break;
                }
                else
                {
                    newNdx = rowNdx + step*stepNdx;
                    if (newNdx < len)
                        mrx[mrxNdx++] = newNdx;
                    else
                        break;
                        
                    newNdx = step-rowNdx + step*stepNdx;
                    if (newNdx < len)
                        mrx[mrxNdx++] = newNdx;
                    else
                        break;
                }
                
                ++stepNdx;
            }
        }
        
    }
    
    string convert(string s, int numRows)
    {
        if (numRows == 1)
            return s;
        // build the vector of new indexes
        int *mrx = new int[s.length()];
        buildNewMrx(mrx, s.length(), numRows);
        
        string res(s.length(), ' ');
        for (int i=0; i<s.length(); i++)
            res[i] =  s[mrx[i]];
            
        return res;
    }
};
