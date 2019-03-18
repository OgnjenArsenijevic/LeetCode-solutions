///1014. Capacity To Ship Packages Within D Days
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool can(vector<int>& v,int d, int val)
    {
        int cnt=1,sum=0;
        for(int i=0;i<v.size();i++)
        {
            if(sum+v[i]<=val)
                sum+=v[i];
            else
            {
                sum=v[i];
                cnt++;
            }
            if(cnt>d || v[i]>val)
                return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& v, int d) 
    {
        int low=0,high=0;
        for(int i=0;i<v.size();i++)
            high+=v[i];
        while(low<high)
        {
            int mid=(low+high)/2;
            if(can(v,d,mid))
                high=mid;
            else
                low=mid+1;
        }
        return low;
    }
};
