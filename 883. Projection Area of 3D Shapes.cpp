///883. Projection Area of 3D Shapes
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int projectionArea(vector<vector<int>>& grid) 
    {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            int ii=0,jj=0;
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]>0) 
                    ans++;
                ii=max(ii,grid[i][j]);
            }    
            ans+=ii;
        }
        for(int j=0;j<grid[0].size();j++)
        {
            int ii=0;
            for(int i=0;i<grid.size();i++)
                ii=max(ii,grid[i][j]);
            ans+=ii;
        }
        return ans;
    }
};
