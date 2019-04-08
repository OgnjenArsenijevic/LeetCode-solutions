///338. Counting Bits
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> dp;
    vector<int> countBits(int num) 
    {
        dp.push_back(0);
        for(int i=1;i<=num;i++)
            dp.push_back(dp[i>>1]+(i&1));
        return dp;
    }
};
