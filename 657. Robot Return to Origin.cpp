///657. Robot Return to Origin
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool judgeCircle(string s) 
    {
        int cntx=0,cnty=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='U') cnty++;
            if(s[i]=='D') cnty--;
            if(s[i]=='R') cntx++;
            if(s[i]=='L') cntx--;
        }
        return (cntx==0 && cnty==0);
    }
};
