///1254. Number of Closed Islands
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int korI[4]={1,-1,0,0};
    int korJ[4]={0,0,1,-1};
    void dfs(vector<vector<int>>& grid, int i, int j)
    {
        int row=grid.size(), col=grid[0].size();
        grid[i][j]=1;
        for(int rr=0;rr<4;rr++)
        {
            int ii=i+korI[rr];
            int jj=j+korJ[rr];
            if(ii>=0 && ii<row && jj>=0 && jj<col && grid[ii][jj]==0)
                dfs(grid,ii,jj);
        }
        return;
    }
    
    int closedIsland(vector<vector<int>>& grid) 
    {
        int ans=0, row=grid.size(), col=grid[0].size();
        for(int i=0;i<col;i++)
        {
            if(grid[0][i]==0)
                dfs(grid,0,i);
            if(grid[row-1][i]==0)
                dfs(grid,row-1,i);
        }
        for(int i=1;i<row-1;i++)
        {
            if(grid[i][0]==0)
                dfs(grid,i,0);
            if(grid[i][col-1]==0)
                dfs(grid,i,col-1);             
        }
        for(int i=1;i<row-1;i++)
        {
            for(int j=1;j<col-1;j++)
            {
                if(grid[i][j]==0)
                {
                    dfs(grid,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }
};
