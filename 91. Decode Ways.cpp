///91. Decode Ways
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int numDecodings(string s) 
    {
        int dp[s.size()+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        if(s[0]=='0') return 0;
        dp[1]=1;
        for(int i=2;i<=s.size();i++)
        {
            if(s[i-2]=='1' || (s[i-2]=='2' && s[i-1]<='6'))
               dp[i]=dp[i-2];
            if(s[i-1]!='0')
               dp[i]+=dp[i-1];
        }
        return dp[s.size()];
    }
};
