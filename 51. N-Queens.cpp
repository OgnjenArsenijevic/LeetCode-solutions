///51. N-Queens
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution {
public:
    int n;
    char mat[15][15],ansCnt;
    vector<vector<string> > ans;
    
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
            vector<string> v;
            for(int i=0;i<n;i++)
            {
                string s="";
                for(int j=0;j<n;j++)
                    s+=mat[i][j];
                v.push_back(s);
            }
            ans.push_back(v);
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
    vector<vector<string>> solveNQueens(int nn) 
    {
        n=nn;
        memset(mat,'.',sizeof(mat));
        solve(0);
        return ans;
    }
};
