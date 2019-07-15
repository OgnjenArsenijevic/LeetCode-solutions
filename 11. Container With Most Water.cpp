///11. Container With Most Water
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int maxArea(vector<int>& v) 
    {
        if(v.size()<2) return 0;
        int ans=0,l=0,r=v.size()-1;
        while(l<r)
        {
            ans=max(ans,(r-l)*min(v[l],v[r]));
            if(v[l]<v[r])
                l++;
            else
                r--;
        }
        return ans;
    }
};
