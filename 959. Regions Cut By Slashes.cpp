///959. Regions Cut By Slashes
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int korX[4]={1,-1,0,0};
    int korY[4]={0,0,1,-1};
    int size;
    int mat[900][900];
    void dfs(int i,int j)
    {
        mat[i][j]=1;
        for(int rr=0;rr<4;rr++)
        {
            int ii=i+korX[rr];
            int jj=j+korY[rr];
          //  cout<<ii<<" "<<jj<<"aa\n";
            if(ii>=1 && jj>=1 && i<=size && jj<=size)
            {
                if(mat[ii][jj]==0)
                    dfs(ii,jj);
            }
        }
    }
    int regionsBySlashes(vector<string>& grid) 
    {
        size=3*grid.size();
        memset(mat,0,sizeof(mat));
        for(int i=1;i<=grid.size();i++)
        {
            for(int j=1;j<=grid[i].size();j++)
            {
                if(grid[i-1][j-1]=='/')
                {
                    mat[(i-1)*3+1][j*3]=1;
                    mat[(i-1)*3+2][(j-1)*3+2]=1;
                    mat[i*3][(j-1)*3+1]=1;
                }
                if(grid[i-1][j-1]=='\\')
                {
                    mat[(i-1)*3+1][(j-1)*3+1]=1;
                    mat[(i-1)*3+2][(j-1)*3+2]=1;
                    mat[i*3][j*3]=1;
                }
            }
        }
        int ans=0;
        for(int i=1;i<=3*grid.size();i++)
        {
            for(int j=1;j<=3*grid.size();j++)
            {
                if(mat[i][j]==0)
                {
                    ans++;
                    dfs(i,j);
                }
            }
        }
        return ans;
    }
};
