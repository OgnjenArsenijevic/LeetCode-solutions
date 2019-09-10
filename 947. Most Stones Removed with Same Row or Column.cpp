///947. Most Stones Removed with Same Row or Column
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    typedef struct UnionFind
    {
        vector<int> parent;
        vector<int> rnk;
        int groups;
        UnionFind(int n=0)
        {
            if(n>0)
                init(n);
        }
        void init(int n)
        {
            parent.resize(n+60000);
            rnk.resize(n+60000);
            groups=n;
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
        bool isSameSet(int u,int v)
        {
            return find(u)==find(v);
        }
        void unite(int u,int v)
        {
            int parU=find(u);
            int parV=find(v);
            if(parU==parV)
                return;
            groups--;
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
    int removeStones(vector<vector<int>>& stones) 
    {
        UNION_FIND uf(20000);
        for(int i=0;i<stones.size();i++)
                uf.unite(stones[i][0],stones[i][1]+10000);
        unordered_set<int> ust;
        for(int i=0;i<stones.size();i++)
            ust.insert(uf.find(stones[i][0]));
        return stones.size()-ust.size();
    }
};
