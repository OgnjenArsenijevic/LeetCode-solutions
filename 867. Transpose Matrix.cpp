///867. Transpose Matrix
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<vector<int>> transpose(vector<vector<int>>& v) 
    {
        vector<vector<int>>ans;
        for(int i=0;i<v[0].size();i++)
        {
            vector<int> vv;
            for(int j=0;j<v.size();j++)
                vv.push_back(v[j][i]);
            ans.push_back(vv);
        }
        return ans;
    }
};
