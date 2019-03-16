///7. Reverse Integer
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int reverse(int x) 
    {
        long long ans=0;
        while(x!=0)
        {
            ans*=10LL;
            ans+=(x%10);
            x/=10;
        }
        if (ans > INT32_MAX || ans < INT32_MIN) return 0;
        return ans;
    }
};
