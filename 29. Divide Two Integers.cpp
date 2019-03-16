///29. Divide Two Integers
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int divide(int a, int b) 
    {
        long long ans=0;
        long long aa=(long long) a;
        long long bb=(long long) b;
        long long mul=1LL;
        if(aa*bb<0) mul=-1LL;
        if(aa<0) aa*=(-1);
        if(bb<0) bb*=(-1);
        while(aa>=bb)
        {
            aa-=bb;
            ans++;
        }
        long long num=ans*mul;
        return (num>INT_MAX ? INT_MAX : num);
    }
};
