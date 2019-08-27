///754. Reach a Number
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int reachNumber(int target)
    {
        if(target<0)
            target*=(-1);
        int q=0;
        while(target>0)
        {
            q++;
            target-=q;
        }    
        if(target & 1)
            return q+1+q%2;
        return q;
    }
};
