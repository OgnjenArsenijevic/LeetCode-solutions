///1092. Shortest Common Supersequence
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int dp[1005][1005];
    string shortestCommonSupersequence(string s, string ss) 
    {
        for(int i=0;i<=s.size();i++)
        {
            for(int j=0;j<=ss.size();j++)
            {
                if(i==0)
                    dp[i][j]=j;
                else
                {
                    if(j==0)
                        dp[i][j]=i;
                    else
                    {
                        if(s[i-1]==ss[j-1])
                            dp[i][j]=dp[i-1][j-1]+1;
                        else
                            dp[i][j]=min(dp[i-1][j],dp[i][j-1])+1;
                    }
                }
            }
        }
        int i=s.size(),j=ss.size();
        string ans="";
        while(i>0 && j>0)
        {
            if(s[i-1]==ss[j-1])
            {
                ans.push_back(s[--i]);
                j--;
            }    
            else
            {
                if(dp[i-1][j]<=dp[i][j-1])
                    ans.push_back(s[--i]);
                else
                    ans.push_back(ss[--j]);
            }
        }
        while(i>0)
            ans.push_back(s[--i]);
        while(j>0)
            ans.push_back(ss[--j]);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
