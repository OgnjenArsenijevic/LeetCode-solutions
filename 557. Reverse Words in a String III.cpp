///557. Reverse Words in a String III
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string reverseWords(string s) 
    {
        string ans="";
        string ss="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ' && s[i]!='\t')
                ss+=s[i];
            else
            {
                if(ans.size()>0)
                    ans+=" ";
                reverse(ss.begin(),ss.end());
                ans+=ss;
                ss="";
            }
        }
        if(ans.size()>0)
            ans+=" ";
        reverse(ss.begin(),ss.end());
        ans+=ss;
        ss="";
        return ans;
    }
};
