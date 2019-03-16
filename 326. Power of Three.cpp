///326. Power of Three
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool isPowerOfThree(int n)
    {
        int Max3PowerInt = 1162261467;
        if (n<=0 || n>Max3PowerInt) return false;
            return Max3PowerInt%n==0;
    }
};
