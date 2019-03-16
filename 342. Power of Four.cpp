///342. Power of Four
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool isPowerOfFour(int num) 
    {
        if(num<=0) return false;
        while(num>0)
        {
            if(num==1) return true;
            if(num%4) return false;
            num/=4;
        }
        return true;
    }
};
