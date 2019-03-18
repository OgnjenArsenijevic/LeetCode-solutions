///999. Available Captures for Rook
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int numRookCaptures(vector<vector<char>>& board) 
    {
        int ans=0;
        int ii,jj;
        for(int i=0;i<board.size();i++)
        {
            bool flag=false;
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j]=='R')
                {
                    ii=i;
                    jj=j;
                    flag=true;
                    break;
                }
            }
            if(flag) break;
        }
        for(int j=jj+1;j<board[ii].size();j++)
        {
            if(board[ii][j]=='B')
                break;
            if(board[ii][j]=='p')
            {
                ans++;
                break;
            }
        }
        for(int j=jj-1;j>=0;j--)
        {
            if(board[ii][j]=='B')
                break;
            if(board[ii][j]=='p')
            {
                ans++;
                break;
            }
        }
        for(int i=ii+1;i<board.size();i++)
        {
            if(board[i][jj]=='B')
                break;
            if(board[i][jj]=='p')
            {
                ans++;
                break;
            }
        }
        for(int i=ii-1;i>=0;i--)
        {
            if(board[i][jj]=='B')
                break;
            if(board[i][jj]=='p')
            {
                ans++;
                break;
            }
        }
        return ans;
    }
};
