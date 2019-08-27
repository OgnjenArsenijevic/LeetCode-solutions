///447. Number of Boomerangs
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int dis2(vector<int> a, vector<int> b)
    {
        return (a[0]-b[0])*(a[0]-b[0])+(a[1]-b[1])*(a[1]-b[1]);
    }
    int numberOfBoomerangs(vector<vector<int>>& points) 
    {
        int ans=0;
        for(int i=0;i<points.size();i++)
        {
            unordered_map<int,int> ump;
            for(int j=0;j<points.size();j++)
            {
                if(j!=i)
                    ump[dis2(points[i],points[j])]++;
            }
            for(unordered_map<int,int>::iterator it=ump.begin();it!=ump.end();it++)
                ans+=(it->second-1)*(it->second);
        }
        return ans;
    }
};
