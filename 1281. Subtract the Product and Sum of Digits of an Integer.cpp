///1281. Subtract the Product and Sum of Digits of an Integer
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int subtractProductAndSum(int n)
    {
        int prod=1,sum=0;
        while(n)
        {
            prod*=(n%10);
            sum+=(n%10);
            n/=10;
        }
        return prod-sum;
    }
};
