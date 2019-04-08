///516. Longest Palindromic Subsequence
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int dp[1001][1001];
    int longestPalindromeSubseq(string s) 
    {
        if(s.size()==0) return 0;
        for(int i=0;i<s.size();i++)
            dp[i][i]=1;
        for(int len=1;len<s.size();len++)
        {
            for(int i=0;i<s.size()-len;i++)
            {
                int j=i+len;
                if(s[i]==s[j])
                {
                    if(len==1)
                        dp[i][j]=2;
                    else
                        dp[i][j]=dp[i+1][j-1]+2;
                }
                else
                    dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
                    
            }
        }
        return dp[0][s.size()-1];
    }
};
