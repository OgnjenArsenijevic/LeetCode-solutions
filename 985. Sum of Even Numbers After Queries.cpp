///985. Sum of Even Numbers After Queries
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> sumEvenAfterQueries(vector<int>& v, vector<vector<int>>& q) 
    {
        vector<int> ans;
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%2==0)
                sum+=v[i];
        }
        for(int i=0;i<q.size();i++)
        {
            int val=q[i][0];
            int idx=q[i][1];
            if(v[idx]%2==0)
                sum-=v[idx];
            v[idx]+=val;
            if(v[idx]%2==0)
                sum+=v[idx];
            ans.push_back(sum);
        }
        return ans;
    }
};
