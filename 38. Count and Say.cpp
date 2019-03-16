///38. Count and Say
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string countAndSay(int n) 
    {
        string s="1";
        if(n==1) return s;
        for(int i=2;i<=n;i++)
        {
            string ss="";
            char curr=s[0];
            int cnt=1;
            for(int j=1;j<s.size();j++)
            {
                if(s[j]!=curr)
                {
                    ss+=to_string(cnt);
                    ss+=curr;
                    curr=s[j];
                    cnt=1;
                }
                else
                    cnt++;
            }
            ss+=to_string(cnt);
            ss+=curr;
            s=ss;
        }
        return s;
    }
};
