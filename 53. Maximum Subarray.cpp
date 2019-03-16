///53. Maximum Subarray
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int maxSubArray(vector<int>& v) 
    {
        if(v.size()==0) return 0;
        bool check=false;
        int maxi=INT_MIN;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>0)
            {
                check=true;
                break;
            }
            if(v[i]>maxi)
                maxi=v[i];
        }
        if(!check) return maxi;
        maxi=v[0];
        int curr=0;
        for(int i=0;i<v.size();i++)
        {
            curr+=v[i];
            if(curr<0) curr=0;
            if(curr>maxi) maxi=curr;
        }
        return maxi;
    }
};
