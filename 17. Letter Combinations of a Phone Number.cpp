///17. Letter Combinations of a Phone Number
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
  public:
    unordered_map<char, string> ump;
    vector<string> ans;
    void solve(string comb, string nxt)
    {
        if(nxt.size()==0)
        {
            ans.push_back(comb);
            return;
        }    
        char dig=nxt[0];
        string s=ump[dig];
        for(int i=0;i<s.size();i++)
        {
            char ss=ump[dig][i];
            solve(comb+ss,nxt.substr(1));
        }
    }
    vector<string> letterCombinations(string digits) 
    {
        ump['2']="abc";
        ump['3']="def";
        ump['4']="ghi";
        ump['5']="jkl";
        ump['6']="mno";
        ump['7']="pqrs";
        ump['8']="tuv";
        ump['9']="wxyz";
        if(digits.size()==0)
            return ans;
        solve("",digits);
        return ans;
    }
};
