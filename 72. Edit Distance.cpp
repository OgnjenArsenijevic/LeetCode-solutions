///72. Edit Distance
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int minDistance(string s1, string s2) 
    {
        int dp[s1.size()+1][s2.size()+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=s1.size();i++) dp[i][0]=i;
        for(int i=1;i<=s2.size();i++) dp[0][i]=i;
        for(int i=1;i<=s1.size();i++)
        {
            for(int j=1;j<=s2.size();j++)
            {
                if(s1[i-1]==s2[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else
                    dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
            }
        }
        return dp[s1.size()][s2.size()];
    }
};
