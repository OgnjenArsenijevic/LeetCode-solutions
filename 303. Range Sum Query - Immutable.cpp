///303. Range Sum Query - Immutable
///Author: Ognjen Arsenijevic
///username: ognjen1998
class NumArray 
{
public:
    vector<int> dp;
    NumArray(vector<int>& nums) 
    {
        if(nums.size()>0)
        {
            dp.push_back(nums[0]);
            for(int i=1;i<nums.size();i++)
                dp.push_back(dp[i-1]+nums[i]);
        }
    }
    
    int sumRange(int i, int j) 
    {
        return(i>0 ? dp[j]-dp[i-1] : dp[j]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
