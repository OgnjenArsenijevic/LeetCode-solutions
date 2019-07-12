///300. Longest Increasing Subsequence
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int lengthOfLIS(vector<int>& v) 
    {
        if(v.size()==0) return 0;
        int dp[v.size()];
        dp[0]=1;
        for(int i=1;i<v.size();i++)
        {
            dp[i]=1;
            for(int j=0;j<i;j++)
            {
                if(v[i]>v[j] && dp[i]<dp[j]+1)
                    dp[i]=dp[j]+1;
            }
        }
        return *max_element(dp,dp+v.size());
    }
};
