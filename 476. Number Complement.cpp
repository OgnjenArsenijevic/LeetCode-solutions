///476. Number Complement
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int findComplement(int num)
    {
        int br=1;
        int tmp=num;
        while(tmp>0)
        {
            tmp/=2;
            br*=2;
        }
        if(num==0) br=2;
        return br-1-num;
    }
};
