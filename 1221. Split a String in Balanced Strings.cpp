
///1221. Split a String in Balanced Strings
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int balancedStringSplit(string s) 
    {
        int ans=0,curr=0;
        for(int i=0;i<s.size();i++)
        {
            curr+=(s[i]=='L' ? 1 : -1);
            ans+=(curr==0 ? 1 : 0);
        }
        return ans;
    }
};
