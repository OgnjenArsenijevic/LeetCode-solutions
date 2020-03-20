///293. Flip Game
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution {
public:
    vector<string> generatePossibleNextMoves(string s) 
    {
        vector<string> ans;
        if(s.empty()) return ans;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='+' && s[i-1]=='+')
            {
                s[i-1]='-';
                s[i]='-';
                ans.push_back(s);
                s[i-1]='+';
                s[i]='+';
            }
        }
        return ans;
    }
};
