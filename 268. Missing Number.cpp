///268. Missing Number
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int missingNumber(vector<int>& v) 
    {
        int sum=0;
        for(int i=0;i<v.size();i++)
            sum+=v[i];
        return v.size()*(v.size()+1)/2-sum;
    }
};
