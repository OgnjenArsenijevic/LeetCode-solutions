///344. Reverse String
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string reverseString(string s) 
    {
        reverse(s.begin(),s.end());
        return s;
    }
};
