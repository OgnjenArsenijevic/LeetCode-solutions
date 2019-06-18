///448. Find All Numbers Disappeared in an Array
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        unordered_map<int,int> um;
        for(int i=0;i<nums.size();i++)
            um[nums[i]]++;
        vector<int> ans;
        for(int i=1;i<=nums.size();i++)
        {
            if(um[i]==0)
                ans.push_back(i);
        }
        return ans;
    }
};
