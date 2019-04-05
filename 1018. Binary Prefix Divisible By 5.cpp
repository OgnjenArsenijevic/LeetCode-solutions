///1018. Binary Prefix Divisible By 5
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<bool> prefixesDivBy5(vector<int>& v) 
    {
        vector<bool> ans;
        int curr=0;
        for(int i=0;i<v.size();i++)
        {
            curr*=2;
            curr+=v[i];
            curr%=5;
            if(curr==0)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};
