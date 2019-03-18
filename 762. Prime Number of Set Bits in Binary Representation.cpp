///762. Prime Number of Set Bits in Binary Representation
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool prime(int n)
    {
        if(n<2) return false;
        if(n==2) return true;
        if((n & 1)==0) return false;
        for(int i=3;i<=sqrt(n);i+=2)
        {
            if(n%i==0) return false;
        }
        return true;
            
    }
    
    int countPrimeSetBits(int L, int R) 
    {
        int ans=0;
        for(int i=L;i<=R;i++)
        {
            int num=i;
            int cnt=0;
            while(num>0)
            {
                if(num & 1)
                    cnt++;
                num>>=1;
            }
            if(prime(cnt))
                ans++;
        }
        return ans;
    }
};
