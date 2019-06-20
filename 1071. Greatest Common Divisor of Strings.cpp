///1071. Greatest Common Divisor of Strings
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string gcdOfStrings(string s, string s1)
    {
        if(s.size()<s1.size())
            swap(s,s1);
        if(s==s1) return s;
        if(s1=="") return s1;
        if(s.find(s1)==-1) return "";
        s.erase(s.find(s1),s1.size());
        return gcdOfStrings(s,s1);
    }
};
