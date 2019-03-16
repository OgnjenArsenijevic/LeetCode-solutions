///231. Power of Two
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    bool isPowerOfTwo(int n) 
    {
        int maxPow2=1073741824;
        if(n<=0 || n>maxPow2) return false;
        return maxPow2%n==0;
    }
};
