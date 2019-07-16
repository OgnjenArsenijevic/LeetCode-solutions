///221. Maximal Square
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int maximalSquare(vector<vector<char>>& mat)
    {
        if(mat.empty()) return 0;
        int dp[mat.size()+1][mat[0].size()+1];
        int ans=0;
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=mat.size();i++)
        {
            for(int j=1;j<=mat[0].size();j++)
            {
                if(mat[i-1][j-1]=='1')
                {
                    dp[i][j]=min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]))+1;
                    ans=max(ans,dp[i][j]);
                }
            }
        }
        return ans*ans;
    }
};
