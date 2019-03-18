///994. Rotting Oranges
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int dis[12][12];
        int korI[4]={0,0,1,-1};
        int korJ[4]={1,-1,0,0};
        memset(dis,-1,sizeof(dis));
        queue<pair<int,int> > q;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==2)
                {
                    dis[i][j]=0;
                    q.push(make_pair(i,j));
                }
                if(grid[i][j]==0)
                    dis[i][j]=-2;
            }
        }
        while(!q.empty())
        {
            int ii=q.front().first,jj=q.front().second;
            q.pop();
            for(int rr=0;rr<4;rr++)
            {
                int i=ii+korI[rr], j=jj+korJ[rr];
                if(i>=0 && i<grid.size() && j>=0 && j<grid[i].size() && dis[i][j]==-1)
                {
                    dis[i][j]=dis[ii][jj]+1;
                    q.push(make_pair(i,j));
                }
            }
        }
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(dis[i][j]==-1)
                    return -1;
                if(dis[i][j]>ans)
                    ans=dis[i][j];
            }
        }
        return ans;
    }
};
