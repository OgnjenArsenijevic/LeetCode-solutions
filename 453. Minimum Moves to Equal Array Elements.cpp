///453. Minimum Moves to Equal Array Elements
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int minMoves(vector<int>& v)
    {
        return accumulate(v.begin(),v.end(),0LL)-(*min_element(v.begin(),v.end())*(v.size()));
    }
};
