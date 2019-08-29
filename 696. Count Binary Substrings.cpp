///696. Count Binary Substrings
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int countBinarySubstrings(string s) 
    {
        int ans=0,prev=0,curr=1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]!=s[i-1])
            {
                ans+=min(curr,prev);
                prev=curr;
                curr=1;
            }
            else
                curr++;
        }
        ans+=min(curr,prev);
        return ans;
    }
};
