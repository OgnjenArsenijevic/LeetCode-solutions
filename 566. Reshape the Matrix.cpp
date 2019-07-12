///566. Reshape the Matrix
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) 
    {
        vector<int> v;
        if(r*c!=nums.size()*nums[0].size())
            return nums;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[0].size();j++)
                v.push_back(nums[i][j]);
        }
        vector<vector<int> > ans;
        int curr=0;
        for(int i=0;i<r;i++)
        {
            vector<int> vv;
            for(int j=0;j<c;j++)
                vv.push_back(v[curr++]);
            ans.push_back(vv);
        }
        return ans;
    }
};
