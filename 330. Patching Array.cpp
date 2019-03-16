///330. Patching Array
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int minPatches(vector<int>& v, int n) 
    {
        int cnt=0,i=0;
        long long currMax=0;
        while(currMax<n)
        {
            if(i<v.size() && v[i]<=currMax+1)
                currMax+=v[i++];
            else
            {
                currMax+=currMax+1;
                cnt++;
            }
        }
        return cnt;
    }
};
