///551. Student Attendance Record I
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    bool checkRecord(string s) 
    {
        int a=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
            {
                a++;
                if(a>1)
                    return false;
            }
            if(s[i]=='L' && i>1 && s[i-1]=='L' && s[i-2]=='L')
                return false;
        }
        return true;
    }
};
