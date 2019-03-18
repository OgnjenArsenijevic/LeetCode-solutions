///952. Largest Component Size by Common Factor
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int minPrimeFactor[100005],rep[100005];
    struct UnionFind
    {
        vector<int> parent;
        vector<int> rank;
        vector<int> size;
        UnionFind(int n=0)
        {
            if(n>0)
                init(n);
        }
        void init(int n)
        {
            parent.resize(n+1);
            rank.resize(n+1);
            size.resize(n+1);
            for(int i=0;i<=n;i++)
            {
                parent[i]=i;
                rank[i]=0;
                size[i]=1;
            }
        }
        int find(int u)
        {
            if(parent[u]==u)
                return u;
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
            if(rank[parU]<rank[parV])
            {
                parent[parU]=parV;
                size[parV]+=size[parU];
            }    
            else
            {
                parent[parV]=parU;
                if(rank[parU]==rank[parV])
                    rank[parU]++;
                size[parU]+=size[parV];
            }
        }
    };
    
    void erathosten() 
    { 
        minPrimeFactor[1]=1; 
        for (int i=2;i<100005;i++) 
            minPrimeFactor[i] =i; 
        for (int i=4;i<100005;i+=2) 
            minPrimeFactor[i]=2; 
        for (int i=3;i*i<100005;i++) 
        { 
            if (minPrimeFactor[i]==i) 
            { 
                for (int j=i*i;j<100005;j+=i) 
                {
                    if (minPrimeFactor[j]==j) 
                        minPrimeFactor[j]=i; 
                }      
            } 
        } 
    }
    int largestComponentSize(vector<int>& v) 
    {
        erathosten();
        UnionFind uf(v.size());
        memset(rep,-1,sizeof(rep));
        for(int i=0;i<v.size();i++)
        {
            while(v[i]!=1)
            {
                int tmp=minPrimeFactor[v[i]];
                while(v[i]%tmp==0)
                    v[i]/=tmp;
                if(rep[tmp]==-1)
                    rep[tmp]=i;
                else
                    uf.unite(i,rep[tmp]);
            }
        }
        int ans=0;
        for(int i=0;i<v.size();i++)
            ans=max(ans,uf.size[uf.find(i)]);
        return ans;
    }
};
