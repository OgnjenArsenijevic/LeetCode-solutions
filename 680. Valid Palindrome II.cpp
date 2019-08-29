///680. Valid Palindrome II
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool isPalindrome(string s, int l, int r)
    {
        for(int i=l;i<=l+(r-l)/2;i++)
        {
            if(s[i]!=s[r-i+l]) return false;
        }
        return true;
    }
    bool validPalindrome(string s) 
    {
        for(int i=0;i<s.size()/2;i++)
        {
            if(s[i]!=s[s.size()-1-i])
                return isPalindrome(s,i+1,s.size()-1-i) || isPalindrome(s,i,s.size()-2-i);
        }
        return true;
    }
};
