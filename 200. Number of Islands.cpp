///200. Number of Islands
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int korI[4]={1,0,-1,0};
    int korJ[4]={0,1,0,-1};
    void dfs(vector<vector<char>>& grid,int i, int j)
    {
        grid[i][j]='2';
        for(int rr=0;rr<4;rr++)
        {
            int ii=i+korI[rr];
            int jj=j+korJ[rr];
            if(ii>=0 && ii<grid.size() && jj>=0 && jj<grid[0].size() && grid[ii][jj]=='1')
                dfs(grid,ii,jj);
        }
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        if(grid.empty()) return 0;
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    ans++;
                    dfs(grid,i,j);
                }
            }
        }
        return ans;
    }
};
