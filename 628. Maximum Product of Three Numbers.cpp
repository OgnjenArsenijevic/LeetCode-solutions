///628. Maximum Product of Three Numbers
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int maximumProduct(vector<int>& v) 
    {
        sort(v.begin(),v.end());
        return max(v[v.size()-1]*v[v.size()-2]*v[v.size()-3],v[0]*v[1]*v[v.size()-1]);
    }
};
