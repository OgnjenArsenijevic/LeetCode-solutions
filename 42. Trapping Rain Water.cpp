///42. Trapping Rain Water
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int trap(vector<int>& height) 
    {
        if(height.size()<2) return 0;
        int maxLeft[height.size()];
        int maxRight[height.size()];
        maxLeft[0]=0;
        for(int i=1;i<height.size();i++)
            maxLeft[i]=max(maxLeft[i-1],height[i-1]);
        maxRight[height.size()-1]=0;
        for(int i=height.size()-2;i>=0;i--)
            maxRight[i]=max(maxRight[i+1],height[i+1]);
        int ans=0;
        for(int i=0;i<height.size();i++)
            ans+=max(0,(min(maxLeft[i],maxRight[i])-height[i]));
        return ans;
    }
};
