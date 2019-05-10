///908. Smallest Range I
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int smallestRangeI(vector<int>& v, int k)
    {
        return max(0,*max_element(v.begin(),v.end())-(*min_element(v.begin(),v.end()))-2*k);        
    }
};
