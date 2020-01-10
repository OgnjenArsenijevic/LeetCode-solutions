///1304. Find N Unique Integers Sum up to Zero
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> sumZero(int n) {
        int curr=1;
        vector<int> ans;
        while(n>1)
        {
            n-=2;
            ans.push_back(curr);
            ans.push_back(-curr);
            curr++;
        }
        if(n==1)
            ans.push_back(0);
        return ans;
    }
};
