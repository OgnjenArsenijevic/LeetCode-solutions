///1051. Height Checker
///Author: Ognjen Arsenijevic
///username: ognjen 1998
class Solution 
{
public:
    int heightChecker(vector<int>& h) 
    {
        vector<int> v;
        for(int i=0;i<h.size();i++)
            v.push_back(h[i]);
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<h.size();i++)
        {
            if(h[i]!=v[i])
                ans++;
        }
        return ans;
    }
};
