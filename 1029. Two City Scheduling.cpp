///1029. Two City Scheduling
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int twoCitySchedCost(vector<vector<int>>& costs) 
    {
        vector<pair<int, pair<int,int> > > v;
        int ans=0;
        for(int i=0;i<costs.size();i++)
            v.push_back(make_pair(costs[i][0]-costs[i][1],make_pair(costs[i][0],costs[i][1])));
        sort(v.begin(),v.end());
        for(int i=0;i<costs.size()/2;i++)
            ans+=v[i].second.first+v[i+costs.size()/2].second.second;
        return ans;
    }
};
