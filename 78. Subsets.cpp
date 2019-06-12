///78. Subsets
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<vector<int> > ans;
    int used[20];
    void solve(int curr, int sz,int idx, vector<int> v, vector<int> nums)
    {
        if(curr==sz)
        {
            ans.push_back(v);
            return;
        }
        if(idx>nums.size()) return;
        for(int i=idx;i<nums.size();i++)
        {
            v.push_back(nums[i]);
            solve(curr+1,sz,idx+1,v,nums);
            v.erase(v.end()-1);
            idx++;
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<int> v;
        ans.push_back(v);
        sort(nums.begin(),nums.end());
        memset(used,-1,sizeof(used));
        for(int i=1;i<=nums.size();i++)
            solve(0,i,0,v,nums);
        return ans;
    }
};
