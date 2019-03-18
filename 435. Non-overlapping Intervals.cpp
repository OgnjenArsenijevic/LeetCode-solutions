///435. Non-overlapping Intervals
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
    vector<pair<int,int> > v;
    int eraseOverlapIntervals(vector<Interval>& inter) 
    {
        for(int i=0;i<inter.size();i++)
            v.push_back(make_pair(inter[i].end,inter[i].start));
        sort(v.begin(),v.end());
        if(v.size()==0)
        {
            cout<<0;
            return 0;
        }
        int ans=1,currEnd=v[0].first;
        for(int i=1;i<v.size();i++)
        {
            if(v[i].second>=currEnd)
            {
                ans++;
                currEnd=v[i].first;
            }
        }
        return inter.size()-ans;
    }
};
