///1034. Coloring A Border
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int vis[55][55];
    int mat[55][55];
    int korX[4]={1,-1,0,0};
    int korY[4]={0,0,1,-1};
    int n,m,save;
    void dfs(int x,int y,vector<vector<int>>& grid)
    {
        vis[x][y]=1;
        grid[x][y]=-1;
        for(int rr=0;rr<4;rr++)
        {
            int xx=x+korX[rr],yy=y+korY[rr];
            if(xx>=0 && xx<n && yy>=0 && yy<m)
            {
                if(!vis[xx][yy] && grid[xx][yy]==save)
                    dfs(xx,yy,grid);
            }
        }
    }
    vector<vector<int> > colorBorder(vector<vector<int>>& grid, int x, int y, int color) 
    {
        n=grid.size(), m=grid[0].size();
        save=grid[x][y];
        dfs(x,y,grid);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==-1)
                {
                    if(i==0 || j==0 || i==n-1 || j==m-1)
                        mat[i][j]=1;
                    else
                    {
                        if(grid[i-1][j]!=-1 || grid[i][j-1]!=-1 || grid[i+1][j]!=-1 || grid[i][j+1]!=-1)
                            mat[i][j]=1;
                    }
                    
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1)
                {
                    grid[i][j]=color;
                    ans++;
                }
                else
                {
                    if(grid[i][j]==-1)
                        grid[i][j]=save;
                }
            }
        }
        return grid;
    }
};
