///980. Unique Paths III
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int si,sj,ei,ej,n,m;
    bool vis[25][25];
    int korI[4]={0,0,1,-1};
    int korJ[4]={1,-1,0,0};
    int dfs(int ii,int jj,int walkable,vector<vector<int>>& grid)
    {
        if(ii<0 || ii>=n || jj<0 || jj>=m || grid[ii][jj]==-1 || vis[ii][jj]==true) return 0;
        if(ii==ei && jj==ej) return (walkable==1 ? 1 : 0);
        vis[ii][jj]=true;
        int ans=0;
        for(int rr=0;rr<4;rr++)
            ans+=dfs(ii+korI[rr],jj+korJ[rr],walkable-1,grid);
        vis[ii][jj]=false;
        return ans;
    }
    int uniquePathsIII(vector<vector<int>>& grid) 
    {
        int walkable=0;
        n=grid.size();
        m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    si=i;
                    sj=j;
                }
                if(grid[i][j]==2)
                {
                    ei=i;
                    ej=j;
                }
                if(grid[i][j]!=-1)
                    walkable++;
            }
        }
        return dfs(si,sj,walkable,grid);
    }
};
