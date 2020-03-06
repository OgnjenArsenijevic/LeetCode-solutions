///470. Implement Rand10() Using Rand7()
///Author: Ognjen Arsenijevic
///username: ognjen1998
// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution
{
public:
    int rand10() 
    {
        int r=rand7(),c=rand7(),idx;
        idx=(r-1)*7+c;
        while(idx>40)
        {
            r=rand7();
            c=rand7();
            idx=(r-1)*7+c;
        }
        return (idx-1)%10+1;
    }
};
