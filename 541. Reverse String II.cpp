///541. Reverse String II
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string reverseStr(string s, int k) 
    {
        for(int i=0;i<s.size();i+=2*k)
        {
            int val=s.size()-1;
            int r=min(i+k-1,val);
            int l=i;
            while(l<r)
                swap(s[l++],s[r--]);
        }
        return s;
    }
};
