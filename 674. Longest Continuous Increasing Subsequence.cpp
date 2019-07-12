///674. Longest Continuous Increasing Subsequence
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int findLengthOfLCIS(vector<int>& v) 
    {
        if(v.size()==0) return 0;
        int dp[v.size()];
        dp[0]=1;
        for(int i=1;i<v.size();i++)
            dp[i]=(v[i]>v[i-1] ? dp[i-1]+1 : 1);
        return *max_element(dp,dp+v.size());
    }
};
