///718. Maximum Length of Repeated Subarray
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int findLength(vector<int>& a, vector<int>& b) 
    {
        int dp[a.size()+1][b.size()+1];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<b.size();j++)
            {
                if(a[i]==b[j])
                {
                    if(a[i]==b[j])
                    {
                        if(i==0 || j==0)
                            dp[i][j]=1;
                        else
                            dp[i][j]=dp[i-1][j-1]+1;
                    }
                }
            }
        }
        int ans=0;
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<b.size();j++)
                ans=max(ans,dp[i][j]);
        }
        return ans;
    }
};
