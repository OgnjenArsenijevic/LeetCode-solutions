///643. Maximum Average Subarray I
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    double findMaxAverage(vector<int>& v, int k) 
    {
        int idx=0;
        double ans,sum=0;
        for(int i=0;i<k;i++)
            sum+=(double)v[i];
        ans=sum/k;
        for(int i=k;i<v.size();i++)
        {
            sum-=(double)v[idx++];
            sum+=(double)v[i];
            ans=max(ans,sum/k);
        }
        return ans;
    }
};
