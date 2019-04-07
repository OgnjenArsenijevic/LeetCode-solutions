///746. Min Cost Climbing Stairs
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> dp;
    int minCostClimbingStairs(vector<int>& cost) 
    {
        dp.push_back(0);
        dp.push_back(0);
        for(int i=2;i<=cost.size();i++)
            dp.push_back(min(dp[i-2]+cost[i-2],dp[i-1]+cost[i-1]));
        return dp[dp.size()-1];
    }
};
