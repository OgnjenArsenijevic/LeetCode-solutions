///6. ZigZag Conversion
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string convert(string s, int numRows) 
    {
        if(numRows==1) return s;
        string ans="";
        int len=2*(numRows-1);
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;j+i<s.size();j+=len)
            {
                ans+=s[j+i];
                if(i!=0 && i!=numRows-1 && j+len-i<s.size())
                    ans+=s[j-i+len];
            }
        }
        return ans;
    }
};
