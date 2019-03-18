///954. Array of Doubled Pairs
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool canReorderDoubled(vector<int>& v) 
    {
        if(v.size()<2) return true;
        set<int> pos;
        set<int> neg;
        map<int,int> m;
        int zero=0;
        for(int i=0;i<v.size();i++)
        {
            m[v[i]]++;
            if(v[i]>0)
                pos.insert(v[i]);
            if(v[i]==0)
                zero++;
            if(v[i]<0)
                neg.insert(v[i]);
        }
        if(zero%2) return false;
        for(set<int>::iterator it=pos.begin();it!=pos.end();it++)
        {
            int val=*it;
            int br=m[val];
            if(m[2*val]<br)
                return false;
            m[2*val]-=br;
        }
        for(set<int>::iterator it=neg.begin();it!=neg.end();it++)
        {
            int val=*it;
            int br=m[val];
            if(val % 2 && br>0) return false;
            if(m[val/2]<br)
                return false;
            m[val/2]-=br;
        }
        return true;
    }
};
