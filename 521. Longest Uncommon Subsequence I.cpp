///521. Longest Uncommon Subsequence I
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int findLUSlength(string a, string b) 
    {
        return (a==b ? -1 : max(a.size(),b.size()));
    }
};
