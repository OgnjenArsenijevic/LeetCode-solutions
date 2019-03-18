///693. Binary Number with Alternating Bits
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    bool hasAlternatingBits(int n) 
    {
        int before=-1;
        while(n>0)
        {
            int bit=n&1;
            if(bit==before) return false;
            before=bit;
            n>>=1;
        }
        return true;
    }
};
