///970. Powerful Integers
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> powerfulIntegers(int x, int y, int bound) 
    {
        vector<int> ans;
        unordered_set<int> ss;
        vector<long long> v;
        vector<long long> vv;
        v.push_back(1);
        vv.push_back(1);
        long long br=1LL;
        while(br<=INT_MAX && x!=1)
        {
            br*=(long long)x;
            v.push_back(br);
        }
        br=1LL;
        while(br<=INT_MAX && y!=1)
        {
            br*=(long long)y;
            vv.push_back(br);
        }
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<vv.size();j++)
            {
                long long tmp=v[i]+vv[j];
                if(tmp<=bound)
                    ss.insert((int)tmp);
            }
        }
        for(unordered_set<int>::iterator it=ss.begin();it!=ss.end();it++)
            ans.push_back(*it);
        return ans;
    }
};
