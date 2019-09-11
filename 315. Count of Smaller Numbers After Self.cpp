///315. Count of Smaller Numbers After Self
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> ftMul;
    vector<int> ftAdd;
    void internalUpdate(int idx, int mul, int add)
    {
        for(int i=idx;i<ftMul.size();i+=(i & -i))
        {
            ftMul[i]+=mul;
            ftAdd[i]+=add;
        }
    }
    void update(int val, int l, int r)
    {
        internalUpdate(l,val,-val*(l-1));
        internalUpdate(r,-val,val*r);
    }
    int query(int idx)
    {
        int add=0, mul=0, start=idx;
        for(int i=idx;i>0;i-=(i & -i))
        {
            add+=ftAdd[i];
            mul+=ftMul[i];
        }
        return mul*start+add;
    }
    vector<int> countSmaller(vector<int>& v) 
    {
        if(v.empty())
            return v;
        ftMul.resize(v.size()+5);
        ftAdd.resize(v.size()+5);
        vector<pair<int,int> > vv;
        for(int i=0;i<v.size();i++)
            vv.push_back(make_pair(v[i],i));
        sort(vv.begin(),vv.end());
        int curr=1;
        v[vv[0].second]=1;
        for(int i=1;i<vv.size();i++)
        {
            if(vv[i].first==vv[i-1].first)
                v[vv[i].second]=curr;
            else
                v[vv[i].second]=++curr;
        }
        vector<int> ans;
        ans.resize(v.size());
        for(int i=v.size()-1;i>=0;i--)
        {
            ans[i]=(query(v[i])-query(v[i]-1));
            update(1,v[i]+1,v.size()+4);
        }
        return ans;
    }
};
