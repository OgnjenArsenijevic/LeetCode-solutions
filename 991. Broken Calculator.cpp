///991. Broken Calculator
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int brokenCalc(int x, int y) 
    {
        if(x==y) return 0;
        if(x>y) return x-y;
        if(y&1)
            return brokenCalc(x,y+1)+1;
        else
            return brokenCalc(x,y/2)+1;
    }
};
