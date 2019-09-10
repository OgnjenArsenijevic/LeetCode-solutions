///684. Redundant Connection
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    typedef struct UnionFind
    {
        vector<int> parent;
        vector<int> rnk;
        UnionFind(int n=0)
        {
            if(n>0)
                init(n);
        }
        void init(int n)
        {
            parent.resize(n+1);
            rnk.resize(n+1);
            for(int i=0;i<=n;i++)
            {
                parent[i]=i;
                rnk[i]=0;
            }
        }
        int find(int u)
        {
            if(parent[u]==u)
                return parent[u];
            parent[u]=find(parent[u]);
            return parent[u];
        }
        bool isSameSet(int u, int v)
        {
            return find(u)==find(v);
        }
        void unite(int u, int v)
        {
            int parU=find(u);
            int parV=find(v);
            if(parU==parV)
                return;
            if(rnk[parU]<rnk[parV])
                parent[parU]=parV;
            else
            {
                parent[parV]=parU;
                if(rnk[parU]==rnk[parV])
                    rnk[parU]++;
            }
        }
    }UNION_FIND;
    vector<int> findRedundantConnection(vector<vector<int>>& edges) 
    {
        UNION_FIND uf(edges.size());
        for(int i=0;i<edges.size();i++)
        {
            if(uf.isSameSet(edges[i][0],edges[i][1]))
                return edges[i];
            uf.unite(edges[i][0],edges[i][1]);
        }
        vector<int> dummy;
        return dummy;
    }
};
