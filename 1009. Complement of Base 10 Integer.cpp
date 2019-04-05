///1009. Complement of Base 10 Integer
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int bitwiseComplement(int n) 
    {
        if(n==0) return 1;
        long long curr=2LL;
        while(curr<=n)
        {
            curr*=2;
        }    
        return curr-n-1;
    }
};
