///917. Reverse Only Letters
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string reverseOnlyLetters(string s) 
    {
        int l=0,r=s.size()-1;
        while(l<r)
        {
            while((s[l]<'a' || s[l]>'z') && (s[l]<'A' || s[l]>'Z') && l<r)
                l++;
            while((s[r]<'a' || s[r]>'z') && (s[r]<'A' || s[r]>'Z') && l<r)
                r--;
            swap(s[l++],s[r--]);
        }
        return s;
    }
};
