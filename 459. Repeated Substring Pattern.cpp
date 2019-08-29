///459. Repeated Substring Pattern
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool repeatedSubstringPattern(string s)
    {
        int lps[10005];
        lps[0]=0;
        int len=0,i=1;
        while(i<s.size())
        {
            if(s[i]==s[len])
                lps[i++]=++len;
            else
            {
                if(len!=0)
                    len=lps[len-1];
                else
                    lps[i++]=0;
            }
        }
        int ans=s.size()-lps[s.size()-1];
        string s1="";
        for(int i=0;i<ans;i++)
            s1+=s[i];
        for(int i=ans;i<s.size();i+=ans)
        {
            for(int j=i;j<i+ans;j++)
            {
                if(s[j]!=s1[j-i])
                    return false;
            }
        }
        if(s.size()/ans>1)
            return true;
        return false;
    }
};
