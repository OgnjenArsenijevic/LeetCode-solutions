///20. Valid Parentheses
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool isValid(string s) 
    {
        stack<char> stek;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                stek.push(s[i]);
            else
            {
                if(stek.empty())
                    return false;
                char c;
                if(s[i]==')')
                    c='(';
                if(s[i]==']')
                    c='[';
                if(s[i]=='}')
                    c='{';
                if(c!=stek.top())
                    return false;
                stek.pop();
            }
        }
        if(!stek.empty())
            return false;
        return true;
    }
};
