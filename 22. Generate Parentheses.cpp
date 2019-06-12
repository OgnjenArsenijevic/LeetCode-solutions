///22. Generate Parentheses
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<string> ans;
    int o,c;
    void solve(string curr,int num)
    {
        if(curr.size()==num*2)
        {
            ans.push_back(curr);
            return;
        }
        if(o<num)
        {
            o++;
            solve(curr+"(",num);
            o--;
        }
        if(c<o)
        {
            c++;
            solve(curr+")",num);
            c--;
        }
            
    }
    vector<string> generateParenthesis(int n)
    {
        solve("",n);
        return ans;
    }
};
