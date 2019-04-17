///392. Is Subsequence
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool isSubsequence(string s, string t) 
    {
        if(s.size()==0) return true;
        int idx=0;
        for(int i=0;i<t.size() && idx<s.size();i++)
        {
            if(s[idx]==t[i])
                idx++;
        }
        return (idx==s.size() ? true : false);
    }
};
