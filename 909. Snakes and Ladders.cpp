///909. Snakes and Ladders
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    pair<int,int> getRC(int val, int n)
    {
        int row, col;
        row=val/n+(val%n ? 1:0);
        col=(val%n ? val%n : n);
        if(!(row&1))
            col=n+1-col;
        return make_pair(--row,--col);
    }
    int snakesAndLadders(vector<vector<int>>& board)
    {
        for(int i=0;i<board.size()/2;i++)
            swap(board[i],board[board.size()-1-i]);
        int dis[board.size()][board.size()];
        memset(dis,-1,sizeof(dis));
        queue<int> q;
        dis[0][0]=0;
        q.push(1);
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            pair<int,int> p=getRC(u,board.size());
            int rowU=p.first, colU=p.second;
            for(int i=1;i<=6 && u+i<=board.size()*board.size();i++)
            {
                int v=u+i;
                p=getRC(v,board.size());
                if(board[p.first][p.second]!=-1)
                {
                    int vv=board[p.first][p.second];
                    pair<int,int> pp=getRC(vv,board.size());
                    if(dis[pp.first][pp.second]==-1 || dis[rowU][colU]+1<dis[pp.first][pp.second])
                    {
                        dis[pp.first][pp.second]=dis[rowU][colU]+1;
                        q.push(vv);
                    }
                }
                else if(dis[p.first][p.second]==-1 || dis[rowU][colU]+1<dis[p.first][p.second])
                {
                    dis[p.first][p.second]=dis[rowU][colU]+1;
                    q.push(v);
                }
            }
        }
        pair<int,int> p=getRC(board.size()*board.size(),board.size());
        return dis[p.first][p.second];
    }
};
