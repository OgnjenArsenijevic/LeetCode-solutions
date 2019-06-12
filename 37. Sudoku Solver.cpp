///37. Sudoku Solver
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int n=9,mat[100][100]={{3, 0, 6, 5, 0, 8, 4, 0, 0},
                      {5, 2, 0, 0, 0, 0, 0, 0, 0},
                      {0, 8, 7, 0, 0, 0, 0, 3, 1},
                      {0, 0, 3, 0, 1, 0, 0, 8, 0},
                      {9, 0, 0, 8, 6, 3, 0, 0, 5},
                      {0, 5, 0, 0, 9, 0, 6, 0, 0},
                      {1, 3, 0, 0, 0, 0, 2, 5, 0},
                      {0, 0, 0, 0, 0, 0, 0, 7, 4},
                      {0, 0, 5, 2, 0, 6, 3, 0, 0}};

    bool completelySolved(int &i, int &j)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(mat[i][j]==0)
                    return false;
            }
        }
        return true;
    }

    bool canPlace(int ii, int jj,int val)
    {
        for(int i=0;i<n;i++)
        {
            if(i!=ii && mat[i][jj]==val)
                return false;
        }
        for(int j=0;j<n;j++)
        {
            if(j!=jj && mat[ii][j]==val)
                return false;
        }
        for(int i=(ii/3)*3;i<(ii/3)*3+3;i++)
        {
            for(int j=(jj/3)*3;j<(jj/3)*3+3;j++)
            {
                if((i!=ii || j!=jj) && mat[i][j]==val)
                    return false;
            }
        }
        return true;
    }

    bool solve()
    {
        int row,col;
        if(completelySolved(row,col))
            return true;
        for(int val=1;val<10;val++)
        {
            if(canPlace(row,col,val))
            {
                mat[row][col]=val;
                if(solve())
                    return true;
                mat[row][col]=0;
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board)
    {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
                mat[i][j]=(board[i][j]=='.' ? 0 : board[i][j]-'0');
        }
        solve();
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
                board[i][j]=(mat[i][j]==0 ? '.' : mat[i][j]+'0');
        }
        return;
    }
};
