///788. Rotated Digits
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool isGood(int n)
    {
        bool flag=false;
        while(n>0)
        {
            if(n%10==3 || n%10==4 || n%10==7)
                return false;
            if(n%10==2 || n%10==5 || n%10==6 || n%10==9)
                flag=true;
            n/=10;
        }
        return flag;
    }
    int rotatedDigits(int n) 
    {
        int ans=0;
        for(int i=1;i<=n;i++)
            ans+=(isGood(i) ? 1 : 0);
        return ans;
    }
};
