///39. Combination Sum
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<vector<int> > ans;
    void solve(int sum, int target, vector<int> v, vector<int> candidates)
    {
        if(v.size()>1 && v[v.size()-1]<v[v.size()-2]) return;
        if(sum>target) return;
        if(sum==target)
        {
            ans.push_back(v);
            return;
        }
        for(int i=0;i<candidates.size();i++)
        {
            v.push_back(candidates[i]);
            solve(sum+candidates[i],target,v,candidates);
            v.erase(v.end()-1);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        vector<int> v;
        solve(0,target,v,candidates);
        return ans;
    }
};
