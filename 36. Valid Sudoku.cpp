///36. Valid Sudoku
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        for(int i=0;i<9;i++)
        {
            unordered_map<char,int> um;
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                    continue;
                um[board[i][j]]++;
                if(um[board[i][j]]>1)
                    return false;
            }
        }
        for(int j=0;j<9;j++)
        {
            unordered_map<char,int> um;
            for(int i=0;i<9;i++)
            {
                if(board[i][j]=='.')
                    continue;
                um[board[i][j]]++;
                if(um[board[i][j]]>1)
                    return false;
            }
        }
        for(int i=0;i<9;i+=3)
        {
            for(int j=0;j<9;j+=3)
            {
                unordered_map<char,int> um;
                um[board[i][j]]++;
                um[board[i][j+1]]++;
                um[board[i][j+2]]++;
                um[board[i+1][j]]++;
                um[board[i+1][j+1]]++;
                um[board[i+1][j+2]]++;
                um[board[i+2][j]]++;
                um[board[i+2][j+1]]++;
                um[board[i+2][j+2]]++;
                for(unordered_map<char,int>::iterator it=um.begin();it!=um.end();it++)
                {
                    if(it->first!='.' && it->second>1)
                        return false;
                }
            }
        }
        return true;
    }
};
