///136. Single Number
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int singleNumber(vector<int>& v) 
    {
        return accumulate(v.begin(),v.end(),0,bit_xor<int>());
    }
};
