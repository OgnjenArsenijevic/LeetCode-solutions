///650. 2 Keys Keyboard
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int minSteps(int n)
    {
        if(n==1) return 0;
        int ans=0;
        for(int i=2;i<=sqrt(n);i++)
        {
            while(n%i==0)
            {
                n/=i;
                ans+=i;
            }
            if(n==1)
                break;
        }
        if(n>1)
            ans+=n;
        return ans;
    }
};
