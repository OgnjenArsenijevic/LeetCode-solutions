///57. Insert Interval
///Author: Ognjen Arsenijevic
///username: ognjen1998
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution 
{
public:
    vector<pair<int,int> > vv;
    void solve()
    {
        vector<pair<int,int> > vvv;
        pair<int,int> curr=vv[0];
        for(int i=1;i<vv.size();i++)
        {
            if(vv[i].first<=curr.second)
                curr.second=max(curr.second,vv[i].second);
            else
            {
                vvv.push_back(curr);
                curr=vv[i];
            }
        }
        vvv.push_back(curr);
        vv.clear();
        for(int i=0;i<vvv.size();i++)
            vv.push_back(vvv[i]);
    }
    vector<Interval> merge(vector<Interval>& v) 
    {
        if(v.size()==0) return v;
        for(int i=0;i<v.size();i++)
            vv.push_back(make_pair(v[i].start,v[i].end));
        sort(vv.begin(),vv.end());
        solve();
        v.clear();
        for(int i=0;i<vv.size();i++)
            v.push_back(Interval(vv[i].first,vv[i].second));
        return v;
    }
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) 
    {
        intervals.push_back(newInterval);
        return merge(intervals);
    }
};
