///1295. Find Numbers with Even Number of Digits
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool f(int n)
    {
        int cnt=0;
        while(n)
        {
            cnt++;
            n/=10;
        }
        return cnt%2==0;
    }
    int findNumbers(vector<int>& nums)
    {
        int cnt=0;
        for(int i=0;i<nums.size();i++)
            cnt+=(f(nums[i]) ? 1 : 0);
        return cnt;
    }
};
