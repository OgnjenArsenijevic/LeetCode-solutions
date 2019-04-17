///704. Binary Search
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int search(vector<int>& nums, int target) 
    {
        return (lower_bound(nums.begin(),nums.end(),target)!=nums.end() && 
        *lower_bound(nums.begin(),nums.end(),target)==target ? 
        lower_bound(nums.begin(),nums.end(),target)-nums.begin() : -1);
    }
};
