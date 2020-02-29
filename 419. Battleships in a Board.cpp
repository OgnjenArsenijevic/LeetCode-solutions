///419. Battleships in a Board
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int korI[4]={1,-1,0,0};
    int korJ[4]={0,0,1,-1};
    void dfs(int i, int j, vector<vector<char>>& board)
    {
        board[i][j]='.';
        for(int rr=0;rr<4;rr++)
        {
            int ii=korI[rr]+i, jj=korJ[rr]+j;
            if(ii<board.size() && jj<board[0].size() && board[ii][jj]=='X')
                dfs(ii,jj,board);
        }
    }
    int countBattleships(vector<vector<char>>& board)
    {
        int ans=0;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='X')
                {
                    ans++;
                    dfs(i,j,board);
                }
            }
        }
        return ans;
    }
};
