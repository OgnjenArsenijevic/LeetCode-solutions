///1332. Remove Palindromic Subsequences
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool palindrome(string s)
    {
        int l=0, r=s.size()-1;
        while(l<r)
        {
            if(s[l++]!=s[r--])
                return false;
        }
        return true;
    }
    int removePalindromeSub(string s) 
    {
        if(s.size()==0) return 0;
        if(palindrome(s)) return 1;
        return 2;
    }
};
