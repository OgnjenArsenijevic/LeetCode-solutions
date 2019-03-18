///922. Sort Array By Parity II
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> sortArrayByParityII(vector<int>& v)
    {
        vector<int> ans(v.size());
        int odd=1,even=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i] & 1)
            {
                ans[odd]=v[i];
                odd+=2;
            }
            else
            {
                ans[even]=v[i];
                even+=2;
            }
        }
        return ans;
    }
};
