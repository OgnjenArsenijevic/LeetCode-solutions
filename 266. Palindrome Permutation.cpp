///266. Palindrome Permutation
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    bool canPermutePalindrome(string s) 
    {
        unordered_map<char,int> ump;
        for(int i=0;i<s.size();i++)
            ump[s[i]]++;
        int cnt=0;
        for(unordered_map<char,int>::iterator it=ump.begin();it!=ump.end();it++)
        {
            cnt+=(it->second%2);
            if(cnt>1)
                return false;
        }
        return true;
    }
};
