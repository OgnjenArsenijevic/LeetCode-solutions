///945. Minimum Increment to Make Array Unique
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int minIncrementForUnique(vector<int>& v)
    {
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=1;i<v.size();i++)
        {
           if(v[i]<=v[i-1])
           {
               ans+=(v[i-1]-v[i]+1);
               v[i]=v[i-1]+1;
           }    
        }
        return ans;
    }
};
