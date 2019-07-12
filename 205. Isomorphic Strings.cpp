///205. Isomorphic Strings
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    unordered_map<char,char> mp;
    bool isIsomorphic(string s, string t) 
    {
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++)
        {
            if(s.find(s[i])!=t.find(t[i])) return false;
        }
        return true;
    }
};
