///347. Top K Frequent Elements
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    vector<int> topKFrequent(vector<int>& v, int k)     
    {
        unordered_map<int,int> um;
        for(int i=0;i<v.size();i++)
            um[v[i]]++;
        priority_queue<pair<int,int> > pq;
        for(unordered_map<int,int>::iterator it=um.begin();it!=um.end();it++)
            pq.push(make_pair(it->second,it->first));
        int cnt=0;
        vector<int> ans;
        while(cnt<k)
        {
            cnt++;
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
