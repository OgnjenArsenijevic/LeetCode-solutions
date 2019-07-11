///172. Factorial Trailing Zeroes
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int trailingZeroes(int n)
    {
        long long res=0;
        for(long long i=5;i<=n;i*=5)
            res+=(n/i);
        return res;
    }
};
