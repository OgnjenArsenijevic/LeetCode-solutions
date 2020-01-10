///1275. Find Winner on a Tic Tac Toe Game
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    string tictactoe(vector<vector<int>>& moves)
    {
        char mat[3][3];
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                mat[i][j]=' ';
        for(int i=0;i<moves.size();i++)
            mat[moves[i][0]][moves[i][1]]=(i&1 ? 'O' : 'X');
        for(int i=0;i<3;i++)
            if(mat[i][0]==mat[i][1] && mat[i][0]==mat[i][2] && mat[i][0]=='X')
                return "A";
        for(int i=0;i<3;i++)
            if(mat[0][i]==mat[1][i] && mat[0][i]==mat[2][i] && mat[0][i]=='X')
                return "A";
        if(mat[0][0]==mat[1][1] && mat[0][0]==mat[2][2] && mat[0][0]=='X')
            return "A";
        if(mat[0][2]==mat[1][1] && mat[0][2]==mat[2][0] && mat[0][2]=='X')
            return "A";
        for(int i=0;i<3;i++)
            if(mat[i][0]==mat[i][1] && mat[i][0]==mat[i][2] && mat[i][0]=='O')
                return "B";
        for(int i=0;i<3;i++)
            if(mat[0][i]==mat[1][i] && mat[0][i]==mat[2][i] && mat[0][i]=='O')
                return "B";
        if(mat[0][0]==mat[1][1] && mat[0][0]==mat[2][2] && mat[0][0]=='O')
            return "B";
        if(mat[0][2]==mat[1][1] && mat[0][2]==mat[2][0] && mat[0][2]=='O')
            return "B";
        if(moves.size()==9)
            return "Draw";
        return "Pending";
        
    }
};
