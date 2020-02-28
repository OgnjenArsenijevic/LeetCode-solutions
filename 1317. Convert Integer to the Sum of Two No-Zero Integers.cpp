///1317. Convert Integer to the Sum of Two No-Zero Integers
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool hasZero(int n)
    {
        while(n)
        {
            if(n%10==0)
                return true;
            n/=10;
        }
        return false;
    }
    vector<int> getNoZeroIntegers(int n) 
    {
        for(int i=1;i<=n/2;i++)
        {
            if(!hasZero(i) && !hasZero(n-i))
            {
                vector<int> ans;
                ans.push_back(i);
                ans.push_back(n-i);
                return ans;
            }
        }
        vector<int> ans;
        return ans;
    }
};
