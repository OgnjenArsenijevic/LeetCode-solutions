///806. Number of Lines To Write String
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> numberOfLines(vector<int>& widths, string s) 
    {
        vector<int> ans;
        int l=1,w=0;
        for(int i=0;i<s.size();i++)
        {
            w+=widths[s[i]-'a'];
            if(w>100)
            {
                l++;
                w=widths[s[i]-'a'];
            }
        }
        ans.push_back(l);
        ans.push_back(w);
        return ans;
    }
};
