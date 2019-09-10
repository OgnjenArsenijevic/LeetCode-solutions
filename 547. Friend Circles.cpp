///547. Friend Circles
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
            parent.resize(n+1);
            rnk.resize(n+1);
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
    int findCircleNum(vector<vector<int>>& mat) 
    {
        UNION_FIND uf(mat.size());
        for(int i=0;i<mat.size();i++)
        {
            for(int j=i+1;j<mat.size();j++)
            {
                if(mat[i][j]==1 && !uf.isSameSet(i,j))
                    uf.unite(i,j);
            }
        }
        return uf.groups;
    }
};
