///1331. Rank Transform of an Array
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> arrayRankTransform(vector<int>& arr)
    {
        vector<pair<int,int> > v;
        for(int i=0;i<arr.size();i++)
            v.push_back(make_pair(arr[i],i));
        sort(v.begin(),v.end());
        vector<int> ans(v.size(),0);
        int curr=1;
        for(int i=0;i<v.size();i++)
        {
            if(i==0 || v[i].first==v[i-1].first)
                ans[v[i].second]=curr;
            else
                ans[v[i].second]=++curr;
        }
        return ans;
    }
};
