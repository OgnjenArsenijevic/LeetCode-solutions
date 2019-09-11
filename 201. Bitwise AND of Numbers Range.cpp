///201. Bitwise AND of Numbers Range
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int rangeBitwiseAnd(int m, int n)
    {
        if(m==0) return 0;
        if(m==n) return m;
        m&=(~(0xFFFFFFFF >> __builtin_clz(m ^ n)));
        return m;
    }
};
