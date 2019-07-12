///5. Longest Palindromic Substring
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    string longestPalindrome(string s) 
    {
        if(s.size()==0) return s;
        int dp[s.size()][s.size()];
        memset(dp,0,sizeof(dp));
        int maxi=1;
        for(int i=0;i<s.size();i++)
            dp[i][i]=1;
        int start=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=1;
                start=i;
                maxi=2;
            }
        }
        for(int len=2;len<s.size();len++)
        {
            for(int i=0;i<s.size()-len;i++)
            {
                int j=i+len;
                if(dp[i+1][j-1] && s[i]==s[j])
                {
                    dp[i][j]=1;
                    if(len+1>maxi)
                    {
                        start=i;
                        maxi=len+1;
                    }
                }
            }
        }
        string ans="";
        for(int i=start;i<start+maxi;i++)
            ans+=s[i];
        return ans;
    }
};
