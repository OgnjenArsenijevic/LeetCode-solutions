///995. Minimum Number of K Consecutive Bit Flips
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public: 
    vector<int> flags;
    int minKBitFlips(vector<int>& v, int k) 
    {
        int n=v.size();
        for(int i=0;i<n;i++)
            flags.push_back(0);
        int ans=0,curr=0;
        for(int i=0;i<n;i++)
        {
            if(curr&1)
            {
                if(v[i]==0) v[i]=1;
                else v[i]=0;
            }
            if(v[i]==0)
            {
                ans++;
                curr++;
                if(i+k-1<n)
                    flags[i+k-1]=1;
                else
                    return -1;
            }
            if(flags[i]) curr--;
        }
        return ans;
    }
};
