///47. Permutations II
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<vector<int>> permuteUnique(vector<int>& v) 
    {
        vector<vector<int>> ans;
        sort(v.begin(),v.end());
        do 
        {
           ans.push_back(v);  
        } while (next_permutation(v.begin(),v.end()));
        return ans;
    }
};
