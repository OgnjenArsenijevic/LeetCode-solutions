///348. Design Tic-Tac-Toe
///Author: Ognjen Arsenijevic
///username: ognjen1998
class TicTacToe 
{
private: 
    vector<int> rows;
    vector<int> cols;
    int d1,d2,nn;
public:
    /** Initialize your data structure here. */
    TicTacToe(int n) 
    {
        rows.resize(n,0);
        cols.resize(n,0);
        d1=0;
        d2=0;
        nn=n;
    }
    
    /** Player {player} makes a move at ({row}, {col}).
        @param row The row of the board.
        @param col The column of the board.
        @param player The player, can be either 1 or 2.
        @return The current winning condition, can be either:
                0: No one wins.
                1: Player 1 wins.
                2: Player 2 wins. */
    int move(int row, int col, int player)
    {
        if(player==1)
        {
            rows[row]++;
            cols[col]++;
            if(row==col)
                d1++;
            if(row==nn-1-col)
                d2++;
            if(rows[row]==nn || cols[col]==nn || d1==nn || d2==nn)
                return 1;
        }
        else
        {
            rows[row]--;
            cols[col]--;
            if(row==col)
                d1--;
            if(row==nn-1-col)
                d2--;
            if(rows[row]==-nn || cols[col]==-nn || d1==-nn || d2==-nn)
                return 2;
        }
        return 0;
    }
};

/**
 * Your TicTacToe object will be instantiated and called as such:
 * TicTacToe* obj = new TicTacToe(n);
 * int param_1 = obj->move(row,col,player);
 */
