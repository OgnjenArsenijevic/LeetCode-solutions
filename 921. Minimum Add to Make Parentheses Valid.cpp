///921. Minimum Add to Make Parentheses Valid
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int minAddToMakeValid(string s) 
    {
        int ans=0,dif=0;
        for(int i=0;i<s.size();i++)
        {
            dif+=(s[i]=='(' ? 1 : -1);
            if(dif==-1)
            {
                dif++;
                ans++;
            }
        }
        return ans+dif;
    }
};
