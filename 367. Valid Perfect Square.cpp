///367. Valid Perfect Square
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool isPerfectSquare(int num) 
    {
        int low=0, high=46340;
        while(low<high)
        {
            int mid=(low+high)/2;
            if(mid*mid==num) return true;
            if(mid*mid<num)
                low=mid+1;
            else
                high=mid-1;
        }
        if(low*low==num) return true;
        return false;
    }
};
