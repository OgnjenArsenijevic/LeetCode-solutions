///673. Number of Longest Increasing Subsequence
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int findNumberOfLIS(vector<int>& v)
    {
        if(v.size()==0) return 0;
        int dp[v.size()];
        int cnt[v.size()];
        dp[0]=1;
        cnt[0]=1;
        for(int i=1;i<v.size();i++)
        {
            dp[i]=1;
            cnt[i]=1;
            for(int j=0;j<i;j++)
            {
                if(v[i]>v[j] && dp[i]<dp[j]+1)
                {
                    dp[i]=dp[j]+1;
                    cnt[i]=cnt[j];
                }
                else
                {
                    if(v[i]>v[j] && dp[i]==dp[j]+1)
                        cnt[i]+=cnt[j];
                }
                
            }
        }
        int maxi= *max_element(dp,dp+v.size());   
        int ans=0;
        for(int i=0;i<v.size();i++)
        {
            if(dp[i]==maxi)
                ans+=cnt[i];
        }
        return ans;
    }
};
