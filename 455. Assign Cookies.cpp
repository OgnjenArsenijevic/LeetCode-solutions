///455. Assign Cookies
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int ans=0,idx=s.size()-1;
        for(int i=g.size()-1;i>=0;i--)
        {
            if(idx<0) break;
            if(g[i]<=s[idx])
            {
                idx--;
                ans++;
            }
        }
        return ans;
    }
};
