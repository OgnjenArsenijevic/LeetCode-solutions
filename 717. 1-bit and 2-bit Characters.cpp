///717. 1-bit and 2-bit Characters
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    bool isOneBitCharacter(vector<int>& bits) 
    {
        int i=0;
        while(i<bits.size()-1)
            i+=bits[i]+1;
        return i==(bits.size()-1);
    }
};