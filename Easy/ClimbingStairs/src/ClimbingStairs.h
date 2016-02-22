#include <vector>

using namespace std;
class ClimbingStairs {
public:
    int climbStairs(int n)
    {
        if (n <= 0)
            return 0;
    
        if (n == 1)
            return 1;
    
        if (n == 2)
            return 2;
    
        // use cached results to solve the next problem. current ways = ways-1 + ways-2;
        vector<int> cachedRes;
        cachedRes.reserve(n);
        cachedRes.push_back(0);
        cachedRes.push_back(1);
        cachedRes.push_back(2);
    
        for (int i=3; i<=n; ++i)
        {
            cachedRes.push_back(cachedRes[i-1] + cachedRes[i-2]);
        }
    
        return cachedRes.back();
    }


};
