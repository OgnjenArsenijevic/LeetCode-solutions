///198. House Robber
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> dp;
    int rob(vector<int>& v) 
    {
        if(v.size()==0) return 0;
        if(v.size()==1) return v[0];
        if(v.size()==2) return max(v[0],v[1]);
        dp.push_back(v[0]);
        dp.push_back(max(v[0],v[1]));
        for(int i=2;i<v.size();i++)
            dp.push_back(max(dp[i-2]+v[i],dp[i-1]));
        return dp[dp.size()-1];
    }
};
