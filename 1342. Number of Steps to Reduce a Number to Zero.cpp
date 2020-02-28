///1342. Number of Steps to Reduce a Number to Zero
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int numberOfSteps (int num) 
    {
        int ans=0;
        while(num)
        {
            if(num&1)
                num-=1;
            else
                num>>=1;
            ans++;
        }
        return ans;
    }
};
