///990. Satisfiability of Equality Equations
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    struct UnionFind
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
        bool isInSameSet(int u, int v)
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
            return;
        }
    };
    bool equationsPossible(vector<string>& v) 
    {
        UnionFind uf(35);
        for(int i=0;i<v.size();i++)
        {
            if(v[i][1]=='=')
            {
                int uu=v[i][0]-'a';
                int vv=v[i][3]-'a';
                uf.unite(uu,vv);
            }
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i][1]=='!')
            {
                int uu=v[i][0]-'a';
                int vv=v[i][3]-'a';
                if(uf.isInSameSet(uu,vv))
                    return false;
            }
        }
        return true;
    }
};
