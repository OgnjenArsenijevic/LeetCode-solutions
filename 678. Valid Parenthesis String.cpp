///678. Valid Parenthesis String
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool checkValidString(string s) 
    {
        int low=0,high=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(') 
                low++;
            else
                low--;
            if(s[i]!=')')
                high++;
            else
                high--;
            if(high<0)
                return false;
            low=max(low,0);
        }
        if(low==0) return true;
        return false;
    }
};
