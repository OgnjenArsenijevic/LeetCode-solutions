///633. Sum of Square Numbers
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool judgeSquareSum(int c) 
    {
        for(long long i=0;i*i<=c;i++)
        {
            long long b2=c-i*i;
            long long b=floor(sqrt(b2));
            if(b*b==b2) return true;
        }
        return false;
    }
};
