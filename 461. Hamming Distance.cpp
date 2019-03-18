///461. Hamming Distance
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int hammingDistance(int x, int y) 
    {
        int ans=0,num=x^y;
        while(num>0)
        {
            if(num & 1)
                ans++;
            num>>=1;
        }
        return ans;
    }
};
