///1016. Binary String With Substrings Representing 1 To N
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    unordered_map<int,int> ump;
    bool queryString(string s, int n) 
    {
        for(int i=0;i<s.size();i++)
        {
            string ss="";
            for(int j=i;j<i+30 && j<s.size();j++)
            {
                ss+=s[j];
                int num=0;
                int st=1;
                for(int rr=ss.size()-1;rr>=0;rr--)
                {
                    if(ss[rr]=='1')
                        num+=st;
                    st*=2;
                }
                ump[num]++;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(ump[i]==0)
                return false;
        }
        return true;
    }
};
