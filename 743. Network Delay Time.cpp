///743. Network Delay Time
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<pair<int,int>> g[105];
    int dis[105];
    priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > pq;
    int networkDelayTime(vector<vector<int>>& times, int n, int k) 
    {
        for(int i=0;i<times.size();i++)
            g[times[i][0]].push_back(make_pair(times[i][2],times[i][1]));
        memset(dis,63,sizeof(dis));
        dis[k]=0;
        pq.push(make_pair(0,k));
        while(!pq.empty())
        {
            int u=pq.top().second, d=pq.top().first;
            pq.pop();
            if(d>dis[u]) continue;
            for(int i=0;i<g[u].size();i++)
            {
                int v=g[u][i].second, w=g[u][i].first;
                if(dis[u]+w<dis[v])
                {
                    dis[v]=dis[u]+w;
                    pq.push(make_pair(dis[v],v));
                }
            }
        }
        int maxi=*max_element(dis+1,dis+n+1);
        return (maxi>1e9 ? -1 : maxi);
    }
};
