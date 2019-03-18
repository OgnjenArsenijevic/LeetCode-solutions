///507. Perfect Number
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    bool checkPerfectNumber(int num) 
    {
        int pNums[5]={6,28,496,8128,33550336};
        for(int i=0;i<5;i++)
        {
            if(pNums[i]==num) return true;
        }
        return false;
    }
};
