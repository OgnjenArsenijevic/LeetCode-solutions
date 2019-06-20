///747. Largest Number At Least Twice of Others
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int dominantIndex(vector<int>& v) 
    {
        int maxi=*max_element(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=maxi && v[i]*2>maxi)
                return -1;
        }
        return max_element(v.begin(),v.end())-v.begin();
    }
};
