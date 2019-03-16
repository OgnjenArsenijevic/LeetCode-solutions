///217. Contains Duplicate
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++)
            s.insert(nums[i]);
        return !(nums.size()==s.size());
    }
};
