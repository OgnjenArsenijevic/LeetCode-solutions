///9. Palindrome Number
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if(x<0) return false;
        int save=x,y=0;
        while(x>0)
        {
            y*=10;
            y+=(x%10);
            x/=10;
        }
        if(save==y) return true;
        return false;
    }
};
