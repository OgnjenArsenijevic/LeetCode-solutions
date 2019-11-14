  
///410. Split Array Largest Sum
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    typedef long long ll;
    bool can(vector<int>& v, int m, ll val)
    {
        int cnt=1;
        ll sum=(ll)v[0];
        for(int i=1;i<v.size();i++)
        {
            if(sum+v[i]<=val)
                sum+=v[i];
            else
            {
                sum=v[i];
                cnt++;
            }
        }
        return cnt<=m;
    }
    int splitArray(vector<int>& v, int m) 
    {
        ll low=(ll)*max_element(v.begin(),v.end());
        ll high=accumulate(v.begin(),v.end(),0LL);
        while(low<high)
        {
            ll mid=low+(high-low)/2;
            if(can(v,m,mid))
                high=mid;
            else
                low=mid+1;
        }
        return low;
    }
};
