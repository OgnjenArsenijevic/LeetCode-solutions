///844. Backspace String Compare
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool backspaceCompare(string s, string t) 
    {
        string ss="";
        string tt="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#')
            {
                if(!ss.empty())
                    ss.erase(ss.size()-1);
            }
            else
                ss+=s[i];
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#')
            {
                if(!tt.empty())
                    tt.erase(tt.size()-1);
            }
            else
                tt+=t[i];
        }
        if(ss.size()!=tt.size())
            return false;
        for(int i=0;i<ss.size();i++)
        {
            if(ss[i]!=tt[i])
                return false;
        }
        return true;
    }
};
