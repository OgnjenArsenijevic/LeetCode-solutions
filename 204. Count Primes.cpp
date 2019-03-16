///204. Count Primes
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int countPrimes(int n)
    {
        bool prime[n+5];
        int cnt=0;
        memset(prime,true,sizeof(prime));
        prime[0]=false;
        prime[1]=false;
        for(int i=2;(long long)(i*i)<=n;i++)
        {
            if(prime[i])
            {
                for(int j=i*i;j<=n;j+=i)
                    prime[j]=false;
            }
        }
        for(int i=2;i<n;i++)
        {
            if(prime[i])
                cnt++;
        }
        return cnt;
    }
};
