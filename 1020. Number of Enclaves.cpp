///1020. Number of Enclaves
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool vis[505][505];
    int korI[4]={1,-1,0,0};
    int korJ[4]={0,0,1,-1};
    int n,m;
    vector<vector<int>> vv;
    void dfs(int i, int j)
    {
        vis[i][j]=true;
        for(int rr=0;rr<4;rr++)
        {
            int ii=i+korI[rr], jj=j+korJ[rr];
            if(ii>=0 && ii<n && jj>=0 && jj<m)
            {
                if(!vis[ii][jj] && vv[i][j]==1)
                    dfs(ii,jj);
            }
            
        }
    }
    int numEnclaves(vector<vector<int>>& v) 
    {
        n=v.size();
        m=v[0].size();
        vv=v;
        for(int i=0;i<n;i++)
        {
            if(!vis[i][0] && vv[i][0]==1)
                dfs(i,0);
            if(!vis[i][m-1] && vv[i][m-1]==1)
                dfs(i,m-1);
        }
        for(int i=0;i<m;i++)
        {
            if(!vis[0][i] && vv[0][i]==1)
                dfs(0,i);
            if(!vis[n-1][i] && vv[n-1][i]==1)
                dfs(n-1,i);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vv[i][j]==1 && !vis[i][j])
                    ans++;
            }
        }
        return ans;
    }
};
