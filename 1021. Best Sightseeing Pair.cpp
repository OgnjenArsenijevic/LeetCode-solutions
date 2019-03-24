///1021. Best Sightseeing Pair
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int maxScoreSightseeingPair(vector<int>& v) 
    {
        int dp[50005];
        dp[1]=v[0]-1;
        for(int i=2;i<v.size();i++)
            dp[i]=max(dp[i-1]-1,v[i-1]-1);
        int ans=0;
        for(int i=1;i<v.size();i++)
            ans=max(ans,dp[i]+v[i]);
        return ans;
    }
};
