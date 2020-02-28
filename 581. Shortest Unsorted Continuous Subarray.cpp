///581. Shortest Unsorted Continuous Subarray
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int findUnsortedSubarray(vector<int>& nums)
    {
        vector<int> v;
        for(int i=0;i<nums.size();i++)
            v.push_back(nums[i]);
        sort(v.begin(),v.end());
        int l=-1, r=-1;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=nums[i])
            {
                if(l==-1)
                    l=i;
                r=i;
            }
        }
        if(l==-1 || r==-1) return 0;
        return r-l+1;
    }
};
