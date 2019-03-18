///1005. Maximize Sum Of Array After K Negations
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int largestSumAfterKNegations(vector<int>& v, int k) 
    {
        if(v.size()==0) return 0;
        int ans=0,cnt=0;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            if(cnt==k || v[i]>=0) break;
            if(v[i]<0)
            {
                v[i]*=(-1);
                cnt++;
            }
        }
        k-=cnt;
        sort(v.begin(),v.end());
        if(k&1)
            v[0]*=(-1);
        for(int i=0;i<v.size();i++)
            ans+=v[i];
        return ans;
    }
};
