///794. Valid Tic-Tac-Toe State
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool validTicTacToe(vector<string>& board)
    {
        int xx=0,oo=0;
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                if(board[i][j]=='X')
                    xx++;
                else if(board[i][j]=='O')
                    oo++;
        int x=0,o=0;
        for(int i=0;i<3;i++)
            if(board[i]=="XXX")
                x++;
            else if(board[i]=="OOO")
                o++;
        for(int j=0;j<3;j++)
        {
            int cntX=0,cntO=0;
            for(int i=0;i<3;i++)
                if(board[i][j]=='X')
                    cntX++;
                else if(board[i][j]=='O')
                    cntO++;
            if(cntX==3)
                x++;
            else if(cntO==3)
                o++;
        }
        if(board[0][0]=='X' && board[1][1]=='X' && board[2][2]=='X')
            x++;
        if(board[0][2]=='X' && board[1][1]=='X' && board[2][0]=='X')
            x++;
        if(board[0][0]=='O' && board[1][1]=='O' && board[2][2]=='O')
            o++;
        if(board[0][2]=='O' && board[1][1]=='O' && board[2][0]=='O')
            o++;
        if((x>0 && o>0)||(x>0 && xx-oo!=1)||(o>0 && xx-oo!=0)||xx-oo<0||xx-oo>1) return false;
        return true;
    }
};
