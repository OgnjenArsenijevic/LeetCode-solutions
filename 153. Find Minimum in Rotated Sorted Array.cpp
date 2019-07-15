///153. Find Minimum in Rotated Sorted Array
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int findMin(vector<int>& v) 
    {
        return *min_element(v.begin(),v.end());
    }
};
