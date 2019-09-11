///130. Surrounded Regions
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int korI[4]={1,0,-1,0};
    int korJ[4]={0,1,0,-1};
    void dfs(vector<vector<char>>& board, int i, int j)
    {
        board[i][j]='#';
        for(int rr=0;rr<4;rr++)
        {
            int ii=i+korI[rr];
            int jj=j+korJ[rr];
            if(ii>=0 && ii<board.size() && jj>=0 && jj<board[0].size() && board[ii][jj]=='O')
                dfs(board,ii,jj);
        }
    }
    void dfs1(vector<vector<char>>& board, int i, int j)
    {
        board[i][j]='X';
        for(int rr=0;rr<4;rr++)
        {
            int ii=korI[rr];
            int jj=korJ[rr];
            if(ii>=0 && ii<board.size() && jj>=0 && jj<board[0].size() && board[ii][jj]=='O')
                dfs1(board,ii,jj);
        }
    }
    void solve(vector<vector<char>>& board) 
    {
        if(board.empty()) return;
        for(int j=0;j<board[0].size();j++)
        {
            if(board[0][j]=='O')
                dfs(board,0,j);
            if(board[board.size()-1][j]=='O')
                dfs(board,board.size()-1,j);
        }
        for(int i=0;i<board.size();i++)
        {
            if(board[i][0]=='O')
                dfs(board,i,0);
            if(board[i][board[0].size()-1]=='O')
                dfs(board,i,board[0].size()-1);
        }
        for(int i=1;i<board.size();i++)
        {
            for(int j=1;j<board[0].size();j++)
            {
                if(board[i][j]=='O')
                   dfs1(board,i,j);
            }
        }
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='#')
                    board[i][j]='O';
            }
        }
    }
};
