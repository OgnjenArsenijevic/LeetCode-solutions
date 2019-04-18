///215. Kth Largest Element in an Array
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int findKthLargest(vector<int>& v, int k) 
    {
        sort(v.begin(),v.end());
        return v[v.size()-k];
    }
};
