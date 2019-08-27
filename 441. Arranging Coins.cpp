///441. Arranging Coins
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int arrangeCoins(int n) 
    {
        long long low=0,high=n;
        while(low<high)
        {
            long long mid=low+(high-low+1)/2;
            if(mid*(mid+1LL)/2<=n)
                low=mid;
            else
                high=mid-1;
        }
        return low;
    }
};
