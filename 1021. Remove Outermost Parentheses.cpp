///1021. Remove Outermost Parentheses
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    string removeOuterParentheses(string s) 
    {
        string ans="";
        string curr="";
        int dif=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                dif++;
            else
                dif--;
            curr+=s[i];
            if(dif==0)
            {
                for(int j=1;j<curr.size()-1;j++)
                    ans+=curr[j];
                curr="";
            }
        }
        return ans;
    }
};
