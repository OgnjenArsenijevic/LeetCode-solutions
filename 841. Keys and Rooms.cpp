///841. Keys and Rooms
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> g[1005];
    bool vis[1005];
    void dfs(int u)
    {
        vis[u]=true;
        for(int i=0;i<g[u].size();i++)
        {
            int v=g[u][i];
            if(!vis[v])
                dfs(v);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) 
    {
        for(int i=0;i<rooms.size();i++)
        {
            for(int j=0;j<rooms[i].size();j++)
                g[i].push_back(rooms[i][j]);
        }
        dfs(0);
        for(int i=0;i<rooms.size();i++)
        {
            if(!vis[i]) return false;
        }
        return true;
    }
};
