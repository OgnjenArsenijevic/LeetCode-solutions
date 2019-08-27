///532. K-diff Pairs in an Array
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int findPairs(vector<int>& v, int k) 
    {
        if(k<0) return 0;
        set<pair<int,int> > ust;
        unordered_map<int,int> ump;
        for(int i=0;i<v.size();i++)
            ump[v[i]]++;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            if(k==0)
            {
                if(ump[v[i]]>1)
                    ust.insert(make_pair(v[i],v[i]));
            }
            else
            {
                if(ump[v[i]+k]>0)
                    ust.insert(make_pair(v[i],v[i]+k));
            }
        }
        return ust.size();
    }
};
