///1260. Shift 2D Grid
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k)
    {
        vector<vector<int>> ans;
        for(int i=0;i<grid.size();i++)
        {
            vector<int> v;
            for(int j=0;j<grid[0].size();j++)
                v.push_back(0);
            ans.push_back(v);
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                int jj=(j+k)%grid[0].size();
                int tmp=(j+k)/grid[0].size();
                int ii=(i+tmp)%grid.size();
                ans[ii][jj]=grid[i][j];
            }
        }
        return ans;
    }
};
