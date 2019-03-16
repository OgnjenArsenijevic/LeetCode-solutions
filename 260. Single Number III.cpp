///260. Single Number III
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    vector<int> singleNumber(vector<int>& v) 
    {
        int diff=accumulate(v.begin(),v.end(),0,bit_xor<int>());
        int br=1;
        while((diff & br) == 0)
            br<<=1;
        vector<int> ans={0,0};
        for(int i=0;i<v.size();i++)
        {
            if(v[i] & br)
                ans[0]^=v[i];
            else
                ans[1]^=v[i];
        }
        return ans;
    }
};
