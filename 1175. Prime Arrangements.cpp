///1175. Prime Arrangements
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int MOD=1e9+7;
    bool isPrime(int n)
    {
        if(n<2) return false;
        if(n==2) return true;
        if(n%2==0) return false;
        for(int i=3;i<=sqrt(n);i+=2)
        {
            if(n%i==0) return false;
        }
        return true;
    }
    int numPrimeArrangements(int n) 
    {
        long long cnt=0,ans=1,cnt1;
        for(int i=1;i<=n;i++)
        {
            if(isPrime(i))
                cnt++;
        }
        cnt1=n-cnt;
        while(cnt>0)
        {
            ans*=cnt;
            cnt--;
            ans%=MOD;
        }
        while(cnt1>0)
        {
            ans*=cnt1;
            cnt1--;
            ans%=MOD;
        }
        return ans;
    }
};
