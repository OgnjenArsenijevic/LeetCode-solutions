///1351. Count Negative Numbers in a Sorted Matrix
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int countNegatives(vector<vector<int>>& grid) 
    {
        int ans=0, i=0, j=grid[0].size()-1,cnt=0;
        while(i<grid.size() && j>=0)
        {
            if(grid[i][j]<0)
                j--;
            else
            {
                i++;
                cnt+=j+1;
            }
        }
        return grid.size()*grid[0].size()-cnt;
    }
};
