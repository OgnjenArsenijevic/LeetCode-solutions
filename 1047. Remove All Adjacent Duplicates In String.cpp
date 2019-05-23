///1047. Remove All Adjacent Duplicates In String
///Author: Ognjen Arsenijevic
///username: ognjen 1998
class Solution 
{
public:
    string removeDuplicates(string s) 
    {
        if(s.size()==1) return s;
        for(int i=s.size()-2;i>=0;i--)
        {
            if(s[i]==s[i+1])
            {
                s.erase(s.begin()+i);
                s.erase(s.begin()+i);
            }
        }
        return s;
    }
};
