///258. Add Digits
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int addDigits(int num)
    {
        if(num==0) return num;
        int s=0;
        while(num>0)
        {
            s+=num%10;
            num/=10;
            if(num==0)
            {
                if(s<10) return s;
                num=s;
                s=0;
            }
        }
    }
};
