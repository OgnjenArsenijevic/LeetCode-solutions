///52. N-Queens II
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int n;
    char mat[15][15];
    int ansCnt;
    
    bool attacked(int ii, int jj)
    {
        for(int i=0;i<n;i++)
        {
            if(i!=ii && mat[i][jj]=='Q')
                return true;
        }
        for(int j=0;j<n;j++)
        {
            if(j!=jj && mat[ii][j]=='Q')
                return true;
        }
        for(int i=ii+1,j=jj+1;i<n && j<n;i++,j++)
        {
            if(mat[i][j]=='Q')
                return true;
        }
        for(int i=ii+1,j=jj-1;i<n && j>=0;i++,j--)
        {
            if(mat[i][j]=='Q')
                return true;
        }
        for(int i=ii-1,j=jj+1;i>=0 && j<n;i--,j++)
        {
            if(mat[i][j]=='Q')
                return true;
        }
        for(int i=ii-1,j=jj-1;i>=0 && j>=0;i--,j--)
        {
            if(mat[i][j]=='Q')
                return true;
        }
        return false;
    }

    void solve(int currRow)
    {
        if(currRow==n)
        {
            ansCnt++;
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(!attacked(currRow,i))
            {
                mat[currRow][i]='Q';
                solve(currRow+1);
                mat[currRow][i]='.';
            }
        }
        return;
    }
    int totalNQueens(int nn) 
    {
        n=nn;
        memset(mat,'.',sizeof(mat));
        solve(0);
        return ansCnt;
    }
};
