///977. Squares of a Sorted Array
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> sortedSquares(vector<int>& v) 
    {
        if(v.size()==0) return v;
        for(int i=0;i<v.size();i++)
            v[i]*=v[i];
        sort(v.begin(),v.end());
        return v;
    }
};
