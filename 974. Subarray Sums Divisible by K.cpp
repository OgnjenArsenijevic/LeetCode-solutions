///974. Subarray Sums Divisible by K
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int rest[10005],sum;
    int subarraysDivByK(vector<int>& v, int k) 
    {
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
            int toAdd=sum%k;
            if(toAdd<0) toAdd+=k;
            rest[toAdd%k]++;
        }
        int ans=rest[0];
        for(int i=0;i<k;i++)
        {
            if(rest[i]>1)
                ans+=((rest[i]*(rest[i]-1)/2));
        }
        return ans;
    }
};
