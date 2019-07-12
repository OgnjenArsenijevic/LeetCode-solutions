///190. Reverse Bits
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    uint32_t reverseBits(uint32_t n) 
    {
        string s="";
        while(n)
        {
            s+=(n&1 ? "1" : "0");
            n/=2;
        }
        while(s.size()<32)
            s+="0";
        uint32_t ans=0,st2=1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='1')
                ans+=st2;
            st2*=2;
        }
        return ans;
    }
};
