///942. DI String Match
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> diStringMatch(string s) 
    {
        int left=0,right=s.size(),ptr=0;
        vector<int> ans;
        while(left<right)
        {
            if(s[ptr++]=='I')
                ans.push_back(left++);
            else
                ans.push_back(right--);
        }
        ans.push_back(left);
        return ans;
    }
};
