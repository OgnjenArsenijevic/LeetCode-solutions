///1266. Minimum Time Visiting All Points
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) 
    {
        int ans=0;
        for(int i=1;i<points.size();i++)
        {
            int xx=abs(points[i][0]-points[i-1][0]);
            int yy=abs(points[i][1]-points[i-1][1]);
            ans+=min(xx,yy)+abs(xx-yy);
        }
        return ans;
    }
};
