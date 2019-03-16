///50. Pow(x, n)
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    double myPow(double x, int n) 
    {
        double res=1;
        long long use=(long long)n;
        if(use<0) 
        {
            x=1/x;
            use*=(-1);
        }    
        while(use!=0)
        {
            if(use & 1)
                res*=x;
            x*=x;
            use>>=1;
        }
        return res;
    }
};
