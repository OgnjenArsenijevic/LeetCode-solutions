///397. Integer Replacement
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int integerReplacement(long long n) 
    {
        if(n==1) return 0;
        if(n&1) return min(integerReplacement(n+1),integerReplacement(n-1))+1;
        return integerReplacement(n/2)+1;
    }
};
