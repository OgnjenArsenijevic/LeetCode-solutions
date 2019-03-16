///202. Happy Number
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool isHappy(int n) 
    {
        int cnt=0;
        int b=n;
        while(n!=1)
        {
            b=n;
            n=0;
            while(b>0)
            {
                n+=(b%10)*(b%10);
                b/=10;
            }
            cnt++;
            if(cnt>15)
            {
                cnt=-1;
                break;
            }
        }
        if(cnt!=-1) return true;
        return false;
    }
};
