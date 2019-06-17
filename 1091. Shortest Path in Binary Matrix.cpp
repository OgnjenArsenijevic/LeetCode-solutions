///1091. Shortest Path in Binary Matrix
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int korI[8]={1,1,1,-1,-1,-1,0,0};
    int korJ[8]={-1,0,1,-1,0,1,-1,1};
    int dis[105][105];
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) 
    {
        memset(dis,-1,sizeof(dis));
        queue<pair<int,int> > q;
        q.push(make_pair(0,0));
        dis[0][0]=1;
        while(!q.empty())
        {
            int ii=q.front().first, jj=q.front().second;
            q.pop();
            for(int rr=0;rr<8;rr++)
            {
                int i=ii+korI[rr], j=jj+korJ[rr];
                if(i>=0 && i<grid.size() && j>=0 && j<grid[0].size() && grid[i][j]==0 && dis[i][j]==-1)
                {
                    dis[i][j]=dis[ii][jj]+1;
                    q.push(make_pair(i,j));
                }
            }
        }
        return dis[grid.size()-1][grid.size()-1];
    }
};
