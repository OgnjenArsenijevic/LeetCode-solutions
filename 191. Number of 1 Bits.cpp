///191. Number of 1 Bits
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int hammingWeight(uint32_t n) 
    {
        int ans=0;
        while(n>0)
        {
            if(n & 1)
                ans++;
            n/=2;
        }
        return ans;
    }
};
