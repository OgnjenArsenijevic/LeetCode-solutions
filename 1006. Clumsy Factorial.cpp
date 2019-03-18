///1006. Clumsy Factorial
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int clumsy(int nn) 
    {
        int curr=0;
        long long n=(long long)nn;
        long long ans=0;
        bool flag=true;
        while(n>3)
        {
            long long val=n--;
            val*=n;
            n--;
            val/=n;
            n--;
            if(flag)
                val+=n;
            else
                val-=n;
            n--;
            if(flag)
            {
                ans+=val;
                flag=false;
            }    
            else
                ans-=val;
           // cout<<val<<" ";
           // cout<<ans<<"\n";
        }
        if(n==1)
        {
            if(flag)
                ans+=n;
            else
                ans-=n;
        }
        if(n==2)
        {
            if(flag)
                ans+=n;
            else
                ans-=n;
        }
        if(n==3)
        {
            if(flag)
                ans+=6;
            else
                ans-=6;
        }
        return (int)ans;
    }
};
