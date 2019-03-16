///70. Climbing Stairs
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int climbStairs(int n) 
    {
        int fb1=1,fb2=2,curr;
        if(n==1) return 1;
        if(n==2) return 2;
        for(int i=3;i<=n;i++)
        {
            curr=fb1+fb2;
            fb1=fb2;
            fb2=curr;
        }
        return curr;
    }
};
