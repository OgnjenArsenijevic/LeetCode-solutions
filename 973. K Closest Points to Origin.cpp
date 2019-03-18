///973. K Closest Points to Origin
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) 
    {
        vector<pair<int,pair<int,int> > > v;
        vector<vector<int>> ans;
        for(int i=0;i<points.size();i++)
        {
            int dis=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            v.push_back(make_pair(dis,make_pair(points[i][0],points[i][1])));
        }
        sort(v.begin(),v.end());
        for(int i=0;i<K;i++)
        {
            vector<int> vv;
            vv.push_back(v[i].second.first);
            vv.push_back(v[i].second.second);
            ans.push_back(vv);
        }
        return ans;
    }
};
