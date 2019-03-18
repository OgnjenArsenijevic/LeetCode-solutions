///409. Longest Palindrome
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int longestPalindrome(string s) 
    {
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++)
            m[s[i]]++;
        int sub=0;
        for(unordered_map<char,int>::iterator it=m.begin();it!=m.end();it++)
        {
            if(it->second & 1)
                sub++;
        }
        return s.size()-sub+(sub>=1);
    }
};
