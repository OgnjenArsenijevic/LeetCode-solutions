///986. Interval List Intersections
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
    vector<Interval> intervalIntersection(vector<Interval>& v, vector<Interval>& vv) 
    {
        vector<Interval> ans;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<vv.size();j++)
            {
                int start=max(v[i].start,vv[j].start);
                int end=min(v[i].end,vv[j].end);
                if(start<=end)
                {
                    Interval in=Interval(start,end);
                    ans.push_back(in);
                }
            }
        }
        return ans;
    }
};
