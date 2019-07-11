///171. Excel Sheet Column Number
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int titleToNumber(string s) 
    {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            ans*=26;
            ans+=(s[i]-'A')+1;
        }   
        return ans;
    }
};
