///784. Letter Case Permutation
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<string> ans;
    void solve(string curr, string s, int idx)
    {
        if(curr.size()==s.size())
        {
            ans.push_back(curr);
            return;
        }
        if((s[idx]>='a' && s[idx]<='z') || (s[idx]>='A' && s[idx]<='Z'))
        {
            curr+=tolower(s[idx]);
            solve(curr,s,idx+1);
            curr[curr.size()-1]=toupper(s[idx]);
            solve(curr,s,idx+1);     
        }
        else
        {
            curr+=s[idx];
            solve(curr,s,idx+1);
        }
    }
    vector<string> letterCasePermutation(string s) 
    {
        solve("",s,0);
        return ans;
    }
};
